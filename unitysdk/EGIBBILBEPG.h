#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADCHFCMOILL.h"
#include "unitysdk/FLFDEOIAKAP.h"

#define EGIBBILBEPG_ABFLHCEJFLO_OFFSET UNITYSDK_OFFSET(0x10638430)
#define EGIBBILBEPG_KIBKMMDLHFD_OFFSET UNITYSDK_OFFSET(0x106384F0)
#define EGIBBILBEPG_LGMGFHAHLDJ_OFFSET UNITYSDK_OFFSET(0x10638370)
#define EGIBBILBEPG_NHEINDEIKEB_OFFSET UNITYSDK_OFFSET(0x106384A0)
#define EGIBBILBEPG__CTOR_OFFSET UNITYSDK_OFFSET(0x10638530)

inline static constexpr unsigned int EGIBBILBEPG_TypeDefinitionIndex = 83559;

class EGIBBILBEPG : public ::ADCHFCMOILL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBBILBEPG__CTOR_OFFSET))(this);
	}

	::System::Boolean LGMGFHAHLDJ(::System::Int32 AJJPHGLFOID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGIBBILBEPG_LGMGFHAHLDJ_OFFSET))(this, AJJPHGLFOID);
	}

	::System::Void ABFLHCEJFLO(::FLFDEOIAKAP HBHAGICGLBB)
	{
		return ((::System::Void(*)(::PVOID, ::FLFDEOIAKAP))((::PBYTE)hIl2Cpp + EGIBBILBEPG_ABFLHCEJFLO_OFFSET))(this, HBHAGICGLBB);
	}

	::System::Void NHEINDEIKEB(::System::Int32 LCECILKAMAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGIBBILBEPG_NHEINDEIKEB_OFFSET))(this, LCECILKAMAJ);
	}

	::System::Void KIBKMMDLHFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIBBILBEPG_KIBKMMDLHFD_OFFSET))(this);
	}
};
