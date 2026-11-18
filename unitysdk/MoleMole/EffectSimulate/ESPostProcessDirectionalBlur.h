#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x19B493B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x19B4B080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x19B491C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x19B49C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x19B49B50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x19B491B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x19B48FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x19B4BC90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x19B4B950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4BFD0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDirectionalBlur_TypeDefinitionIndex = 72449;

	class ESPostProcessDirectionalBlur
	{
	public:
		::MoleMole::Config::ConfigEntityDirectionalBlurEffects* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolDefault_downSample; // 0xB8
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolDefault_sampleDistanceMode; // 0xBC
		::System::Int32 _VolDefault_sampleCount; // 0xC0
		::System::Single _VolDefault_radius; // 0xC4
		::UnityEngine::Vector2 _VolDefault_direction; // 0xC8
		::System::Boolean _VolPreVal_downSample_overrideState; // 0xD0
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolPreVal_downSample; // 0xD4
		::System::Boolean _VolPreVal_sampleDistanceMode_overrideState; // 0xD8
		::System::Byte _padding1[0x3];
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolPreVal_sampleDistanceMode; // 0xDC
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xE0
		::System::Byte _padding2[0x3];
		::System::Int32 _VolPreVal_sampleCount; // 0xE4
		::System::Boolean _VolPreVal_radius_overrideState; // 0xE8
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_radius; // 0xEC
		::System::Boolean _VolPreVal_direction_overrideState; // 0xF0
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector2 _VolPreVal_direction; // 0xF4
		::System::Single _TimelineCurveFirstVal_radius; // 0xFC
		::System::Single _TimelineCurveLastVal_radius; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x104
		::UnityEngine::Rendering::Universal::DownSampleLevel ESPP_downSample; // 0x108
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleDistanceMode_FieldHandleType; // 0x10C
		::UnityEngine::Rendering::Universal::SampleDistanceMode ESPP_sampleDistanceMode; // 0x110
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x114
		::System::Int32 ESPP_sampleCount; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x11C
		::System::Boolean ESPP_radius_UseIt; // 0x120
		::System::Byte _padding5[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x128
		::System::Boolean ESPP_radius_EnableFade; // 0x130
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x131
		::System::Byte _padding6[0x2];
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_direction_FieldHandleType; // 0x138
		::UnityEngine::Vector2 ESPP_direction; // 0x13C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDIRECTIONALBLUR_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
