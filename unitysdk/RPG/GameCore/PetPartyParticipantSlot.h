#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyParticipantSlot; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYPARTICIPANTSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90AC80)
#define RPG_GAMECORE_PETPARTYPARTICIPANTSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90AB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyParticipantSlot_TypeDefinitionIndex = 17542;

	class PetPartyParticipantSlot : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RequiredTag; // 0x10
		::System::String* RoleName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyParticipantSlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyParticipantSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSLOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
