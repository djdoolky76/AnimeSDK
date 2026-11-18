#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FOPPBECEADK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1FA7DC30)
#define FOPPBECEADK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x992960)
#define FOPPBECEADK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x992840)
#define FOPPBECEADK_EQUALS_OFFSET UNITYSDK_OFFSET(0x992790)
#define FOPPBECEADK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x992850)
#define FOPPBECEADK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x9929E0)
#define FOPPBECEADK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x992900)
#define FOPPBECEADK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9928F0)
#define FOPPBECEADK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int FOPPBECEADK_TypeDefinitionIndex = 17977;

struct alignas(4) FOPPBECEADK
{
	::NCJLKIIGPIC FJBPAKNMBLB; // 0x10
	::GPJMHAAEIKO LOIEHBLKDPE; // 0x14

	::System::Void _ctor(::NCJLKIIGPIC CGNGIBNMDHP, ::GPJMHAAEIKO CBHKCCOFHKA)
	{
		return ((::System::Void(*)(::PVOID, ::NCJLKIIGPIC, ::GPJMHAAEIKO))((::PBYTE)hIl2Cpp + FOPPBECEADK__CTOR_OFFSET))(this, CGNGIBNMDHP, CBHKCCOFHKA);
	}

	/*
	::System::Boolean Equals(::FOPPBECEADK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FOPPBECEADK))((::PBYTE)hIl2Cpp + FOPPBECEADK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOPPBECEADK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPPBECEADK_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPPBECEADK_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOPPBECEADK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::FOPPBECEADK COKNIICCODC(::NCJLKIIGPIC CGNGIBNMDHP, ::GPJMHAAEIKO CBHKCCOFHKA)
	{
		return ((::FOPPBECEADK(*)(::NCJLKIIGPIC, ::GPJMHAAEIKO))((::PBYTE)hIl2Cpp + FOPPBECEADK_COKNIICCODC_OFFSET))(CGNGIBNMDHP, CBHKCCOFHKA);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPPBECEADK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPPBECEADK_HLPHPBAODIF_OFFSET))(this);
	}
};
