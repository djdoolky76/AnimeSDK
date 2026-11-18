#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/Vector2Int.h"

namespace System { class Object; }
namespace System { class String; }

#define EAOGLMKGMGE_CIBONHMNLEN_OFFSET UNITYSDK_OFFSET(0x148C3AE0)
#define EAOGLMKGMGE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x740F90)
#define EAOGLMKGMGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x740F20)
#define EAOGLMKGMGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x740EB0)
#define EAOGLMKGMGE_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7410F0)
#define EAOGLMKGMGE_FPIFKGGDGEE_OFFSET UNITYSDK_OFFSET(0x148C3D90)
#define EAOGLMKGMGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x740F30)
#define EAOGLMKGMGE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x741010)
#define EAOGLMKGMGE_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x148C3CB0)
#define EAOGLMKGMGE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x741080)
#define EAOGLMKGMGE_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x148C3B70)
#define EAOGLMKGMGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x740EA0)
#define EAOGLMKGMGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x148C39F0)
#define EAOGLMKGMGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int EAOGLMKGMGE_TypeDefinitionIndex = 76925;

struct alignas(4) EAOGLMKGMGE
{
	static ::EAOGLMKGMGE* StaticGet_EFMCBKOMKIH()
	{
		return (::EAOGLMKGMGE*)Il2CppClass::FromTypeDefinitionIndex(EAOGLMKGMGE_TypeDefinitionIndex)->GetStaticField(0xC930);
	}
	::System::Int32 HAAEBCOBKFF; // 0x10
	::System::Int32 BFMMEICFNCD; // 0x14
	::System::UInt32 LPALEBPKMNO; // 0x18

	::System::Void _ctor(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD, ::System::UInt32 LPALEBPKMNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EAOGLMKGMGE__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, LPALEBPKMNO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAOGLMKGMGE__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::EAOGLMKGMGE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAOGLMKGMGE))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::EAOGLMKGMGE CIBONHMNLEN(::EAOGLMKGMGE CKPGOKHECCH, ::MoleMole::Vector2Int BOGPAHGJOJK)
	{
		return ((::EAOGLMKGMGE(*)(::EAOGLMKGMGE, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_CIBONHMNLEN_OFFSET))(CKPGOKHECCH, BOGPAHGJOJK);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::EAOGLMKGMGE FFKBEGIHIGG, ::EAOGLMKGMGE CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::EAOGLMKGMGE, ::EAOGLMKGMGE))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::EAOGLMKGMGE FFKBEGIHIGG, ::EAOGLMKGMGE CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::EAOGLMKGMGE, ::EAOGLMKGMGE))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::EAOGLMKGMGE FPIFKGGDGEE(::EAOGLMKGMGE CKPGOKHECCH, ::MoleMole::Vector2Int BOGPAHGJOJK)
	{
		return ((::EAOGLMKGMGE(*)(::EAOGLMKGMGE, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_FPIFKGGDGEE_OFFSET))(CKPGOKHECCH, BOGPAHGJOJK);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOGLMKGMGE_FFCPIEDHBDP_OFFSET))(this);
	}
};
