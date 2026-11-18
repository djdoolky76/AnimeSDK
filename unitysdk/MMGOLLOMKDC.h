#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMGOLLOMKDC__CTOR_OFFSET UNITYSDK_OFFSET(0x131A1CA0)

inline static constexpr unsigned int MMGOLLOMKDC_TypeDefinitionIndex = 48420;

class MMGOLLOMKDC : public ::System::Object
{
public:
	::System::UInt64 DGEBDBEOEFO; // 0x10
	::System::Boolean EHGMNHMIHCA; // 0x18
	::System::Boolean HFBPONNNLBA; // 0x19
	::System::Boolean HDBIBFNIIDA; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGOLLOMKDC__CTOR_OFFSET))(this);
	}
};
