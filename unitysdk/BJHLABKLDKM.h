#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIEFLKMPLEA.h"
#include "unitysdk/JOOOIMGAEMP.h"

class EGOPHPIBPJJ;
class KGBFLHNJHHN;
namespace System { class String; }

#define BJHLABKLDKM_BCLLGADBHIM_OFFSET UNITYSDK_OFFSET(0x142547B0)
#define BJHLABKLDKM_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x142547A0)
#define BJHLABKLDKM_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x142547C0)
#define BJHLABKLDKM_JJDHEMCAIJN_OFFSET UNITYSDK_OFFSET(0x14254850)
#define BJHLABKLDKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14254790)

inline static constexpr unsigned int BJHLABKLDKM_TypeDefinitionIndex = 86469;

class BJHLABKLDKM : public ::HIEFLKMPLEA
{
public:
	::EGOPHPIBPJJ* LAENCNGDKCM; // 0x40

	::System::Void _ctor(::JOOOIMGAEMP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOOOIMGAEMP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BJHLABKLDKM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLABKLDKM_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Boolean BCLLGADBHIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLABKLDKM_BCLLGADBHIM_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLABKLDKM_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Boolean JJDHEMCAIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLABKLDKM_JJDHEMCAIJN_OFFSET))(this);
	}
};
