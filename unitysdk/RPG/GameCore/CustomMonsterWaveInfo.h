#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CustomMonsterWaveInfo; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BC1F0)
#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5BC200)
#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5BC1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomMonsterWaveInfo_TypeDefinitionIndex = 23699;

	class CustomMonsterWaveInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CurrentWave; // 0x18
		::RPG::GameCore::DynamicFloat* MaxWave; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomMonsterWaveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomMonsterWaveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomMonsterWaveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomMonsterWaveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
