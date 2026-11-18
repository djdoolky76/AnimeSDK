#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define HDNPAPNHIIG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x742A20)
#define HDNPAPNHIIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x742840)
#define HDNPAPNHIIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x742760)
#define HDNPAPNHIIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x742850)
#define HDNPAPNHIIG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7429B0)
#define HDNPAPNHIIG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x149403B0)
#define HDNPAPNHIIG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x742940)
#define HDNPAPNHIIG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14940560)
#define HDNPAPNHIIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x742930)

inline static constexpr unsigned int HDNPAPNHIIG_TypeDefinitionIndex = 54187;

struct alignas(8) HDNPAPNHIIG
{
	::System::Int32 DEFAKCIAKLG; // 0x10
	::System::Int32 GEPABHJBIAH; // 0x14
	::System::Int32 JENBPJCAELD; // 0x18
	::System::Int32 COMDNFILAIC; // 0x1C
	::System::Int32 BNLHPGHLKDK; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* AMJIHFDPIFH; // 0x28

	/*
	::System::Boolean Equals(::HDNPAPNHIIG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HDNPAPNHIIG))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_TOSTRING_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HDNPAPNHIIG KILPCOMOCMD, ::HDNPAPNHIIG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HDNPAPNHIIG, ::HDNPAPNHIIG))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HDNPAPNHIIG KILPCOMOCMD, ::HDNPAPNHIIG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HDNPAPNHIIG, ::HDNPAPNHIIG))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNPAPNHIIG_DPIHOJBBGLA_OFFSET))(this);
	}
};
