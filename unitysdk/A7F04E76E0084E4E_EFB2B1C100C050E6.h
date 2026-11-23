#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A7F04E76E0084E4E_EFB2B1C100C050E6_B1A19A839CB90610_OFFSET UNITYSDK_OFFSET(0x39B62D0)
#define A7F04E76E0084E4E_EFB2B1C100C050E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7F04E76E0084E4E_EFB2B1C100C050E6_TypeDefinitionIndex = 12562;

class A7F04E76E0084E4E_EFB2B1C100C050E6 : public ::System::Object
{
public:
	::System::String* A4448D8050DC0EDF; // 0x10
	::System::String* BA1AB6C45862C632; // 0x18
	::System::String* B6018BB9F7294B44; // 0x20
	::System::Int32 F2AC8B14A3E719AC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_EFB2B1C100C050E6__CTOR_OFFSET))(this);
	}

	::System::Void B1A19A839CB90610()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_EFB2B1C100C050E6_B1A19A839CB90610_OFFSET))(this);
	}
};
