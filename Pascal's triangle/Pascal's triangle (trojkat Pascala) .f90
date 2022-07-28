!Autor: Anastasiya Kruhlik
program trojkat_Pascala
  implicit none
  integer :: n, j, i, c(0:16)=0 

  
  write (*,*) 'Autor: Anastasiya Kruhlik' 
  write (*,*) 'Projekt: Trojkat Pascala'
  write (*,*)

1 write (*,'(A)', advance="no") 'Podaj stopien dwumianu Newtona (max 15): '
  read (*,*) n
  write (*,*)
   if (n .GT. 15) then 
    write (*,*) 'Stopien wiekszy niz 15!'
    write (*,*)
    goto 1
   end if
   
  write (*,'(A)', advance="no") 'Stopien'
    do i=0, n
      write (*,'(A)', advance="no") ' '
    enddo !i  
  write (*,'(A)')  'Trojkat Pascala'
  write (*,*)

  c(0) = 1
  do i = 0, n
   write (*,'(I2,A)', advance="no") i, " "
     do j=1, n-i
      write (*,'(A)', advance="no") "   " 
     enddo !j
    c(1:i) = c(1:i) + c(0:i-1)
    write (*,'(I2, 20I6)') c(0:i)
    write (*,*)
  enddo !i
 stop
end program trojkat_Pascala 
