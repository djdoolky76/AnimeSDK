#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C62B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C6480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAvatarEnterBattleState_TypeDefinitionIndex = 79785;

	class LDSetAvatarEnterBattleState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean isEnterBattle, ::System::String* tag, ::System::Boolean isPush)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE_INVOKE_OFFSET))(this, isEnterBattle, tag, isPush);
		}
	};
}
