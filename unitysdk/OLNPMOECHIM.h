#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHFPMIAMNPJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define OLNPMOECHIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x595880)
#define OLNPMOECHIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x595840)
#define OLNPMOECHIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x595980)
#define OLNPMOECHIM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x595A20)
#define OLNPMOECHIM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0xE162A70)
#define OLNPMOECHIM_INFKLNOLFCJ_OFFSET UNITYSDK_OFFSET(0x595A10)
#define OLNPMOECHIM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x595990)
#define OLNPMOECHIM_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x595740)
#define OLNPMOECHIM_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x595830)
#define OLNPMOECHIM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0xE1628B0)
#define OLNPMOECHIM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x595820)
#define OLNPMOECHIM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE162630)

inline static constexpr unsigned int OLNPMOECHIM_TypeDefinitionIndex = 90544;

struct alignas(4) OLNPMOECHIM
{
	static ::System::String** StaticGet_LHJAMJLNCEP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0x428F0);
	}
	static ::NHFPMIAMNPJ* StaticGet_MKDJNGABMLK()
	{
		return (::NHFPMIAMNPJ*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF390);
	}
	static ::System::Boolean* StaticGet_PJNPBIJPHLP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF474);
	}
	static ::System::Boolean* StaticGet_NNGEDAGMBJK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF475);
	}
	static ::System::Boolean* StaticGet_MAKBLOLNEDO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF476);
	}
	static ::System::Int32* StaticGet_LHOGGNOLFGE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF478);
	}
	static ::System::Int32* StaticGet_LGDLHEPPDIN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF47C);
	}
	static ::System::Int32* StaticGet_LJAEJODBBEJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF480);
	}
	static ::System::Int32* StaticGet_PNCFBGCPKFO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF484);
	}
	static ::System::Int32* StaticGet_GCIICOHDNHO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OLNPMOECHIM_TypeDefinitionIndex)->GetStaticField(0xF488);
	}
	::System::Boolean EGLDNKPNJCM; // 0x10
	::System::Boolean BDPPCFBKKIJ; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 FIAIJEOHOPH; // 0x14
	::System::Int32 HFICALELEEF; // 0x18
	::NHFPMIAMNPJ NPFEPFCADLE; // 0x1C
	::NHFPMIAMNPJ KOKJMIJKGKL; // 0x100

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNPMOECHIM__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::OLNPMOECHIM& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::OLNPMOECHIM&))((::PBYTE)hIl2Cpp + OLNPMOECHIM_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNPMOECHIM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + OLNPMOECHIM_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::OLNPMOECHIM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OLNPMOECHIM))((::PBYTE)hIl2Cpp + OLNPMOECHIM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLNPMOECHIM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNPMOECHIM_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLNPMOECHIM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	::System::Void INFKLNOLFCJ(::OLNPMOECHIM& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::OLNPMOECHIM&))((::PBYTE)hIl2Cpp + OLNPMOECHIM_INFKLNOLFCJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::OLNPMOECHIM FFKBEGIHIGG, ::OLNPMOECHIM CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::OLNPMOECHIM, ::OLNPMOECHIM))((::PBYTE)hIl2Cpp + OLNPMOECHIM_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNPMOECHIM_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::OLNPMOECHIM FFKBEGIHIGG, ::OLNPMOECHIM CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::OLNPMOECHIM, ::OLNPMOECHIM))((::PBYTE)hIl2Cpp + OLNPMOECHIM_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
