#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

#define MKEGFELEHIA_BMACGGFNJPP_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x12D8FDA0)
#define MKEGFELEHIA_BMACGGFNJPP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8FDF0)

inline static constexpr unsigned int MKEGFELEHIA_BMACGGFNJPP_TypeDefinitionIndex = 58090;

class MKEGFELEHIA_BMACGGFNJPP : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTag IPKHBKKOBFC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_BMACGGFNJPP__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MKEGFELEHIA_BMACGGFNJPP_ONVISITONE_OFFSET))(this, AELLPLBJELA);
	}
};
