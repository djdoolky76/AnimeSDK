#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaStyleExpChangeParam; }

#define IILNAKFNHPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1643D250)
#define IILNAKFNHPO_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1643D260)

inline static constexpr unsigned int IILNAKFNHPO_TypeDefinitionIndex = 67039;

	class IILNAKFNHPO : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaStyleExpChangeParam* DMFEKIIDMFL; // 0x10
		::System::Void _ctor(::RPG::Client::RogueTournPersonaStyleExpChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleExpChangeParam*))((::PBYTE)hIl2Cpp + IILNAKFNHPO_CTOR_OFFSET))(this, a1);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILNAKFNHPO_TRIGGERACTION_OFFSET))(this);
		}

	};
