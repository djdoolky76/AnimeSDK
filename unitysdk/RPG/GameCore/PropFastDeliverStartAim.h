#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropFastDeliverStartAim; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94D530)
#define RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94D560)
#define RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94D4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverStartAim_TypeDefinitionIndex = 22163;

	class PropFastDeliverStartAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverStartAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverStartAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverStartAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverStartAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSTARTAIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
