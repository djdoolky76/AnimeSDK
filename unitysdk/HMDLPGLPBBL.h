#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOEMGPJLBDL.h"
#include "unitysdk/DPAHOMDFCEH.h"
#include "unitysdk/FOCLHIFFIHK.h"
#include "unitysdk/System/Object.h"

#define HMDLPGLPBBL_FGHMPFLEEKG_OFFSET UNITYSDK_OFFSET(0x1E5E9010)
#define HMDLPGLPBBL_HFMGEKIPCOL_OFFSET UNITYSDK_OFFSET(0x1E5E8FC0)
#define HMDLPGLPBBL_KKBAAECGHAB_OFFSET UNITYSDK_OFFSET(0x1E5E8F70)
#define HMDLPGLPBBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5CE0)

inline static constexpr unsigned int HMDLPGLPBBL_TypeDefinitionIndex = 34108;

class HMDLPGLPBBL : public ::System::Object
{
public:
	::System::UInt32 EKPJCDEDHHI; // 0x10
	::System::UInt32 GHPCGNNHKFA; // 0x14
	::BOEMGPJLBDL EOBJDEADDBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDLPGLPBBL__CTOR_OFFSET))(this);
	}

	::DPAHOMDFCEH FGHMPFLEEKG()
	{
		return ((::DPAHOMDFCEH(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDLPGLPBBL_FGHMPFLEEKG_OFFSET))(this);
	}

	::System::Boolean HFMGEKIPCOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDLPGLPBBL_HFMGEKIPCOL_OFFSET))(this);
	}

	::FOCLHIFFIHK KKBAAECGHAB()
	{
		return ((::FOCLHIFFIHK(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDLPGLPBBL_KKBAAECGHAB_OFFSET))(this);
	}
};
