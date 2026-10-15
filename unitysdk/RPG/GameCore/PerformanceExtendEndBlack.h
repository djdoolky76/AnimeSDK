#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceExtendEndBlack; }

#define RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CE720)
#define RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8CE730)
#define RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CE6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceExtendEndBlack_TypeDefinitionIndex = 21919;

	class PerformanceExtendEndBlack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ExtendTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceExtendEndBlack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceExtendEndBlack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceExtendEndBlack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceExtendEndBlack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEXTENDENDBLACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
