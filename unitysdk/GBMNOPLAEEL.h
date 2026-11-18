#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define GBMNOPLAEEL_BCJGLJAJANO_OFFSET UNITYSDK_OFFSET(0x721C90)
#define GBMNOPLAEEL_DCGHAFKLEOI_OFFSET UNITYSDK_OFFSET(0x721B10)
#define GBMNOPLAEEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x721AF0)
#define GBMNOPLAEEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x721B00)
#define GBMNOPLAEEL_HCNACBEBBMC_OFFSET UNITYSDK_OFFSET(0x721B20)
#define GBMNOPLAEEL_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x721BA0)
#define GBMNOPLAEEL_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13DB4E60)
#define GBMNOPLAEEL_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x721C10)
#define GBMNOPLAEEL_NIBCIAGNEDH_OFFSET UNITYSDK_OFFSET(0x721C80)
#define GBMNOPLAEEL_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13DB50A0)
#define GBMNOPLAEEL_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x721B30)
#define GBMNOPLAEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x721AB0)

inline static constexpr unsigned int GBMNOPLAEEL_TypeDefinitionIndex = 47675;

struct alignas(4) GBMNOPLAEEL
{
	// static const ::System::UInt32 GFJLPDKFKDL = 0x7; // 0x0
	::System::DayOfWeek GPJDJIOKAOA; // 0x10
	::System::UInt32 CMHHJCLJCMN; // 0x14
	::GIFOBKBCCMA PDPAHPJEHHG; // 0x18

	::System::Void _ctor(::System::UInt32 HBPKEMAKHCP, ::System::UInt32 FDJEPEFKLIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBMNOPLAEEL__CTOR_OFFSET))(this, HBPKEMAKHCP, FDJEPEFKLIA);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_GETHASHCODE_OFFSET))(this);
	}

	::System::Void DCGHAFKLEOI(::System::Int32 KPLKPNMIOFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_DCGHAFKLEOI_OFFSET))(this, KPLKPNMIOFA);
	}

	::System::Void HCNACBEBBMC(::System::UInt32 HBPKEMAKHCP, ::ProtoScript::TimePeriodType PDPAHPJEHHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_HCNACBEBBMC_OFFSET))(this, HBPKEMAKHCP, PDPAHPJEHHG);
	}

	/*
	::System::Boolean PADHEHLKBDO(::GBMNOPLAEEL LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBMNOPLAEEL))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::GBMNOPLAEEL FFKBEGIHIGG, ::GBMNOPLAEEL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::GBMNOPLAEEL, ::GBMNOPLAEEL))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::GIFOBKBCCMA NIBCIAGNEDH()
	{
		return ((::GIFOBKBCCMA(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_NIBCIAGNEDH_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::GBMNOPLAEEL FFKBEGIHIGG, ::GBMNOPLAEEL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::GBMNOPLAEEL, ::GBMNOPLAEEL))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Void BCJGLJAJANO(::System::UInt32 FDJEPEFKLIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBMNOPLAEEL_BCJGLJAJANO_OFFSET))(this, FDJEPEFKLIA);
	}
};
