#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace System { class Object; }

#define GKCNCLIOFDA_FGAIJIBMILD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8E840)
#define GKCNCLIOFDA_FGAIJIBMILD_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A90550)
#define GKCNCLIOFDA_FGAIJIBMILD_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A90560)

	class GKCNCLIOFDA_FGAIJIBMILD : public ::System::Object
	{
	public:
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Participants_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FGAIJIBMILD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
		{
			return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FGAIJIBMILD_GET_DEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Participants()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FGAIJIBMILD_GET_PARTICIPANTS_OFFSET))(this);
		}

	};
