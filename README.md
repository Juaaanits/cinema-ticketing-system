# Cinema Ticketing and Snack Availment System

## 📖 Overview

This is a **console-based Cinema Ticketing and Snack Availment System** built using **C++**. It simulates a real-world cinema point-of-sale experience, enabling customers to purchase movie tickets, receive applicable discounts, buy snacks, and get a detailed official receipt — all from the terminal.

---

## 📋 Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Features in Detail](#features-in-detail)
- [Future Enhancements](#future-enhancements)
- [License](#license)

---

## 🌟 Features

### 🎟️ Movie Ticket Reservation
- Inputs customer name, age, and status
- Supported classifications with automatic discounts:
  - **Student**: 30%
  - **PWD**: 40%
  - **Senior Citizen**: 50%
- Displays available movies
- Validates customer meets age requirement for “Rated 18”

### 💰 Discount System
- Automatically calculates discounted prices
- Shows both original and discounted totals

### 🍿 Snack Ordering System
- Snack menu includes:
  - Blockbuster Snack
  - Loaded Nachos
  - Cheese Burger Combo
  - Hotdog with Drinks
  - Drinks (with free refills)
- Supports quantity selection and dynamic total calculation

### 🧾 Receipt Generation
- Formatted receipt includes:
  - Customer info
  - Movie and screening details
  - Ticket and snack totals
  - Discounts
  - Payment and change

---

## 🛠 Requirements

- C++ compiler: `g++`, `clang++`, or Visual Studio
- Command-line terminal
- **Windows recommended** (uses `system("cls")`)

---

## 🔧 Installation

1. Clone or download the repository.
2. Open a terminal and navigate to the project directory.
3. Compile the source code:

   ```bash
   g++ -o CinemaSystem main.cpp
   ```

---

## ▶️ Usage

Run the program from your terminal:

```bash
./CinemaSystem
```

Then follow the on-screen instructions to:
- Enter customer info
- Select a movie
- Order snacks
- Make payment
- Receive a full receipt

---

## 🔍 Features in Detail

1. **Customer Registration**  
   Prompts for name, age, and discount classification.

2. **Movie Selection**  
   Lists movies and allows selection with confirmation.

3. **Age Verification**  
   Ensures the customer is eligible for “Rated 18” films.

4. **Ticket Pricing**  
   - Base price: ₱250  
   - Applies discount automatically

5. **Snack Ordering**  
   - Select one or multiple snacks  
   - Real-time total updates

6. **Payment Processing**  
   - Accepts amount from user  
   - Calculates and returns change

7. **Receipt Generation**  
   - Well-formatted summary with all details

---

## 🚀 Future Enhancements

### ✅ Beginner-Friendly
- [ ] Multiple screening times (10 AM, 1 PM, etc.)
- [ ] Seat selection (A1–J10)
- [ ] Input validation to prevent crashes
- [ ] Save receipts as `.txt` files
- [ ] Loop program for multiple customers
- [ ] Add Student/PWD/Senior ID number field

### 🔶 Intermediate
- [ ] Promo codes (e.g., `MOVIEDAY`)
- [ ] Loyalty/rewards system
- [ ] Snack combos (Combo A/B)
- [ ] Multiple payment methods (Cash, GCash, Credit Card)
- [ ] VAT calculation (12%)

### 🔷 Advanced
- [ ] Persistent file storage for logs and seats
- [ ] Real-time seat tracking
- [ ] Modular code structure (`selectMovie()`, `orderSnacks()`, etc.)
- [ ] Admin Mode:
  - View sales
  - Booked seats
  - Reset system
  - View logs
- [ ] GUI Upgrade:
  - Using **Qt**, **SFML**, or **C# Windows Forms**

### 🎯 Recommended First Upgrades
Start with:
- Seat selection
- Screening times
- Receipt file saving
- Payment method selection
- Input validation
- Promo code support

---

## 📄 License

This project is open for educational and personal use. Please give credit if you adapt or extend the code.

---
