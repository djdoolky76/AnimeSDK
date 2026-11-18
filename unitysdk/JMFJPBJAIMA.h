#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define JMFJPBJAIMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x71EE50)
#define JMFJPBJAIMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x71ED90)
#define JMFJPBJAIMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x71EE60)
#define JMFJPBJAIMA_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x71EEC0)
#define JMFJPBJAIMA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x71EF30)

inline static constexpr unsigned int JMFJPBJAIMA_TypeDefinitionIndex = 86431;

struct alignas(8) JMFJPBJAIMA
{
	::System::Int32 DHAJLFMHDNG; // 0x10
	::System::Int32 LFALNOHPBMN; // 0x14
	::System::Int32 EPLAMLBIAOI; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* DIFONAKCHEF; // 0x20

	/*
	::System::Boolean Equals(::JMFJPBJAIMA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMFJPBJAIMA))((::PBYTE)hIl2Cpp + JMFJPBJAIMA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMFJPBJAIMA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFJPBJAIMA_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFJPBJAIMA_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMFJPBJAIMA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
