#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define CHODNEDHGJE_IANPOOGHJKG_DNGGGGMELNN_OFFSET UNITYSDK_OFFSET(0x1325EFB0)
#define CHODNEDHGJE_IANPOOGHJKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1325EFA0)

inline static constexpr unsigned int CHODNEDHGJE_IANPOOGHJKG_TypeDefinitionIndex = 88593;

class CHODNEDHGJE_IANPOOGHJKG : public ::System::Object
{
public:
	::HPBIMDNDPLK LPIHAHMNBIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IANPOOGHJKG__CTOR_OFFSET))(this);
	}

	::System::Void DNGGGGMELNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_IANPOOGHJKG_DNGGGGMELNN_OFFSET))(this);
	}
};
