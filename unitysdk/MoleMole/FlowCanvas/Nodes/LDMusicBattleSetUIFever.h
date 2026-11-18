#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C52E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C5500)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleSetUIFever_TypeDefinitionIndex = 83170;

	class LDMusicBattleSetUIFever
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single feverPercentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER_INVOKE_OFFSET))(this, feverPercentage);
		}
	};
}
