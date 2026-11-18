#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMMKHOIALPN.h"

class JJEJBPGJPJN;
namespace System { class Object; }
namespace System { class String; }

#define HMKHKMFCKJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x861B50)
#define HMKHKMFCKJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x861A90)
#define HMKHKMFCKJG_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x861C30)
#define HMKHKMFCKJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x861B60)
#define HMKHKMFCKJG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x861CB0)
#define HMKHKMFCKJG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1CE979F0)
#define HMKHKMFCKJG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x861C40)
#define HMKHKMFCKJG_KDOKNGDNKKG_OFFSET UNITYSDK_OFFSET(0x861DB0)
#define HMKHKMFCKJG_KMAPJEAOODE_OFFSET UNITYSDK_OFFSET(0x861C20)
#define HMKHKMFCKJG_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x861D10)
#define HMKHKMFCKJG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1CE98060)
#define HMKHKMFCKJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE97160)
#define HMKHKMFCKJG__CTOR_OFFSET UNITYSDK_OFFSET(0x3B58E0)

inline static constexpr unsigned int HMKHKMFCKJG_TypeDefinitionIndex = 34846;

struct alignas(8) HMKHKMFCKJG
{
	static ::HMKHKMFCKJG* StaticGet_FDJHEBHLJLD()
	{
		return (::HMKHKMFCKJG*)Il2CppClass::FromTypeDefinitionIndex(HMKHKMFCKJG_TypeDefinitionIndex)->GetStaticField(0x2A6C0);
	}
	// static const ::System::Int32 HPOADDIOBNP = -0x1; // 0x0
	::JJEJBPGJPJN* JHIJPCJBOCJ; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x18

	::System::Void _ctor(::JJEJBPGJPJN* JFPDJGAMELP, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::JJEJBPGJPJN*, ::System::Int32))((::PBYTE)hIl2Cpp + HMKHKMFCKJG__CTOR_OFFSET))(this, JFPDJGAMELP, ABHBKFJKINO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMKHKMFCKJG__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::HMKHKMFCKJG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HMKHKMFCKJG))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_GETHASHCODE_OFFSET))(this);
	}

	::System::String* KMAPJEAOODE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_KMAPJEAOODE_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HMKHKMFCKJG KILPCOMOCMD, ::HMKHKMFCKJG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HMKHKMFCKJG, ::HMKHKMFCKJG))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_NKDCADABLCL_OFFSET))(this);
	}

	::FMMKHOIALPN& KDOKNGDNKKG()
	{
		return ((::FMMKHOIALPN&(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_KDOKNGDNKKG_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HMKHKMFCKJG KILPCOMOCMD, ::HMKHKMFCKJG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HMKHKMFCKJG, ::HMKHKMFCKJG))((::PBYTE)hIl2Cpp + HMKHKMFCKJG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
