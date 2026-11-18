#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FLFDEOIAKAP.h"

class BOBCKMHNJJC;

#define HGMAFMCLBFG_BJPBOKFKIFI_OFFSET UNITYSDK_OFFSET(0x15B48EA0)
#define HGMAFMCLBFG_GFKADDAHPPE_OFFSET UNITYSDK_OFFSET(0x15B48F10)
#define HGMAFMCLBFG_GNEPEMEHMHG_OFFSET UNITYSDK_OFFSET(0x15B48BA0)
#define HGMAFMCLBFG_HPDCOHLNDBC_OFFSET UNITYSDK_OFFSET(0x15B48DC0)
#define HGMAFMCLBFG_KCHDLDMDPCJ_OFFSET UNITYSDK_OFFSET(0x15B48CE0)
#define HGMAFMCLBFG_NHEINDEIKEB_OFFSET UNITYSDK_OFFSET(0x15B48C70)
#define HGMAFMCLBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48BE0)

inline static constexpr unsigned int HGMAFMCLBFG_TypeDefinitionIndex = 65363;

class HGMAFMCLBFG : public ::System::Object
{
public:
	::BOBCKMHNJJC* DJHNMBGFIMP; // 0x10
	::System::Boolean MPFMOGCPKKI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMAFMCLBFG__CTOR_OFFSET))(this);
	}

	::System::Void GNEPEMEHMHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMAFMCLBFG_GNEPEMEHMHG_OFFSET))(this);
	}

	::System::Void NHEINDEIKEB(::System::Int32 LCECILKAMAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGMAFMCLBFG_NHEINDEIKEB_OFFSET))(this, LCECILKAMAJ);
	}

	::FLFDEOIAKAP KCHDLDMDPCJ(::System::Int32 LCECILKAMAJ)
	{
		return ((::FLFDEOIAKAP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGMAFMCLBFG_KCHDLDMDPCJ_OFFSET))(this, LCECILKAMAJ);
	}

	::System::Void HPDCOHLNDBC(::FLFDEOIAKAP HBHAGICGLBB)
	{
		return ((::System::Void(*)(::PVOID, ::FLFDEOIAKAP))((::PBYTE)hIl2Cpp + HGMAFMCLBFG_HPDCOHLNDBC_OFFSET))(this, HBHAGICGLBB);
	}

	::System::Void BJPBOKFKIFI(::System::Int32 AJJPHGLFOID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGMAFMCLBFG_BJPBOKFKIFI_OFFSET))(this, AJJPHGLFOID);
	}

	::System::Void GFKADDAHPPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMAFMCLBFG_GFKADDAHPPE_OFFSET))(this);
	}
};
