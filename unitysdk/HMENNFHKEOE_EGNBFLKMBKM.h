#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;

#define HMENNFHKEOE_EGNBFLKMBKM_KOEFFAICFCN_OFFSET UNITYSDK_OFFSET(0x16F4EBD0)
#define HMENNFHKEOE_EGNBFLKMBKM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4EBC0)

inline static constexpr unsigned int HMENNFHKEOE_EGNBFLKMBKM_TypeDefinitionIndex = 53316;

class HMENNFHKEOE_EGNBFLKMBKM : public ::System::Object
{
public:
	::GBINEPNHKKO* GGPHLCMFNBH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EGNBFLKMBKM__CTOR_OFFSET))(this);
	}

	::System::Void KOEFFAICFCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EGNBFLKMBKM_KOEFFAICFCN_OFFSET))(this);
	}
};
