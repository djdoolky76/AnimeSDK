#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightWaveMonsterEntry; }
namespace RPG::GameCore { class GridFightWaveMonsterInfo; }

#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71C880)
#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71C670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaveMonsterInfo_TypeDefinitionIndex = 18167;

	class GridFightWaveMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EliteGroup2; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 HardLevel; // 0x18
		::System::UInt32 FormationWaveID; // 0x1C
		::Il2CppArray<::RPG::GameCore::GridFightWaveMonsterEntry*>* MonsterList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaveMonsterInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaveMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
