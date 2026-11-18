#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_ICONCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x142FA690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_ICONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x142FA7F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCountDownUI_IconChange_TypeDefinitionIndex = 50017;

	class LDCountDownUI_IconChange
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_ICONCHANGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* iconKey, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_ICONCHANGE_INVOKE_OFFSET))(this, iconKey, playAnim);
		}
	};
}
