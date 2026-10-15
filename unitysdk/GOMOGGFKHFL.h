#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHPMJLMOMFL;
class LOINMJBGBKJ;
namespace RPG::Client { class RelicItemData; }

#define GOMOGGFKHFL_AGOPPADDBFF_OFFSET UNITYSDK_OFFSET(0x15B2E860)
#define GOMOGGFKHFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2E850)
#define GOMOGGFKHFL_KIEAJPNOENF_OFFSET UNITYSDK_OFFSET(0x15B2E930)

inline static constexpr unsigned int GOMOGGFKHFL_TypeDefinitionIndex = 74437;

	class GOMOGGFKHFL : public ::System::Object
	{
	public:
		::FHPMJLMOMFL* GANLOCFFMEF; // 0x10
		::System::Void _ctor(::FHPMJLMOMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHPMJLMOMFL*))((::PBYTE)hIl2Cpp + GOMOGGFKHFL_CTOR_OFFSET))(this, a1);
		}

		::LOINMJBGBKJ* AGOPPADDBFF(::RPG::Client::RelicItemData* a1)
		{
			return ((::LOINMJBGBKJ*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + GOMOGGFKHFL_AGOPPADDBFF_OFFSET))(this, a1);
		}

		::System::Single KIEAJPNOENF(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + GOMOGGFKHFL_KIEAJPNOENF_OFFSET))(this, a1);
		}

	};
