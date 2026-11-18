#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InLevelMissionTipSourceType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMISSIONTIP_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D17370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMISSIONTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x10D173D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowMissionTip_TypeDefinitionIndex = 92793;

	class LDShowMissionTip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMISSIONTIP__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isShow, ::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType type, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMISSIONTIP_INVOKE_OFFSET))(this, isShow, type, id);
		}
	};
}
