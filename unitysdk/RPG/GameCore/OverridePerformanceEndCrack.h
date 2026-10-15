#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverridePerformanceEndCrack; }

#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BB210)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BB220)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BB1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverridePerformanceEndCrack_TypeDefinitionIndex = 21916;

	class OverridePerformanceEndCrack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EndWithCrack; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverridePerformanceEndCrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverridePerformanceEndCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverridePerformanceEndCrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverridePerformanceEndCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDCRACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
