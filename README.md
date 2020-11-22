
<pre><h1>                 AVR C BLINK PROJECT on STK500</h1></pre> 
<p>
This example project blinks two LEDs of PORTD with a dealy of 1000ms. In order
to correctly build this project on STK500 Board:
<ol>
<li>Tools->add Target chose the appropriate COM port.</li>
<li>Tool->Device programming.</li>
<li>Memory, select a .hex generated file in appropriate path.</li>
<li>Click program.</li>
</ol>
</p>

<p><b>Note:</b> You might want to callibrate the internal clock. Go to Fuse, LOWSUT_CKSEL
	         Select the appropriate clock. In my case I set it to 4MHz, both in the fuse
		 As well as in the #define F_CPU 4000000UL. (UL means Unsigned Long).			
</p>

