gnome_project_c_sources = [
  'main.c',
  'gnome_project_c-window.c',
  'gnome_project_c-application.c',
]

gnome_project_c_deps = [
  dependency('libadwaita-1', version: '>= 1.0'),
]

gnome = import('gnome')

gnome_project_c_sources += gnome.compile_resources('gnome_project_c-resources',
  'gnome_project_c.gresource.xml',
  c_name: 'gnome_project_c'
)

executable('gnome_project_c', gnome_project_c_sources,
  dependencies: gnome_project_c_deps,
  install: true,
)
