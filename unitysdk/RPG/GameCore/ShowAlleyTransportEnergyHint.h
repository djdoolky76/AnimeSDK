#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowAlleyTransportEnergyHint; }

#define RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE86F0)
#define RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECE8700)
#define RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECE86C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAlleyTransportEnergyHint_TypeDefinitionIndex = 24748;

	class ShowAlleyTransportEnergyHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAlleyTransportEnergyHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAlleyTransportEnergyHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAlleyTransportEnergyHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAlleyTransportEnergyHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYTRANSPORTENERGYHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
