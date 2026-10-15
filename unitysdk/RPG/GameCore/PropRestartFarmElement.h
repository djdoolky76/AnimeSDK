#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropRestartFarmElement; }

#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D925910)
#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D925920)
#define RPG_GAMECORE_PROPRESTARTFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D925850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRestartFarmElement_TypeDefinitionIndex = 22089;

	class PropRestartFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRestartFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRestartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRestartFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRestartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESTARTFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
