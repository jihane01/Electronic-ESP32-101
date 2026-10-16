# 🔌 ESP32-LABs — De la LED à la Physical AI

> Série de LABs pédagogiques pour apprendre la robotique, l'électronique embarquée et la **Physical AI** avec un ESP32 — du premier clignotement de LED jusqu'aux systèmes intelligents.

![Status](https://img.shields.io/badge/status-en%20cours-yellow)
![Platform](https://img.shields.io/badge/platform-ESP32-blue)
![Framework](https://img.shields.io/badge/framework-Arduino-teal)
![IDE](https://img.shields.io/badge/IDE-PlatformIO-orange)
![License](https://img.shields.io/badge/license-MIT-green)

---

## 🎯 Objectif du projet

Ce repository regroupe une **progression de 10 LABs** conçus pour les débutants en électronique et en robotique.

Chaque LAB ajoute une nouvelle compétence, en partant des bases (allumer une LED) jusqu'à la construction de systèmes complets (capteurs, actionneurs, IoT).

**L'objectif final :** comprendre comment un microcontrôleur **perçoit**, **décide** et **agit** sur son environnement — la boucle fondamentale de la **Physical AI**.

---

## 🛠️ Matériel requis

| Composant | Quantité | Rôle |
|-----------|----------|------|
| **ESP32 DevKit** | 1 | Microcontrôleur principal |
| **LEDs** (rouge, verte, jaune) | 3 | Actionneurs visuels |
| **Résistances 220 Ω** | 3+ | Protection des LEDs |
| **Breadboard** | 1 | Câblage sans soudure |
| **Jumpers** | 10+ | Connexions |
| **Câble USB** | 1 | Alimentation + programmation |

**Optionnels (pour les LABs avancés) :**
- Bouton poussoir
- Potentiomètre
- Servo-moteur MG90S
- Capteur à ultrasons HC-SR04
- Buzzer actif 5V
- Transistor NPN (2N2222 ou similaire)

---

## 💻 Environnement logiciel

- **VS Code** — éditeur de code
- **PlatformIO IDE** — extension VS Code pour l'embarqué
- **Framework Arduino** — pour la programmation
- **Driver USB** (CP210x ou CH340 selon la carte)

---

## 📚 Progression des LABs

### 🟢 Niveau 1 — Les fondations

---

### 🔵 LAB 01 — Allumer une LED

**🎯 Objectif :** Faire s'allumer une LED rouge avec l'ESP32.

**🧩 Compétences :**
- Comprendre ce qu'est un GPIO
- Notion de HIGH / LOW (3.3V / 0V)
- Rôle de la résistance de protection (220 Ω)
- Premier programme embarqué

**🔌 Câblage :**