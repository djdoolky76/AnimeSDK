#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

#define OINGKLAHGOI_EGEPEEFMHFI_DBBGNMHMAOD_OFFSET UNITYSDK_OFFSET(0x10076B80)
#define OINGKLAHGOI_EGEPEEFMHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x100766C0)

inline static constexpr unsigned int OINGKLAHGOI_EGEPEEFMHFI_TypeDefinitionIndex = 65246;

class OINGKLAHGOI_EGEPEEFMHFI : public ::System::Object
{
public:
	::GHCAHMCCPML FKMHMOELCIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_EGEPEEFMHFI__CTOR_OFFSET))(this);
	}

	::System::Void DBBGNMHMAOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_EGEPEEFMHFI_DBBGNMHMAOD_OFFSET))(this);
	}
};
