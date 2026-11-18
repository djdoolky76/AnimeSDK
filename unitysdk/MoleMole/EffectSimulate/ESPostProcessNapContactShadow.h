#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityNapContactShadowEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x118FC960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x118FE180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x118FC7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x118FD130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x118FCF00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x118FC7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x118FC4E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x118FEFF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x118FE900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x118FF6E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapContactShadow_TypeDefinitionIndex = 47196;

	class ESPostProcessNapContactShadow
	{
	public:
		::MoleMole::Config::ConfigEntityNapContactShadowEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enabled; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Int32 _VolDefault_sampleCount; // 0xBC
		::System::Single _VolDefault_worldSpaceLength; // 0xC0
		::System::Boolean _VolPreVal_enabled_overrideState; // 0xC4
		::System::Boolean _VolPreVal_enabled; // 0xC5
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xC6
		::System::Byte _padding1[0x1];
		::System::Int32 _VolPreVal_sampleCount; // 0xC8
		::System::Boolean _VolPreVal_worldSpaceLength_overrideState; // 0xCC
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_worldSpaceLength; // 0xD0
		::System::Boolean _TimelineCurveFirstVal_enabled; // 0xD4
		::System::Boolean _TimelineCurveLastVal_enabled; // 0xD5
		::System::Byte _padding3[0x2];
		::System::Int32 _TimelineCurveFirstVal_sampleCount; // 0xD8
		::System::Int32 _TimelineCurveLastVal_sampleCount; // 0xDC
		::System::Single _TimelineCurveFirstVal_worldSpaceLength; // 0xE0
		::System::Single _TimelineCurveLastVal_worldSpaceLength; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enabled_FieldHandleType; // 0xE8
		::System::Boolean ESPP_enabled_UseIt; // 0xEC
		::System::Byte _padding4[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enabled; // 0xF0
		::System::Boolean ESPP_enabled_EnableFade; // 0xF8
		::System::Boolean ESPP_enabled_EnableOverrideDefaultValue; // 0xF9
		::System::Boolean ESPP_enabled_OverrideDefaultValue; // 0xFA
		::System::Byte _padding5[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0xFC
		::System::Boolean ESPP_sampleCount_UseIt; // 0x100
		::System::Byte _padding6[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCount; // 0x108
		::System::Boolean ESPP_sampleCount_EnableFade; // 0x110
		::System::Boolean ESPP_sampleCount_EnableOverrideDefaultValue; // 0x111
		::System::Byte _padding7[0x2];
		::System::Int32 ESPP_sampleCount_OverrideDefaultValue; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_worldSpaceLength_FieldHandleType; // 0x118
		::System::Boolean ESPP_worldSpaceLength_UseIt; // 0x11C
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_worldSpaceLength; // 0x120
		::System::Boolean ESPP_worldSpaceLength_EnableFade; // 0x128
		::System::Boolean ESPP_worldSpaceLength_EnableOverrideDefaultValue; // 0x129
		::System::Byte _padding9[0x2];
		::System::Single ESPP_worldSpaceLength_OverrideDefaultValue; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCONTACTSHADOW_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
