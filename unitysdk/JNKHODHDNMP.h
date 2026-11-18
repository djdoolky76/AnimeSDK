#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JNKHODHDNMP_FPGKPBFDGBG_OFFSET UNITYSDK_OFFSET(0x1309F6A0)
#define JNKHODHDNMP__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int JNKHODHDNMP_TypeDefinitionIndex = 39159;

struct alignas(4) JNKHODHDNMP
{
	::System::Int32 DJKOMMKJBON; // 0x10
	::System::Int32 MDDMJLICPHI; // 0x14
	::System::Int32 PCLAGDPHPHA; // 0x18

	::System::Void _ctor(::System::Int32 DLEKMJNBONJ, ::System::Int32 MPKGPPCBELN, ::System::Int32 PEECDOOAIIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JNKHODHDNMP__CTOR_OFFSET))(this, DLEKMJNBONJ, MPKGPPCBELN, PEECDOOAIIB);
	}

	/*
	static ::JNKHODHDNMP FPGKPBFDGBG()
	{
		return ((::JNKHODHDNMP(*)())((::PBYTE)hIl2Cpp + JNKHODHDNMP_FPGKPBFDGBG_OFFSET))();
	}
	*/
};
