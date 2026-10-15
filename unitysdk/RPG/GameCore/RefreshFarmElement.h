#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshFarmElement; }

#define RPG_GAMECORE_REFRESHFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9762D0)
#define RPG_GAMECORE_REFRESHFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9762E0)
#define RPG_GAMECORE_REFRESHFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D976210)

namespace RPG::GameCore
{
	class RefreshFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
