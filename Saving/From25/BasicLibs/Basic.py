# Vars:
#base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#abcdefghijklmnopqrstuvwxyz-+/"

# Basic functions:

def Lerp(a, b, t):
    """
    Linear interpolation between two values a and b with t as the interpolation factor.
    """
    return a + (b - a) * t
def Clamp(value, min_value, max_value):
    """
    Clamp the value between min_value and max_value.
    """
    return max(min_value, min(value, max_value))



# Color conversion functions
def HueToRGB(hue):
    # Convert hue to RGB
    if hue < 0 or hue > 360:
        raise ValueError("Hue must be between 0 and 360 degrees")
    
    c = 1
    x = c * (1 - abs((hue / 60) % 2 - 1))
    m = 0

    if hue < 60:
        r, g, b = c, x, m
    elif hue < 120:
        r, g, b = x, c, m
    elif hue < 240:
        r, g, b = m, c, x
    elif hue < 300:
        r, g, b = x, m, c
    else:
        r, g, b = c, m, x

    return int((r + m) * 255), int((g + m) * 255), int((b + m) * 255)

