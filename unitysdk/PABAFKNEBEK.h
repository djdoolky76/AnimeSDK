#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJHKEAFOAF.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PABAFKNEBEK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1845ADF0)
#define PABAFKNEBEK_CEEABKCBOAA_OFFSET UNITYSDK_OFFSET(0x1845AB10)
#define PABAFKNEBEK_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1845ABE0)
#define PABAFKNEBEK_KLJGCGKODAE_OFFSET UNITYSDK_OFFSET(0x1845A9E0)
#define PABAFKNEBEK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1845AAB0)
#define PABAFKNEBEK_MOLOJPAPBEN_OFFSET UNITYSDK_OFFSET(0x1845A9D0)
#define PABAFKNEBEK_NOBIHAPGFFC_OFFSET UNITYSDK_OFFSET(0x1845AC30)
#define PABAFKNEBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1845A9C0)

inline static constexpr unsigned int PABAFKNEBEK_TypeDefinitionIndex = 53924;

class PABAFKNEBEK : public ::System::Object
{
public:
	::LLJHKEAFOAF EMOPBPHKBNA; // 0x10
	::System::Action* PLMDHJCDHIN; // 0x20
	::System::Boolean CEABLLJCIPE; // 0x28
	::System::Boolean GEJDJLNLFGI; // 0x29
	::System::Byte _padding0[0x2];
	::System::Single JNFCNLOOFMH; // 0x2C
	::System::Single OPCJGOCIJKJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAFKNEBEK__CTOR_OFFSET))(this);
	}

	::System::Boolean MOLOJPAPBEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAFKNEBEK_MOLOJPAPBEN_OFFSET))(this);
	}

	::System::Void KLJGCGKODAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAFKNEBEK_KLJGCGKODAE_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAFKNEBEK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void CEEABKCBOAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAFKNEBEK_CEEABKCBOAA_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK(::System::Boolean CEABLLJCIPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PABAFKNEBEK_EDEFLFIKNFK_OFFSET))(this, CEABLLJCIPE);
	}

	::System::Void NOBIHAPGFFC(::System::Boolean JNKGAOCPAAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PABAFKNEBEK_NOBIHAPGFFC_OFFSET))(this, JNKGAOCPAAP);
	}

	::System::Void BBOMJDBNHIC(::System::Action* HNNHBOMOOEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PABAFKNEBEK_BBOMJDBNHIC_OFFSET))(this, HNNHBOMOOEM);
	}
};
