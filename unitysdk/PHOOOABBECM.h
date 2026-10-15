#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaStyleExpChangeParam; }

#define PHOOOABBECM_CTOR_OFFSET UNITYSDK_OFFSET(0xC259640)
#define PHOOOABBECM_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC259650)

inline static constexpr unsigned int PHOOOABBECM_TypeDefinitionIndex = 67045;

	class PHOOOABBECM : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaStyleExpChangeParam* DMFEKIIDMFL; // 0x10
		::System::Void _ctor(::RPG::Client::RogueTournPersonaStyleExpChangeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleExpChangeParam*))((::PBYTE)hIl2Cpp + PHOOOABBECM_CTOR_OFFSET))(this, a1);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOOOABBECM_TRIGGERACTION_OFFSET))(this);
		}

	};
