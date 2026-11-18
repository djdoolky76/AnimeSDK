#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON_INVOKE_OFFSET UNITYSDK_OFFSET(0x16237F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x16238150)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleActivateSkillButton_TypeDefinitionIndex = 72280;

	class LDMusicBattleActivateSkillButton
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isAttackMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON_INVOKE_OFFSET))(this, isAttackMode);
		}
	};
}
