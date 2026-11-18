#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define LAIAMGCMKOH_ADMEFBBHAPI_OFFSET UNITYSDK_OFFSET(0x129B3370)
#define LAIAMGCMKOH_BHIFKPMLNOB_OFFSET UNITYSDK_OFFSET(0x129B2980)
#define LAIAMGCMKOH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x129B26E0)
#define LAIAMGCMKOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129B2440)
#define LAIAMGCMKOH_KOPHDONLMJJ_OFFSET UNITYSDK_OFFSET(0x129B2310)
#define LAIAMGCMKOH__CTOR_OFFSET UNITYSDK_OFFSET(0x129B26D0)

inline static constexpr unsigned int LAIAMGCMKOH_TypeDefinitionIndex = 59372;

class LAIAMGCMKOH : public ::System::Object
{
public:
	// static const ::System::Int32 CLBFPEKFBGN = -0x1; // 0x0
	// static const ::System::Int32 JPFJAEGKEHO = 0x0; // 0x0
	// static const ::System::Int32 LOKODABKBGD = 0x1; // 0x0
	::Foundation::Unreal::FGameplayTagContainer KFAEPFKADIM; // 0x10
	::System::Int32 ABMCDGINGMC; // 0x80
	::System::Int32 IKPOHIOIONP; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIAMGCMKOH__CTOR_OFFSET))(this);
	}

	::System::Boolean KOPHDONLMJJ(::Foundation::Unreal::FGameplayTagContainer JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + LAIAMGCMKOH_KOPHDONLMJJ_OFFSET))(this, JMDOANHOEJG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIAMGCMKOH_DISPOSE_OFFSET))(this);
	}

	static ::LAIAMGCMKOH* COKNIICCODC()
	{
		return ((::LAIAMGCMKOH*(*)())((::PBYTE)hIl2Cpp + LAIAMGCMKOH_COKNIICCODC_OFFSET))();
	}

	::System::Void ADMEFBBHAPI(::System::EventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LAIAMGCMKOH_ADMEFBBHAPI_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BHIFKPMLNOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIAMGCMKOH_BHIFKPMLNOB_OFFSET))(this);
	}
};
