/* Generated by mkjambase from Jambase */
char *jambase[] = {
/* pbxJambase */
"NEXT_ROOT ?= \"\" ;\n",
"if $(JAMBASE) = \"\" {\n",
"if $(OS) = NT {\n",
"SYSTEM_DEVELOPER_DIR = /Developer ;\n",
"} else {\n",
"SYSTEM_DEVELOPER_DIR = /Developer ;\n",
"}\n",
"if $(OS) = NT {\n",
"LOCAL_DEVELOPER_DIR = /Local/Developer ;\n",
"} else {\n",
"LOCAL_DEVELOPER_DIR = /Library/Developer ;\n",
"}\n",
"JAMBASE_DIR ?= $(NEXT_ROOT)$(SYSTEM_DEVELOPER_DIR)/Makefiles/pbx_jamfiles ;\n",
"include $(JAMBASE_DIR)/Jambase ;\n",
"}\n",
"else {\n",
"JAMBASE_DIR = $(JAMBASE:D) ;\n",
"include $(JAMBASE) ;\n",
"}\n",
0 };
