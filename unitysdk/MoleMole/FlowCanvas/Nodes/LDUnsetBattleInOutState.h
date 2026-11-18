#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D18E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D18FF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDUnsetBattleInOutState_TypeDefinitionIndex = 50680;

	class LDUnsetBattleInOutState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE_INVOKE_OFFSET))(this);
		}
	};
}
