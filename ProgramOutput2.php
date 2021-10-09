ProgramOutput2
<?php
$n = 1;
$max = 5;
$increment = $decrement = '';
while ($n <= $max) 
{
	for ($n2=1; $n2<=$n; $n2++) {
		$increment .= $n;
	}
	$increment .= '<br/>';
	
	for ($n2 = $max; $n2>=$n; $n2--) {
		$decrement .= $max + 1 - $n;
	}
	$decrement .= '<br/>';
	
	$n++;
}
echo $increment . $decrement;