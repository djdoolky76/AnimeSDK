#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace System { class Object; }

#define GKCNCLIOFDA_FGAIJIBMILD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A82D40)
#define GKCNCLIOFDA_FGAIJIBMILD_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A84A50)
#define GKCNCLIOFDA_FGAIJIBMILD_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A84A60)

inline static constexpr unsigned int GKCNCLIOFDA_FGAIJIBMILD_TypeDefinitionIndex = 53524;

	class GKCNCLIOFDA_FGAIJIBMILD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _Participants_k__BackingField; // 0x10
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x18
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
