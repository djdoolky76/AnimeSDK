#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DepthTextureMode.h"

namespace Foundation { class ByteArray; }
namespace System { class Object; }
namespace System { class String; }

#define BHEDAFDNMPB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x678D10)
#define BHEDAFDNMPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x678B90)
#define BHEDAFDNMPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x678B60)
#define BHEDAFDNMPB_FLGKJBELBGD_OFFSET UNITYSDK_OFFSET(0x113E7240)
#define BHEDAFDNMPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x678C80)
#define BHEDAFDNMPB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x678CA0)
#define BHEDAFDNMPB_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x113E7480)
#define BHEDAFDNMPB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x678DA0)
#define BHEDAFDNMPB_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x113E7030)
#define BHEDAFDNMPB_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x113E73F0)
#define BHEDAFDNMPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x678C90)

inline static constexpr unsigned int BHEDAFDNMPB_TypeDefinitionIndex = 90399;

struct alignas(4) BHEDAFDNMPB
{
	::System::Boolean DECIDLELLCP; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single NPHOPECPHLF; // 0x14
	::System::Single HKHIMAKFCGD; // 0x18
	::System::Single BKCDMONKCHF; // 0x1C
	::System::Single KHPPKNBOGIB; // 0x20
	::UnityEngine::DepthTextureMode EHHPEJHBOGD; // 0x24

	/*
	::System::Boolean Equals(::BHEDAFDNMPB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BHEDAFDNMPB))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_TOSTRING_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::BHEDAFDNMPB NFAOKJPILBO(::Il2CppArray<::System::Byte>* JJBDCAPGHPJ)
	{
		return ((::BHEDAFDNMPB(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_NFAOKJPILBO_OFFSET))(JJBDCAPGHPJ);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::Foundation::ByteArray* FLGKJBELBGD(::BHEDAFDNMPB KLEGKPLLDML)
	{
		return ((::Foundation::ByteArray*(*)(::BHEDAFDNMPB))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_FLGKJBELBGD_OFFSET))(KLEGKPLLDML);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::BHEDAFDNMPB KILPCOMOCMD, ::BHEDAFDNMPB BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::BHEDAFDNMPB, ::BHEDAFDNMPB))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::BHEDAFDNMPB KILPCOMOCMD, ::BHEDAFDNMPB BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::BHEDAFDNMPB, ::BHEDAFDNMPB))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHEDAFDNMPB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
