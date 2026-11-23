#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/SceneLightComponent/VLB/EffectAbstractBase.h"
#include "unitysdk/TA/SceneLightComponent/VLB/MinMaxRangeFloat.h"

namespace System::Collections { class IEnumerator; }

#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_A393C155F5A72A7C_OFFSET UNITYSDK_OFFSET(0x2870570)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_B8A877C4D2176C00_OFFSET UNITYSDK_OFFSET(0x28DCF10)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28DD0F0)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_E1E04CEA7F5BBABD_OFFSET UNITYSDK_OFFSET(0x28DCFC0)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_EF8B9E3C0A2E1390_OFFSET UNITYSDK_OFFSET(0x2870560)
#define TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE__CTOR_OFFSET UNITYSDK_OFFSET(0x28DD1E0)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int EffectPulse_TypeDefinitionIndex = 16439;

	class EffectPulse : public ::TA::SceneLightComponent::VLB::EffectAbstractBase
	{
	public:
		::System::Single frequency; // 0x50
		::TA::SceneLightComponent::VLB::MinMaxRangeFloat intensityAmplitude; // 0x54

		::System::Collections::IEnumerator* B8A877C4D2176C00()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_B8A877C4D2176C00_OFFSET))(this);
		}

		::System::Void A393C155F5A72A7C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_A393C155F5A72A7C_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE__CTOR_OFFSET))(this);
		}

		::System::Void E1E04CEA7F5BBABD(::TA::SceneLightComponent::VLB::EffectAbstractBase* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::TA::SceneLightComponent::VLB::EffectAbstractBase*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_E1E04CEA7F5BBABD_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void EF8B9E3C0A2E1390(::TA::SceneLightComponent::VLB::EffectAbstractBase* EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::TA::SceneLightComponent::VLB::EffectAbstractBase*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_EFFECTPULSE_EF8B9E3C0A2E1390_OFFSET))(this, EF750947C30CE985);
		}
	};
}
