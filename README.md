# BMP_to_ASCII
 - Very trivial Bitmap to ASCII converter
 - 2012 Summer

## 24 bit BMP File
- BMP file header: 14 byte
- DIB header: 40 byte
- Pixel data
	- 1 byte each for RGB $\rightarrow$ total 3 byte (=24 bit) for each pixel
	- The size of each row is rounded up to a multiple of 4 bytes $\rightarrow$ padding

### Example
- input.bmp (210 x 210)
	- Header: 14 + 40 = 54 byte
	- Pixel data: 210 x (210 x 3 + 2) = 132720 byte
	- Total 132774 byte