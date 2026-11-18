#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KLPLBODKAHP_AOKNAJPAKDN_OFFSET UNITYSDK_OFFSET(0x129A6530)
#define KLPLBODKAHP_BDHMMOECCEP_OFFSET UNITYSDK_OFFSET(0x6EC290)
#define KLPLBODKAHP_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x40D700)
#define KLPLBODKAHP_DPCHCKMNNFE_OFFSET UNITYSDK_OFFSET(0x6EC3C0)
#define KLPLBODKAHP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6EC330)
#define KLPLBODKAHP_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x6EC000)
#define KLPLBODKAHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6EBDE0)
#define KLPLBODKAHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x6EBC50)
#define KLPLBODKAHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6EBDF0)
#define KLPLBODKAHP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6EBF90)
#define KLPLBODKAHP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x129A7000)
#define KLPLBODKAHP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6EC220)
#define KLPLBODKAHP_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x36C210)
#define KLPLBODKAHP_LPFDAJEBCDK_OFFSET UNITYSDK_OFFSET(0x6EBEE0)
#define KLPLBODKAHP_MMMEFMADOKA_OFFSET UNITYSDK_OFFSET(0x6EC550)
#define KLPLBODKAHP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x129A6E00)
#define KLPLBODKAHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6EBED0)
#define KLPLBODKAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x362170)

inline static constexpr unsigned int KLPLBODKAHP_TypeDefinitionIndex = 46908;

struct alignas(4) KLPLBODKAHP
{
	::UnityEngine::Vector3 _IAJIMLJMKGD_k__BackingField; // 0x10
	::UnityEngine::Quaternion _ALJOIINAJFF_k__BackingField; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLPLBODKAHP__CTOR_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPLBODKAHP_JLEGHNGEBOG_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPLBODKAHP_COBPIICGJJA_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::KLPLBODKAHP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KLPLBODKAHP))((::PBYTE)hIl2Cpp + KLPLBODKAHP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLPLBODKAHP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPLBODKAHP_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPLBODKAHP_TOSTRING_OFFSET))(this);
	}

	/*
	::KLPLBODKAHP LPFDAJEBCDK(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::KLPLBODKAHP(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLPLBODKAHP_LPFDAJEBCDK_OFFSET))(this, OHOGDOMNHNK);
	}
	*/

	/*
	static ::KLPLBODKAHP AOKNAJPAKDN(::UnityEngine::Transform* IMLLDOHDCNC)
	{
		return ((::KLPLBODKAHP(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KLPLBODKAHP_AOKNAJPAKDN_OFFSET))(IMLLDOHDCNC);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPLBODKAHP_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void EMLDIHEBNBO(::UnityEngine::Transform* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KLPLBODKAHP_EMLDIHEBNBO_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLPLBODKAHP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	::KLPLBODKAHP BDHMMOECCEP(::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::KLPLBODKAHP(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLPLBODKAHP_BDHMMOECCEP_OFFSET))(this, BFBELMDIAHI);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPLBODKAHP_DPIHOJBBGLA_OFFSET))(this);
	}

	::UnityEngine::Vector3 DPCHCKMNNFE(::UnityEngine::Vector3& MAEIKMALLHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + KLPLBODKAHP_DPCHCKMNNFE_OFFSET))(this, MAEIKMALLHI);
	}

	::UnityEngine::Vector3 MMMEFMADOKA(::UnityEngine::Vector3& HJOMBPPGABM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + KLPLBODKAHP_MMMEFMADOKA_OFFSET))(this, HJOMBPPGABM);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::KLPLBODKAHP EJCBEJMGFAJ, ::KLPLBODKAHP EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::KLPLBODKAHP, ::KLPLBODKAHP))((::PBYTE)hIl2Cpp + KLPLBODKAHP_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::KLPLBODKAHP EJCBEJMGFAJ, ::KLPLBODKAHP EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::KLPLBODKAHP, ::KLPLBODKAHP))((::PBYTE)hIl2Cpp + KLPLBODKAHP_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/
};
