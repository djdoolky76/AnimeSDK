#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEADJDGHAKN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/KDIALKAABIA.h"

class AJLGBLEMDCF;
class BHDIFOOIHLK;
namespace System { class Object; }
namespace System { class String; }

#define OBCAIIPOJEO_CCIJBILDBCN_OFFSET UNITYSDK_OFFSET(0x595160)
#define OBCAIIPOJEO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x595170)
#define OBCAIIPOJEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x595060)
#define OBCAIIPOJEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x594F40)
#define OBCAIIPOJEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x595070)
#define OBCAIIPOJEO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x5950E0)
#define OBCAIIPOJEO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x595210)
#define OBCAIIPOJEO_KNJHPJMALGB_OFFSET UNITYSDK_OFFSET(0x594E50)
#define OBCAIIPOJEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5950D0)
#define OBCAIIPOJEO__CCTOR_OFFSET UNITYSDK_OFFSET(0xE135650)
#define OBCAIIPOJEO__CTOR_OFFSET UNITYSDK_OFFSET(0x594E20)

inline static constexpr unsigned int OBCAIIPOJEO_TypeDefinitionIndex = 66811;

struct alignas(8) OBCAIIPOJEO
{
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KODCBPBMPIG()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(OBCAIIPOJEO_TypeDefinitionIndex)->GetStaticField(0x42800);
	}
	::BHDIFOOIHLK* LPFMLMAGDAB; // 0x10
	::JEADJDGHAKN LADKEMNDGMA; // 0x18

	::System::Void _ctor(::JEADJDGHAKN& CNEIJPENKBC, ::BHDIFOOIHLK* GHECKPHEPDB)
	{
		return ((::System::Void(*)(::PVOID, ::JEADJDGHAKN&, ::BHDIFOOIHLK*))((::PBYTE)hIl2Cpp + OBCAIIPOJEO__CTOR_OFFSET))(this, CNEIJPENKBC, GHECKPHEPDB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBCAIIPOJEO__CCTOR_OFFSET))();
	}

	::KDIALKAABIA KNJHPJMALGB()
	{
		return ((::KDIALKAABIA(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_KNJHPJMALGB_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::OBCAIIPOJEO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OBCAIIPOJEO))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_TOSTRING_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean CCIJBILDBCN(::JEADJDGHAKN& LONDHKIEBPP, ::AJLGBLEMDCF*& HINEJHJDICB)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEADJDGHAKN&, ::AJLGBLEMDCF*&))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_CCIJBILDBCN_OFFSET))(this, LONDHKIEBPP, HINEJHJDICB);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBCAIIPOJEO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
