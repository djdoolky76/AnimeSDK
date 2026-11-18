#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DBB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x139DBD20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleSetUICombo_TypeDefinitionIndex = 83441;

	class LDMusicBattleSetUICombo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 comboCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO_INVOKE_OFFSET))(this, comboCount);
		}
	};
}
