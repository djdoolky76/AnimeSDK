#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStartFarmElement; }

#define RPG_GAMECORE_PROPSTARTFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9581E0)
#define RPG_GAMECORE_PROPSTARTFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9581F0)
#define RPG_GAMECORE_PROPSTARTFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D958120)

namespace RPG::GameCore
{
	class PropStartFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStartFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStartFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
