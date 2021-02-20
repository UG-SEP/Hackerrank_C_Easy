int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    return (b.length*b.width*b.height);
}

int is_lower_than_max_height(box b) {
	/**
    if()
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if(MAX_HEIGHT>b.height)
    return 1;
    else 
return(0);
    
}
