#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x143038F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x14303980)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleGetFever_TypeDefinitionIndex = 82985;

	class LDMusicBattleGetFever
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER_INVOKE_OFFSET))(this);
		}
	};
}
