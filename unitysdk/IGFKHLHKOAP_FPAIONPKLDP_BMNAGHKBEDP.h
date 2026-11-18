#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class IGFKHLHKOAP_FPAIONPKLDP;
namespace System { class Action; }

#define IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP_HFEAKKKJLII_OFFSET UNITYSDK_OFFSET(0x16F66B20)
#define IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP_LPGCHLIGOLL_OFFSET UNITYSDK_OFFSET(0x16F66DE0)
#define IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F65470)

inline static constexpr unsigned int IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP_TypeDefinitionIndex = 64016;

class IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP : public ::System::Object
{
public:
	::IGFKHLHKOAP_FPAIONPKLDP* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP__CTOR_OFFSET))(this);
	}

	::System::Void HFEAKKKJLII(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP_HFEAKKKJLII_OFFSET))(this, HPADNAEINPK);
	}

	::System::Void LPGCHLIGOLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FPAIONPKLDP_BMNAGHKBEDP_LPGCHLIGOLL_OFFSET))(this);
	}
};
