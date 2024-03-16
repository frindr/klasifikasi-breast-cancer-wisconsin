#Lokasi File
setwd("D:/tbdamin")

#Dataset yang Digunakan
dataset <- read.csv("breast-cancer-wisconsin.csv", sep = ",")

#Deskripsi Dataset
View(dataset)
summary(dataset)
str(dataset)

#Preprocessing Dataset
dataset$barenuclei <- as.integer(dataset$barenuclei)
dataset <- na.omit(dataset)
dataset$barenuclei <- as.integer(dataset$barenuclei)

#Menjadikan Kolom Keputusan / Faktor
dataset$benormal <- as.factor(dataset$benormal)

#Library yang Digunakan
library(C50)
library(printr)

#Membuat Model
model <- C5.0(benormal ~., data=dataset)

#Melihat Hasil Model
model
summary(model)

#Gambar Model
plot(model)

#Membuat Dataset
datatesting <- dataset[1:10]

#Prediksi
predictions <- predict(model, datatesting)

#Bandingkan Hasil Prediksi dengan Dataset
table(predictions, dataset$benormal)

#Hitung Akurasi
correct_predictions <- sum(predictions == dataset$benormal[1:length(predictions)])
accuracy <- correct_predictions / length(predictions)
cat("Jumlah hasil prediksi yang benar:", correct_predictions)
cat("Akurasi:", round(accuracy * 100, 2), "%")
