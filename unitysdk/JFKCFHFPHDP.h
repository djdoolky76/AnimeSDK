#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFKCFHFPHDP_HJFPLADLJJC_OFFSET UNITYSDK_OFFSET(0x1980FA80)
#define JFKCFHFPHDP_JONIKDOENKE_OFFSET UNITYSDK_OFFSET(0x1980FB60)
#define JFKCFHFPHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1980FA40)

inline static constexpr unsigned int JFKCFHFPHDP_TypeDefinitionIndex = 46938;

class JFKCFHFPHDP : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* AOADDGCDELC; // 0x10
	::System::Int32 KMKBJKOEBMF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCFHFPHDP__CTOR_OFFSET))(this);
	}

	::System::Void HJFPLADLJJC(::System::UInt64 GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JFKCFHFPHDP_HJFPLADLJJC_OFFSET))(this, GEGOALONGBI);
	}

	::System::UInt64 JONIKDOENKE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCFHFPHDP_JONIKDOENKE_OFFSET))(this);
	}
};
