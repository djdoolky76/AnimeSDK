#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DB8E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x139DBB40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattlePlayUIHint_TypeDefinitionIndex = 47584;

	class LDMusicBattlePlayUIHint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 key, ::System::Single hintTime, ::MoleMole::Config::MusicBattleMarkerNodeType color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT_INVOKE_OFFSET))(this, key, hintTime, color);
		}
	};
}
