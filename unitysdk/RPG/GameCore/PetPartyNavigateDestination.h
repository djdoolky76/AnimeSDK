#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyNavigateDestination; }

#define RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A4A0)
#define RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90AAF0)
#define RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90A4B0)

namespace RPG::GameCore
{
	class PetPartyNavigateDestination : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyNavigateDestination* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyNavigateDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyNavigateDestination* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyNavigateDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
