.PHONY: clean All

All:
	@echo "----------Building project:[ Sum-of-Array - Debug ]----------"
	@cd "Sum-of-Array" && "$(MAKE)" -f  "Sum-of-Array.mk" C:/Users/mcdan/Documents/C Homework/stdc++.h.gch && "$(MAKE)" -f  "Sum-of-Array.mk"
clean:
	@echo "----------Cleaning project:[ Sum-of-Array - Debug ]----------"
	@cd "Sum-of-Array" && "$(MAKE)" -f  "Sum-of-Array.mk" clean
