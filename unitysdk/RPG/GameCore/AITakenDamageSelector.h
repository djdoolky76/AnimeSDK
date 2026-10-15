#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AICompareStrategy.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AITakenDamageStatisticType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AITakenDamageSelector; }

#define RPG_GAMECORE_AITAKENDAMAGESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33ABD0)
#define RPG_GAMECORE_AITAKENDAMAGESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33ABE0)
#define RPG_GAMECORE_AITAKENDAMAGESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33B5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITakenDamageSelector_TypeDefinitionIndex = 15599;

	class AITakenDamageSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AITakenDamageStatisticType StatisticType; // 0x10
		::RPG::GameCore::AICompareStrategy CompareStrategy; // 0x14
		::System::Boolean InverseResultFlag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITAKENDAMAGESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITakenDamageSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITakenDamageSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITAKENDAMAGESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITakenDamageSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITakenDamageSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITAKENDAMAGESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
