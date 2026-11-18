#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MEMDIFHDIAC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x159299F0)
#define MEMDIFHDIAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x76D130)
#define MEMDIFHDIAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x76D0E0)
#define MEMDIFHDIAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x76D140)
#define MEMDIFHDIAC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x76D190)
#define MEMDIFHDIAC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x76D1F0)
#define MEMDIFHDIAC_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x159299B0)

inline static constexpr unsigned int MEMDIFHDIAC_TypeDefinitionIndex = 88382;

struct alignas(4) MEMDIFHDIAC
{
	::System::Int32 HHGILNNMNAK; // 0x10

	/*
	::System::Boolean Equals(::MEMDIFHDIAC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEMDIFHDIAC))((::PBYTE)hIl2Cpp + MEMDIFHDIAC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEMDIFHDIAC_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMDIFHDIAC_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::MEMDIFHDIAC PPGBHNIJOIB()
	{
		return ((::MEMDIFHDIAC(*)())((::PBYTE)hIl2Cpp + MEMDIFHDIAC_PPGBHNIJOIB_OFFSET))();
	}
	*/

	/*
	static ::MEMDIFHDIAC BBPCBEEHALC()
	{
		return ((::MEMDIFHDIAC(*)())((::PBYTE)hIl2Cpp + MEMDIFHDIAC_BBPCBEEHALC_OFFSET))();
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMDIFHDIAC_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEMDIFHDIAC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
