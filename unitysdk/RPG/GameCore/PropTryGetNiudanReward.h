#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropTryGetNiudanReward; }

#define RPG_GAMECORE_PROPTRYGETNIUDANREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92DFC0)
#define RPG_GAMECORE_PROPTRYGETNIUDANREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92DFD0)
#define RPG_GAMECORE_PROPTRYGETNIUDANREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92DF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTryGetNiudanReward_TypeDefinitionIndex = 21970;

	class PropTryGetNiudanReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RollShopId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRYGETNIUDANREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTryGetNiudanReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTryGetNiudanReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRYGETNIUDANREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTryGetNiudanReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTryGetNiudanReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRYGETNIUDANREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
