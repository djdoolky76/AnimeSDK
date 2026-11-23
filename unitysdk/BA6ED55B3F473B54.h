#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3850DE56028A1AB.h"

namespace TA::EnvironmentSystem { class MonoESVolume; }

#define BA6ED55B3F473B54_F0B2705EA3B83AE1_OFFSET UNITYSDK_OFFSET(0x28E5C20)
#define BA6ED55B3F473B54_F3E9BFF09C08956D_OFFSET UNITYSDK_OFFSET(0x28E5AD0)
#define BA6ED55B3F473B54_FE54CCFB7A90ADB1_OFFSET UNITYSDK_OFFSET(0x28E5A60)
#define BA6ED55B3F473B54__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BA6ED55B3F473B54_TypeDefinitionIndex = 16356;

class BA6ED55B3F473B54 : public ::E3850DE56028A1AB
{
public:
	::TA::EnvironmentSystem::MonoESVolume* F0B2705EA3B83AE1()
	{
		return ((::TA::EnvironmentSystem::MonoESVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6ED55B3F473B54_F0B2705EA3B83AE1_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6ED55B3F473B54__CTOR_OFFSET))(this);
	}

	::System::Void FE54CCFB7A90ADB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6ED55B3F473B54_FE54CCFB7A90ADB1_OFFSET))(this);
	}

	::System::Void F3E9BFF09C08956D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6ED55B3F473B54_F3E9BFF09C08956D_OFFSET))(this);
	}
};
