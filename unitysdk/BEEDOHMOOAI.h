#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define BEEDOHMOOAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x78F3E0)
#define BEEDOHMOOAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x78F3D0)
#define BEEDOHMOOAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x78F480)
#define BEEDOHMOOAI_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x78F5D0)
#define BEEDOHMOOAI_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x169E8670)
#define BEEDOHMOOAI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x169E8600)
#define BEEDOHMOOAI_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x78F560)
#define BEEDOHMOOAI_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x169E8750)
#define BEEDOHMOOAI__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int BEEDOHMOOAI_TypeDefinitionIndex = 67126;

struct alignas(8) BEEDOHMOOAI
{
	::System::UInt32 DJJGLILJKEA; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* MGEDBKBHJPM; // 0x18

	::System::Void _ctor(::System::UInt32 MGMDLMBEDJF, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + BEEDOHMOOAI__CTOR_OFFSET))(this, MGMDLMBEDJF, HIAIKHDFCLN);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::BEEDOHMOOAI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BEEDOHMOOAI))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::BEEDOHMOOAI JFDOOELFAOA(::System::UInt32 MGMDLMBEDJF, ::System::String* HIAIKHDFCLN)
	{
		return ((::BEEDOHMOOAI(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_JFDOOELFAOA_OFFSET))(MGMDLMBEDJF, HIAIKHDFCLN);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::BEEDOHMOOAI KILPCOMOCMD, ::BEEDOHMOOAI BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::BEEDOHMOOAI, ::BEEDOHMOOAI))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::BEEDOHMOOAI KILPCOMOCMD, ::BEEDOHMOOAI BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::BEEDOHMOOAI, ::BEEDOHMOOAI))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEDOHMOOAI_HLPHPBAODIF_OFFSET))(this);
	}
};
