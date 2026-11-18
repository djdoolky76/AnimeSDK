#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D15F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D16120)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetBattleInOutState_TypeDefinitionIndex = 45256;

	class LDSetBattleInOutState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean isInBattle, ::System::Boolean isImmediatelyCameraStateIn)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE_INVOKE_OFFSET))(this, isInBattle, isImmediatelyCameraStateIn);
		}
	};
}
