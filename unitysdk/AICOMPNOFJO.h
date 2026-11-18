#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIIDDNELCCF.h"
#include "unitysdk/CLLIPDAJMMB.h"
#include "unitysdk/EPIODLGPKNH.h"
#include "unitysdk/GEBCHPAJEGB.h"
#include "unitysdk/HLIAAMEFFGJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define AICOMPNOFJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79DDB0)
#define AICOMPNOFJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x79DD50)
#define AICOMPNOFJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79DEE0)
#define AICOMPNOFJO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x79DFA0)
#define AICOMPNOFJO_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x16D7E340)
#define AICOMPNOFJO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x79DF00)
#define AICOMPNOFJO_JGMLKBNBJFB_OFFSET UNITYSDK_OFFSET(0x79DEF0)
#define AICOMPNOFJO_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x79DAC0)
#define AICOMPNOFJO_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x79DD40)
#define AICOMPNOFJO_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x16D7E860)
#define AICOMPNOFJO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x79DD30)

inline static constexpr unsigned int AICOMPNOFJO_TypeDefinitionIndex = 93100;

struct alignas(4) AICOMPNOFJO
{
	::EPIODLGPKNH ICPEHBDFHKD; // 0x10
	::GEBCHPAJEGB BLGOKOONPPN; // 0x24
	::CLLIPDAJMMB ALIMEDLKBMF; // 0x38
	::HLIAAMEFFGJ BLAEJNHMKDG; // 0x4C
	::CIIDDNELCCF BOLCDPAAALD; // 0x60

	/*
	::System::Void JOMJPENCKAJ(::AICOMPNOFJO& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::AICOMPNOFJO&))((::PBYTE)hIl2Cpp + AICOMPNOFJO_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICOMPNOFJO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + AICOMPNOFJO_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::AICOMPNOFJO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AICOMPNOFJO))((::PBYTE)hIl2Cpp + AICOMPNOFJO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AICOMPNOFJO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AICOMPNOFJO_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::AICOMPNOFJO FFKBEGIHIGG, ::AICOMPNOFJO CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::AICOMPNOFJO, ::AICOMPNOFJO))((::PBYTE)hIl2Cpp + AICOMPNOFJO_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	::System::Void JGMLKBNBJFB(::AICOMPNOFJO& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::AICOMPNOFJO&))((::PBYTE)hIl2Cpp + AICOMPNOFJO_JGMLKBNBJFB_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AICOMPNOFJO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AICOMPNOFJO_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::AICOMPNOFJO FFKBEGIHIGG, ::AICOMPNOFJO CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::AICOMPNOFJO, ::AICOMPNOFJO))((::PBYTE)hIl2Cpp + AICOMPNOFJO_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
