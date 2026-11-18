#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define KIINJBEAAKE_EEJDMHGKBMI_OFFSET UNITYSDK_OFFSET(0x768460)
#define KIINJBEAAKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7682E0)
#define KIINJBEAAKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7682A0)
#define KIINJBEAAKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7683E0)
#define KIINJBEAAKE_GIALDDHFBLF_OFFSET UNITYSDK_OFFSET(0x157EE980)
#define KIINJBEAAKE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7683F0)
#define KIINJBEAAKE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x768500)

inline static constexpr unsigned int KIINJBEAAKE_TypeDefinitionIndex = 52367;

struct alignas(8) KIINJBEAAKE
{
	::System::Int32 BOBBHFPEPHC; // 0x10
	::System::Int32 GPJOGFBOCJH; // 0x14
	::System::String* GLBEOLEENIJ; // 0x18
	::System::String* EDILGKJJLBO; // 0x20
	::System::String* KEKFPKKIIFB; // 0x28
	::System::String* LILFGGDFGBP; // 0x30
	::System::String* ICMKAIENEIH; // 0x38

	/*
	::System::Boolean Equals(::KIINJBEAAKE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KIINJBEAAKE))((::PBYTE)hIl2Cpp + KIINJBEAAKE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIINJBEAAKE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIINJBEAAKE_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIINJBEAAKE_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean EEJDMHGKBMI(::System::String* EJCBEJMGFAJ, ::System::String* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KIINJBEAAKE_EEJDMHGKBMI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	/*
	static ::KIINJBEAAKE GIALDDHFBLF(::KIINJBEAAKE& LIBPKNHDIGP)
	{
		return ((::KIINJBEAAKE(*)(::KIINJBEAAKE&))((::PBYTE)hIl2Cpp + KIINJBEAAKE_GIALDDHFBLF_OFFSET))(LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIINJBEAAKE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
