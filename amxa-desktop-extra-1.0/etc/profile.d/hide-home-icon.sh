if test "$(cat /etc/puavo/hosttype)" = "laptop"; then
  gsettings set org.gnome.nautilus.desktop home-icon-visible false
else
  gsettings set org.gnome.nautilus.desktop home-icon-visible true
fi

