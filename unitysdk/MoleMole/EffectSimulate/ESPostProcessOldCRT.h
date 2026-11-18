#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1A79A2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1A79BBE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1A79A0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1A79AAB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1A79A880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1A79A0C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1A799DF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1A79CA50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1A79C390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79D110)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessOldCRT_TypeDefinitionIndex = 64950;

	class ESPostProcessOldCRT
	{
	public:
		::MoleMole::Config::ConfigEntityOldCRTEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_pattern; // 0xB8
		::UnityEngine::Vector2 _VolDefault_tiling; // 0xC0
		::System::Single _VolDefault_scanlineBrightness; // 0xC8
		::System::Single _VolDefault_fade; // 0xCC
		::System::Boolean _VolPreVal_pattern_overrideState; // 0xD0
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture* _VolPreVal_pattern; // 0xD8
		::System::Boolean _VolPreVal_tiling_overrideState; // 0xE0
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 _VolPreVal_tiling; // 0xE4
		::System::Boolean _VolPreVal_scanlineBrightness_overrideState; // 0xEC
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_scanlineBrightness; // 0xF0
		::System::Boolean _VolPreVal_fade_overrideState; // 0xF4
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_fade; // 0xF8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_tiling; // 0xFC
		::UnityEngine::Vector2 _TimelineCurveLastVal_tiling; // 0x104
		::System::Single _TimelineCurveFirstVal_scanlineBrightness; // 0x10C
		::System::Single _TimelineCurveLastVal_scanlineBrightness; // 0x110
		::System::Single _TimelineCurveFirstVal_fade; // 0x114
		::System::Single _TimelineCurveLastVal_fade; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pattern_FieldHandleType; // 0x11C
		::UnityEngine::Texture* ESPP_pattern; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_tiling_FieldHandleType; // 0x128
		::System::Boolean ESPP_tiling_UseIt; // 0x12C
		::System::Byte _padding4[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_tiling; // 0x130
		::System::Boolean ESPP_tiling_EnableFade; // 0x138
		::System::Boolean ESPP_tiling_EnableOverrideDefaultValue; // 0x139
		::System::Byte _padding5[0x2];
		::UnityEngine::Vector2 ESPP_tiling_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineBrightness_FieldHandleType; // 0x144
		::System::Boolean ESPP_scanlineBrightness_UseIt; // 0x148
		::System::Byte _padding6[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineBrightness; // 0x150
		::System::Boolean ESPP_scanlineBrightness_EnableFade; // 0x158
		::System::Boolean ESPP_scanlineBrightness_EnableOverrideDefaultValue; // 0x159
		::System::Byte _padding7[0x2];
		::System::Single ESPP_scanlineBrightness_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fade_FieldHandleType; // 0x160
		::System::Boolean ESPP_fade_UseIt; // 0x164
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fade; // 0x168
		::System::Boolean ESPP_fade_EnableFade; // 0x170
		::System::Boolean ESPP_fade_EnableOverrideDefaultValue; // 0x171
		::System::Byte _padding9[0x2];
		::System::Single ESPP_fade_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSOLDCRT_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
