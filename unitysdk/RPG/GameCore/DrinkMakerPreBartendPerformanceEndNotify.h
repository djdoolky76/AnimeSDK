#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerPreBartendPerformanceEndNotify; }

#define RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F5FE0)
#define RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F5FF0)
#define RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F5F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerPreBartendPerformanceEndNotify_TypeDefinitionIndex = 21713;

	class DrinkMakerPreBartendPerformanceEndNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
