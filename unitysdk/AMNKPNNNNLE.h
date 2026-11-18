#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AMNKPNNNNLE_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x707FC0)
#define AMNKPNNNNLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x135F6B80)
#define AMNKPNNNNLE__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int AMNKPNNNNLE_TypeDefinitionIndex = 81975;

struct alignas(4) AMNKPNNNNLE
{
	static ::AMNKPNNNNLE* StaticGet_EFMCBKOMKIH()
	{
		return (::AMNKPNNNNLE*)Il2CppClass::FromTypeDefinitionIndex(AMNKPNNNNLE_TypeDefinitionIndex)->GetStaticField(0xD890);
	}
	::System::Int32 BELNJJKMMJP; // 0x10

	::System::Void _ctor(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMNKPNNNNLE__CTOR_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMNKPNNNNLE__CCTOR_OFFSET))();
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNKPNNNNLE_JDAPDDEOCEA_OFFSET))(this);
	}
};
