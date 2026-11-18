#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FHJPJMKIHBG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7A1E90)
#define FHJPJMKIHBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A1E30)
#define FHJPJMKIHBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A1D20)
#define FHJPJMKIHBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A1E80)
#define FHJPJMKIHBG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7A1FC0)
#define FHJPJMKIHBG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7A1F30)
#define FHJPJMKIHBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7A1D10)
#define FHJPJMKIHBG__CTOR_OFFSET UNITYSDK_OFFSET(0x7A1CD0)

inline static constexpr unsigned int FHJPJMKIHBG_TypeDefinitionIndex = 71097;

struct alignas(8) FHJPJMKIHBG
{
	::System::String* OLOMNNBBHPJ; // 0x10
	::System::String* ILAENKCNBDO; // 0x18
	::System::String* NMBLBAKDFCI; // 0x20
	::System::Int64 BFIHLDODPNN; // 0x28
	::System::String* GINOOIODBOD; // 0x30
	::System::Boolean BBNBFFIOBEC; // 0x38
	::System::Byte _padding0[0x7];
	::System::String* OAJMBCMHODE; // 0x40
	::System::String* JPCEKAJFGHC; // 0x48
	::System::String* EJMLOOPIBOH; // 0x50

	::System::Void _ctor(::System::String* OLOMNNBBHPJ, ::System::String* ILAENKCNBDO, ::System::String* NMBLBAKDFCI, ::System::Int64 BFIHLDODPNN, ::System::String* GINOOIODBOD, ::System::Boolean BBNBFFIOBEC, ::System::String* OAJMBCMHODE, ::System::String* EJMLOOPIBOH, ::System::String* JPCEKAJFGHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FHJPJMKIHBG__CTOR_OFFSET))(this, OLOMNNBBHPJ, ILAENKCNBDO, NMBLBAKDFCI, BFIHLDODPNN, GINOOIODBOD, BBNBFFIOBEC, OAJMBCMHODE, EJMLOOPIBOH, JPCEKAJFGHC);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::FHJPJMKIHBG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_GETHASHCODE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPJMKIHBG_HLPHPBAODIF_OFFSET))(this);
	}
};
