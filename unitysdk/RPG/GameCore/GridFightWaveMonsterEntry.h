#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightWaveMonsterEntry; }

#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71C660)
#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71C540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaveMonsterEntry_TypeDefinitionIndex = 18166;

	class GridFightWaveMonsterEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x10
		::System::UInt32 Star; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightWaveMonsterEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightWaveMonsterEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
