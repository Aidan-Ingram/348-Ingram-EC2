function changeColorAndBorder() {
    const colorInput = document.getElementById('color-input').value;
    const borderColorInput = document.getElementById('border-color-input').value;
    const borderInput = document.getElementById('border-input').value;
    const paragraph = document.getElementById('color-paragraph');

    paragraph.style.borderColor = 'rgb(' + borderColorInput + ')';
    paragraph.style.backgroundColor = 'rgb(' + colorInput + ')';
    paragraph.style.borderWidth = borderInput + 'px';
}