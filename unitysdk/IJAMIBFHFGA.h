#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

#define IJAMIBFHFGA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14A26660)
#define IJAMIBFHFGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A26610)
#define IJAMIBFHFGA_KOPHDONLMJJ_OFFSET UNITYSDK_OFFSET(0x14A26580)
#define IJAMIBFHFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A26650)

inline static constexpr unsigned int IJAMIBFHFGA_TypeDefinitionIndex = 51023;

class IJAMIBFHFGA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAMIBFHFGA__CTOR_OFFSET))(this);
	}

	::System::Boolean KOPHDONLMJJ(::Foundation::Unreal::FGameplayTagContainer JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + IJAMIBFHFGA_KOPHDONLMJJ_OFFSET))(this, JMDOANHOEJG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAMIBFHFGA_DISPOSE_OFFSET))(this);
	}

	static ::IJAMIBFHFGA* COKNIICCODC()
	{
		return ((::IJAMIBFHFGA*(*)())((::PBYTE)hIl2Cpp + IJAMIBFHFGA_COKNIICCODC_OFFSET))();
	}
};
