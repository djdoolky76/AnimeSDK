#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Project::Config { class AbyssS2SuddenEventTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BC370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BC3E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2QuerySuddenEventConfig_TypeDefinitionIndex = 74665;

	class LDAbyssS2QuerySuddenEventConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt* Invoke(::System::Int32 suddenEventID)
		{
			return ((::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYSUDDENEVENTCONFIG_INVOKE_OFFSET))(this, suddenEventID);
		}
	};
}
