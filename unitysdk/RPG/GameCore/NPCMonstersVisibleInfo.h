#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCMonstersVisibleInfo; }

#define RPG_GAMECORE_NPCMONSTERSVISIBLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A4BB0)
#define RPG_GAMECORE_NPCMONSTERSVISIBLEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A4A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonstersVisibleInfo_TypeDefinitionIndex = 20321;

	class NPCMonstersVisibleInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupMonsterID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERSVISIBLEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCMonstersVisibleInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCMonstersVisibleInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERSVISIBLEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
