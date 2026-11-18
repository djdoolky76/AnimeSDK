#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PCGPKGKBGDO_NANAIOKANMP_ACOMAOFOGBL_OFFSET UNITYSDK_OFFSET(0x14B52A30)
#define PCGPKGKBGDO_NANAIOKANMP__CTOR_OFFSET UNITYSDK_OFFSET(0x14B52A20)

inline static constexpr unsigned int PCGPKGKBGDO_NANAIOKANMP_TypeDefinitionIndex = 58852;

class PCGPKGKBGDO_NANAIOKANMP : public ::System::Object
{
public:
	::System::String* CEKNHIDPNNA; // 0x10
	::Il2CppArray<::System::Byte>* AOADDGCDELC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_NANAIOKANMP__CTOR_OFFSET))(this);
	}

	::System::Void ACOMAOFOGBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_NANAIOKANMP_ACOMAOFOGBL_OFFSET))(this);
	}
};
