NAME=main
$(NAME).pdf: $(NAME).tex
	rubber --pdf $<

view: $(NAME).pdf
	evince $<

clean:
	-rm $(NAME).aux  $(NAME).log  $(NAME).nav  $(NAME).out  $(NAME).pdf  $(NAME).snm  $(NAME).toc  $(NAME).vrb

