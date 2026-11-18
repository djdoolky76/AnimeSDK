#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Project::Config { class MechaConfigTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B39F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3A000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooGetCurScriptConfig_TypeDefinitionIndex = 72856;

	class LDMechBooGetCurScriptConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::MechaConfigTemplateExt* Invoke()
		{
			return ((::MoleMole::Project::Config::MechaConfigTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETCURSCRIPTCONFIG_INVOKE_OFFSET))(this);
		}
	};
}
