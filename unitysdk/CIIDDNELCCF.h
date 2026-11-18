#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define CIIDDNELCCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7010E0)
#define CIIDDNELCCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x701030)
#define CIIDDNELCCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7010F0)
#define CIIDDNELCCF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x701240)
#define CIIDDNELCCF_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13261D70)
#define CIIDDNELCCF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7011D0)
#define CIIDDNELCCF_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x700F10)
#define CIIDDNELCCF_KDPKJIMOHNB_OFFSET UNITYSDK_OFFSET(0x7012B0)
#define CIIDDNELCCF_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x701020)
#define CIIDDNELCCF_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13261C40)
#define CIIDDNELCCF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x700F90)
#define CIIDDNELCCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13261BE0)

inline static constexpr unsigned int CIIDDNELCCF_TypeDefinitionIndex = 69494;

struct alignas(4) CIIDDNELCCF
{
	static ::System::Int32* StaticGet_HAONGBLGMOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CIIDDNELCCF_TypeDefinitionIndex)->GetStaticField(0x11240);
	}
	static ::System::Int32* StaticGet_FLMKEPJKFDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CIIDDNELCCF_TypeDefinitionIndex)->GetStaticField(0x11244);
	}
	static ::System::Boolean* StaticGet_FMINJMNNBJF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CIIDDNELCCF_TypeDefinitionIndex)->GetStaticField(0x11248);
	}
	static ::UnityEngine::Vector4* StaticGet_KCLOLLMEBPE()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(CIIDDNELCCF_TypeDefinitionIndex)->GetStaticField(0x1124C);
	}
	::System::Boolean HJLIGGGMJGH; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector4 KLJNCPOCGCN; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIIDDNELCCF__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::CIIDDNELCCF& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CIIDDNELCCF&))((::PBYTE)hIl2Cpp + CIIDDNELCCF_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIDDNELCCF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CIIDDNELCCF_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::CIIDDNELCCF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CIIDDNELCCF))((::PBYTE)hIl2Cpp + CIIDDNELCCF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIIDDNELCCF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIDDNELCCF_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::CIIDDNELCCF FFKBEGIHIGG, ::CIIDDNELCCF CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::CIIDDNELCCF, ::CIIDDNELCCF))((::PBYTE)hIl2Cpp + CIIDDNELCCF_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIIDDNELCCF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::CIIDDNELCCF FFKBEGIHIGG, ::CIIDDNELCCF CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::CIIDDNELCCF, ::CIIDDNELCCF))((::PBYTE)hIl2Cpp + CIIDDNELCCF_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIDDNELCCF_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	::System::Void KDPKJIMOHNB(::CIIDDNELCCF& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CIIDDNELCCF&))((::PBYTE)hIl2Cpp + CIIDDNELCCF_KDPKJIMOHNB_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
