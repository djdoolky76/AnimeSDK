#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_LEFTTEXTCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1190BA10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_LEFTTEXTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190BB70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCountDownUI_LeftTextChange_TypeDefinitionIndex = 39561;

	class LDCountDownUI_LeftTextChange
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_LEFTTEXTCHANGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_LEFTTEXTCHANGE_INVOKE_OFFSET))(this, textKey);
		}
	};
}
