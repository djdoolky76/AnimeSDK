#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1BA69340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1BA6C610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1BA690A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA6A390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1BA69D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1BA69090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1BA68AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1BA6E180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1BA6D470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6EE90)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessChannelMixer_TypeDefinitionIndex = 51979;

	class ESPostProcessChannelMixer
	{
	public:
		::MoleMole::Config::ConfigEntityChannelMixerEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_redOutRedIn; // 0xB8
		::System::Single _VolDefault_redOutGreenIn; // 0xBC
		::System::Single _VolDefault_redOutBlueIn; // 0xC0
		::System::Single _VolDefault_greenOutRedIn; // 0xC4
		::System::Single _VolDefault_greenOutGreenIn; // 0xC8
		::System::Single _VolDefault_greenOutBlueIn; // 0xCC
		::System::Single _VolDefault_blueOutRedIn; // 0xD0
		::System::Single _VolDefault_blueOutGreenIn; // 0xD4
		::System::Single _VolDefault_blueOutBlueIn; // 0xD8
		::System::Boolean _VolPreVal_redOutRedIn_overrideState; // 0xDC
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_redOutRedIn; // 0xE0
		::System::Boolean _VolPreVal_redOutGreenIn_overrideState; // 0xE4
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_redOutGreenIn; // 0xE8
		::System::Boolean _VolPreVal_redOutBlueIn_overrideState; // 0xEC
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_redOutBlueIn; // 0xF0
		::System::Boolean _VolPreVal_greenOutRedIn_overrideState; // 0xF4
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_greenOutRedIn; // 0xF8
		::System::Boolean _VolPreVal_greenOutGreenIn_overrideState; // 0xFC
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_greenOutGreenIn; // 0x100
		::System::Boolean _VolPreVal_greenOutBlueIn_overrideState; // 0x104
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_greenOutBlueIn; // 0x108
		::System::Boolean _VolPreVal_blueOutRedIn_overrideState; // 0x10C
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_blueOutRedIn; // 0x110
		::System::Boolean _VolPreVal_blueOutGreenIn_overrideState; // 0x114
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_blueOutGreenIn; // 0x118
		::System::Boolean _VolPreVal_blueOutBlueIn_overrideState; // 0x11C
		::System::Byte _padding8[0x3];
		::System::Single _VolPreVal_blueOutBlueIn; // 0x120
		::System::Single _TimelineCurveFirstVal_redOutRedIn; // 0x124
		::System::Single _TimelineCurveLastVal_redOutRedIn; // 0x128
		::System::Single _TimelineCurveFirstVal_redOutGreenIn; // 0x12C
		::System::Single _TimelineCurveLastVal_redOutGreenIn; // 0x130
		::System::Single _TimelineCurveFirstVal_redOutBlueIn; // 0x134
		::System::Single _TimelineCurveLastVal_redOutBlueIn; // 0x138
		::System::Single _TimelineCurveFirstVal_greenOutRedIn; // 0x13C
		::System::Single _TimelineCurveLastVal_greenOutRedIn; // 0x140
		::System::Single _TimelineCurveFirstVal_greenOutGreenIn; // 0x144
		::System::Single _TimelineCurveLastVal_greenOutGreenIn; // 0x148
		::System::Single _TimelineCurveFirstVal_greenOutBlueIn; // 0x14C
		::System::Single _TimelineCurveLastVal_greenOutBlueIn; // 0x150
		::System::Single _TimelineCurveFirstVal_blueOutRedIn; // 0x154
		::System::Single _TimelineCurveLastVal_blueOutRedIn; // 0x158
		::System::Single _TimelineCurveFirstVal_blueOutGreenIn; // 0x15C
		::System::Single _TimelineCurveLastVal_blueOutGreenIn; // 0x160
		::System::Single _TimelineCurveFirstVal_blueOutBlueIn; // 0x164
		::System::Single _TimelineCurveLastVal_blueOutBlueIn; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_redOutRedIn_FieldHandleType; // 0x16C
		::System::Boolean ESPP_redOutRedIn_UseIt; // 0x170
		::System::Byte _padding9[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_redOutRedIn; // 0x178
		::System::Boolean ESPP_redOutRedIn_EnableFade; // 0x180
		::System::Boolean ESPP_redOutRedIn_EnableOverrideDefaultValue; // 0x181
		::System::Byte _padding10[0x2];
		::System::Single ESPP_redOutRedIn_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_redOutGreenIn_FieldHandleType; // 0x188
		::System::Boolean ESPP_redOutGreenIn_UseIt; // 0x18C
		::System::Byte _padding11[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_redOutGreenIn; // 0x190
		::System::Boolean ESPP_redOutGreenIn_EnableFade; // 0x198
		::System::Boolean ESPP_redOutGreenIn_EnableOverrideDefaultValue; // 0x199
		::System::Byte _padding12[0x2];
		::System::Single ESPP_redOutGreenIn_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_redOutBlueIn_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_redOutBlueIn_UseIt; // 0x1A4
		::System::Byte _padding13[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_redOutBlueIn; // 0x1A8
		::System::Boolean ESPP_redOutBlueIn_EnableFade; // 0x1B0
		::System::Boolean ESPP_redOutBlueIn_EnableOverrideDefaultValue; // 0x1B1
		::System::Byte _padding14[0x2];
		::System::Single ESPP_redOutBlueIn_OverrideDefaultValue; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_greenOutRedIn_FieldHandleType; // 0x1B8
		::System::Boolean ESPP_greenOutRedIn_UseIt; // 0x1BC
		::System::Byte _padding15[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_greenOutRedIn; // 0x1C0
		::System::Boolean ESPP_greenOutRedIn_EnableFade; // 0x1C8
		::System::Boolean ESPP_greenOutRedIn_EnableOverrideDefaultValue; // 0x1C9
		::System::Byte _padding16[0x2];
		::System::Single ESPP_greenOutRedIn_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_greenOutGreenIn_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_greenOutGreenIn_UseIt; // 0x1D4
		::System::Byte _padding17[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_greenOutGreenIn; // 0x1D8
		::System::Boolean ESPP_greenOutGreenIn_EnableFade; // 0x1E0
		::System::Boolean ESPP_greenOutGreenIn_EnableOverrideDefaultValue; // 0x1E1
		::System::Byte _padding18[0x2];
		::System::Single ESPP_greenOutGreenIn_OverrideDefaultValue; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_greenOutBlueIn_FieldHandleType; // 0x1E8
		::System::Boolean ESPP_greenOutBlueIn_UseIt; // 0x1EC
		::System::Byte _padding19[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_greenOutBlueIn; // 0x1F0
		::System::Boolean ESPP_greenOutBlueIn_EnableFade; // 0x1F8
		::System::Boolean ESPP_greenOutBlueIn_EnableOverrideDefaultValue; // 0x1F9
		::System::Byte _padding20[0x2];
		::System::Single ESPP_greenOutBlueIn_OverrideDefaultValue; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blueOutRedIn_FieldHandleType; // 0x200
		::System::Boolean ESPP_blueOutRedIn_UseIt; // 0x204
		::System::Byte _padding21[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blueOutRedIn; // 0x208
		::System::Boolean ESPP_blueOutRedIn_EnableFade; // 0x210
		::System::Boolean ESPP_blueOutRedIn_EnableOverrideDefaultValue; // 0x211
		::System::Byte _padding22[0x2];
		::System::Single ESPP_blueOutRedIn_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blueOutGreenIn_FieldHandleType; // 0x218
		::System::Boolean ESPP_blueOutGreenIn_UseIt; // 0x21C
		::System::Byte _padding23[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blueOutGreenIn; // 0x220
		::System::Boolean ESPP_blueOutGreenIn_EnableFade; // 0x228
		::System::Boolean ESPP_blueOutGreenIn_EnableOverrideDefaultValue; // 0x229
		::System::Byte _padding24[0x2];
		::System::Single ESPP_blueOutGreenIn_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blueOutBlueIn_FieldHandleType; // 0x230
		::System::Boolean ESPP_blueOutBlueIn_UseIt; // 0x234
		::System::Byte _padding25[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blueOutBlueIn; // 0x238
		::System::Boolean ESPP_blueOutBlueIn_EnableFade; // 0x240
		::System::Boolean ESPP_blueOutBlueIn_EnableOverrideDefaultValue; // 0x241
		::System::Byte _padding26[0x2];
		::System::Single ESPP_blueOutBlueIn_OverrideDefaultValue; // 0x244

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHANNELMIXER_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
