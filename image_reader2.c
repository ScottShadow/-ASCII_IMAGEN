/** #include <gtk/gtk.h>

static void destroy(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Image Viewer");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    // Create a scrolled window
    GtkWidget *scrolled_window = gtk_scrolled_window_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER(window), scrolled_window);

    // Load and display image
    GtkWidget *image = gtk_image_new_from_file("david.png");
    gtk_container_add(GTK_CONTAINER(scrolled_window), image);

    // Add navigation buttons
    GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
    GtkWidget *prev_button = gtk_button_new_with_label("Previous");
    GtkWidget *next_button = gtk_button_new_with_label("Next");
    gtk_box_pack_start(GTK_BOX(hbox), prev_button, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), next_button, FALSE, FALSE, 0);
    g_signal_connect(prev_button, "clicked", G_CALLBACK(/* Implement previous image functionality /), NULL);
    g_signal_connect(next_button, "clicked", G_CALLBACK(/* Implement next image functionality "/), NULL);
    gtk_container_add(GTK_CONTAINER(scrolled_window), hbox);

    // Create a status bar
    GtkWidget *status_bar = gtk_statusbar_new();
    gtk_statusbar_push(GTK_STATUSBAR(status_bar), gtk_statusbar_get_context_id(GTK_STATUSBAR(status_bar), "Image Viewer"), "Welcome to Image Viewer");
    gtk_box_pack_start(GTK_BOX(hbox), status_bar, FALSE, FALSE, 0);

    // Show everything
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}
  */