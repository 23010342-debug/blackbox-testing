# TEST REPORT - BLACK BOX TESTING

## 1. Giới thiệu
Báo cáo này trình bày kết quả kiểm thử hộp đen cho các bài toán cơ bản:
- Tính chu vi hình chữ nhật
- Tính diện tích hình chữ nhật
- Giải phương trình bậc 2
- Tính số ngày trong tháng
- Kiểm tra số nguyên tố
- Tính tổng xen kẽ
- Tìm UCLN
- Tính tổng giai thừa

---

## 2. Phương pháp kiểm thử
Sử dụng các kỹ thuật:
- Phân lớp tương đương
- Phân tích giá trị biên
- Kiểm tra dữ liệu hợp lệ và không hợp lệ

---

## 3. Kết quả kiểm thử

### 3.1 Dữ liệu hợp lệ

| STT | Chức năng | Input | Kết quả mong đợi | Kết quả thực tế | Trạng thái |
|-----|----------|------|------------------|----------------|------------|
| 1 | Chu vi | (5,3) | 16 | 16 | PASS |
| 2 | Diện tích | (5,3) | 15 | 15 | PASS |
| 3 | PT bậc 2 | (1,-3,2) | x=1,2 | đúng | PASS |
| 4 | Ngày | (2,2024) | 29 | 29 | PASS |
| 5 | SNT | 7 | nguyên tố | đúng | PASS |
| 6 | Tổng | 5 | 3 | 3 | PASS |
| 7 | UCLN | (12,18) | 6 | 6 | PASS |
| 8 | Giai thừa | 5 | 153 | 153 | PASS |

---

### 3.2 Dữ liệu không hợp lệ

| STT | Chức năng | Input | Kết quả mong đợi | Kết quả thực tế | Trạng thái |
|-----|----------|------|------------------|----------------|------------|
| 1 | Chu vi | (-1,3) | lỗi | lỗi | PASS |
| 2 | Diện tích | (0,5) | lỗi | lỗi | PASS |
| 3 | PT | (0,0,1) | vô nghiệm | đúng | PASS |
| 4 | Ngày | (13,2023) | lỗi | lỗi | PASS |
| 5 | SNT | -5 | lỗi | lỗi | PASS |
| 6 | Tổng | -3 | lỗi | lỗi | PASS |
| 7 | UCLN | (0,0) | lỗi | lỗi | PASS |
| 8 | Giai thừa | -2 | lỗi | lỗi | PASS |

---

## 4. Kết luận
- Chương trình hoạt động đúng với dữ liệu hợp lệ
- Xử lý tốt các trường hợp dữ liệu không hợp lệ
- Đảm bảo yêu cầu kiểm thử hộp đen

---

## 5. Nhận xét
Việc áp dụng kiểm thử hộp đen giúp phát hiện lỗi nhanh chóng mà không cần quan tâm đến mã nguồn bên trong.
