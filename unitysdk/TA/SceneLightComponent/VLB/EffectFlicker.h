#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/SceneLightComponent/VLB/EffectAbstractBase.h"
#include "unitysdk/TA/SceneLightComponent/VLB/MinMaxRangeFloat.h"

namespace System::Collections { class IEnumerator; }

#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_A393C155F5A72A7C_OFFSET UNITYSDK_OFFSET(0x2870570)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_B8A877C4D2176C00_OFFSET UNITYSDK_OFFSET(0x2870250)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2870470)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_E1289B07E4E4F6E1_OFFSET UNITYSDK_OFFSET(0x28700C0)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_E1E04CEA7F5BBABD_OFFSET UNITYSDK_OFFSET(0x2870300)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_EF8B9E3C0A2E1390_OFFSET UNITYSDK_OFFSET(0x2870560)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_F62A829DCBD47850_OFFSET UNITYSDK_OFFSET(0x28701A0)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER__CTOR_OFFSET UNITYSDK_OFFSET(0x2870580)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int EffectFlicker_TypeDefinitionIndex = 16109;

	class EffectFlicker : public ::TA::SceneLightComponent::VLB::EffectAbstractBase
	{
	public:
		::System::Single frequency; // 0x50
		::System::Boolean performPauses; // 0x54
		::System::Byte _padding0[0x3];
		::TA::SceneLightComponent::VLB::MinMaxRangeFloat flickeringDuration; // 0x58
		::TA::SceneLightComponent::VLB::MinMaxRangeFloat pauseDuration; // 0x60
		::System::Boolean restoreIntensityOnPause; // 0x68
		::System::Byte _padding1[0x3];
		::TA::SceneLightComponent::VLB::MinMaxRangeFloat intensityAmplitude; // 0x6C
		::System::Single smoothing; // 0x74
		::System::Single F5EA43B8D2759D0E; // 0x78

		::System::Void EF8B9E3C0A2E1390(::TA::SceneLightComponent::VLB::EffectAbstractBase* EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::TA::SceneLightComponent::VLB::EffectAbstractBase*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_EF8B9E3C0A2E1390_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* B8A877C4D2176C00()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_B8A877C4D2176C00_OFFSET))(this);
		}

		::System::Void A393C155F5A72A7C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_A393C155F5A72A7C_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E1E04CEA7F5BBABD(::TA::SceneLightComponent::VLB::EffectAbstractBase* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::TA::SceneLightComponent::VLB::EffectAbstractBase*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_E1E04CEA7F5BBABD_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Collections::IEnumerator* E1289B07E4E4F6E1(::System::Single B87DF30AFB163CE7, ::System::Single EFAD5C22CDBA8011)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_E1289B07E4E4F6E1_OFFSET))(this, B87DF30AFB163CE7, EFAD5C22CDBA8011);
		}

		::System::Collections::IEnumerator* F62A829DCBD47850()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTFLICKER_F62A829DCBD47850_OFFSET))(this);
		}
	};
}
