#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_PLIMDEOOHHO_BAOFKEFNPMI_OFFSET UNITYSDK_OFFSET(0x10DA9E20)
#define NMMDCJGKHOB_PLIMDEOOHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA5E90)

inline static constexpr unsigned int NMMDCJGKHOB_PLIMDEOOHHO_TypeDefinitionIndex = 54821;

class NMMDCJGKHOB_PLIMDEOOHHO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::UInt32 PKMFBJMJCOO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_PLIMDEOOHHO__CTOR_OFFSET))(this);
	}

	::System::Void BAOFKEFNPMI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_PLIMDEOOHHO_BAOFKEFNPMI_OFFSET))(this, PIIPCLCCOIG);
	}
};
