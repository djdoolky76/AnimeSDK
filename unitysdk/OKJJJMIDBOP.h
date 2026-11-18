#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

#define OKJJJMIDBOP_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xF19A7F0)
#define OKJJJMIDBOP_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0xF19A890)
#define OKJJJMIDBOP__CTOR_OFFSET UNITYSDK_OFFSET(0xF19A900)

inline static constexpr unsigned int OKJJJMIDBOP_TypeDefinitionIndex = 72748;

class OKJJJMIDBOP : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagContainer JHIJPCJBOCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJJJMIDBOP__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJJJMIDBOP_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJJJMIDBOP_ILEEFLAOOOM_OFFSET))(this);
	}
};
