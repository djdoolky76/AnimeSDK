#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3A8E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3AB00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleActivateUIFever_TypeDefinitionIndex = 61939;

	class LDMusicBattleActivateUIFever
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER_INVOKE_OFFSET))(this, feverTime);
		}
	};
}
