#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCNKECKKCDC.h"
#include "unitysdk/KPCACIBKDDF.h"

class KGBFLHNJHHN;

#define HDHELFDOAKE_DGCMOKLKFBD_OFFSET UNITYSDK_OFFSET(0x1B4DD450)
#define HDHELFDOAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DD440)

inline static constexpr unsigned int HDHELFDOAKE_TypeDefinitionIndex = 17723;

class HDHELFDOAKE : public ::FCNKECKKCDC
{
public:
	::System::Void _ctor(::KPCACIBKDDF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KPCACIBKDDF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HDHELFDOAKE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DGCMOKLKFBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHELFDOAKE_DGCMOKLKFBD_OFFSET))(this);
	}
};
