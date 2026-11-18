#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4B18F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B1AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleSetScore_TypeDefinitionIndex = 63044;

	class LDMusicBattleSetScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE_INVOKE_OFFSET))(this, score);
		}
	};
}
