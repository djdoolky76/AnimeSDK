#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PNPDLOAJCHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x70AEB0)
#define PNPDLOAJCHO_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define PNPDLOAJCHO_KNALBNAKNFC_OFFSET UNITYSDK_OFFSET(0x359320)
#define PNPDLOAJCHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1372A3D0)
#define PNPDLOAJCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int PNPDLOAJCHO_TypeDefinitionIndex = 50103;

struct alignas(4) PNPDLOAJCHO
{
	static ::PNPDLOAJCHO* StaticGet_FDJHEBHLJLD()
	{
		return (::PNPDLOAJCHO*)Il2CppClass::FromTypeDefinitionIndex(PNPDLOAJCHO_TypeDefinitionIndex)->GetStaticField(0xEFB0);
	}
	// static const ::System::UInt32 FNAOFGHBPHL = 0x0; // 0x0
	::System::UInt32 ECPBEJKFMOJ; // 0x10

	::System::Void _ctor(::System::UInt32 KGMILFHDNMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNPDLOAJCHO__CTOR_OFFSET))(this, KGMILFHDNMB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNPDLOAJCHO__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPDLOAJCHO_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 KNALBNAKNFC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPDLOAJCHO_KNALBNAKNFC_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPDLOAJCHO_JDAPDDEOCEA_OFFSET))(this);
	}
};
