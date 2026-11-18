#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JPLGICECOCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x720030)
#define JPLGICECOCO_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x13CD72A0)
#define JPLGICECOCO_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7200D0)
#define JPLGICECOCO_IOCGCMKJPHL_OFFSET UNITYSDK_OFFSET(0x720080)
#define JPLGICECOCO__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CD7220)
#define JPLGICECOCO__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int JPLGICECOCO_TypeDefinitionIndex = 81465;

struct alignas(4) JPLGICECOCO
{
	static ::JPLGICECOCO* StaticGet_CGICCOBHACH()
	{
		return (::JPLGICECOCO*)Il2CppClass::FromTypeDefinitionIndex(JPLGICECOCO_TypeDefinitionIndex)->GetStaticField(0x10490);
	}
	static ::JPLGICECOCO* StaticGet_EBBFJGOMBKG()
	{
		return (::JPLGICECOCO*)Il2CppClass::FromTypeDefinitionIndex(JPLGICECOCO_TypeDefinitionIndex)->GetStaticField(0x10498);
	}
	static ::System::UInt32* StaticGet_HANFGDFLCMG()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(JPLGICECOCO_TypeDefinitionIndex)->GetStaticField(0x104A0);
	}
	::System::UInt32 PHHDHIBOCKA; // 0x10
	::System::Int32 GIAOKGFENJD; // 0x14

	::System::Void _ctor(::System::UInt32 EEFHDGOLHPF, ::System::Int32 LLBONHEOMHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JPLGICECOCO__CTOR_OFFSET))(this, EEFHDGOLHPF, LLBONHEOMHL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPLGICECOCO__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::JPLGICECOCO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JPLGICECOCO))((::PBYTE)hIl2Cpp + JPLGICECOCO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean IOCGCMKJPHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLGICECOCO_IOCGCMKJPHL_OFFSET))(this);
	}

	/*
	static ::JPLGICECOCO FENCOLLJAMO(::System::Int32 GIAOKGFENJD)
	{
		return ((::JPLGICECOCO(*)(::System::Int32))((::PBYTE)hIl2Cpp + JPLGICECOCO_FENCOLLJAMO_OFFSET))(GIAOKGFENJD);
	}
	*/

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLGICECOCO_FFCPIEDHBDP_OFFSET))(this);
	}
};
