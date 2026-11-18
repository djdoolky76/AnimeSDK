#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class IGFKHLHKOAP_FPAIONPKLDP;
namespace System { class Action; }

#define IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA_CNCFLFDLGLP_OFFSET UNITYSDK_OFFSET(0x1A3A0BF0)
#define IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA_EMHJBFPCKEJ_OFFSET UNITYSDK_OFFSET(0x1A3A0AA0)
#define IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A0A90)

inline static constexpr unsigned int IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA_TypeDefinitionIndex = 64017;

class IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA : public ::System::Object
{
public:
	::IGFKHLHKOAP_FPAIONPKLDP* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA__CTOR_OFFSET))(this);
	}

	::System::Void EMHJBFPCKEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA_EMHJBFPCKEJ_OFFSET))(this);
	}

	::System::Void CNCFLFDLGLP(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FPAIONPKLDP_PKPEJFKFLGA_CNCFLFDLGLP_OFFSET))(this, HPADNAEINPK);
	}
};
