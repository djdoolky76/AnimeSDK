#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityColorLookupEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1BA72990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1BA734E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1BA72810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA72D80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1BA72CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1BA72800)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1BA72630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1BA73C60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1BA73920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA73FA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorLookup_TypeDefinitionIndex = 77302;

	class ESPostProcessColorLookup
	{
	public:
		::MoleMole::Config::ConfigEntityColorLookupEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_texture; // 0xB8
		::System::Single _VolDefault_contribution; // 0xC0
		::System::Boolean _VolPreVal_texture_overrideState; // 0xC4
		::System::Byte _padding0[0x3];
		::UnityEngine::Texture* _VolPreVal_texture; // 0xC8
		::System::Boolean _VolPreVal_contribution_overrideState; // 0xD0
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_contribution; // 0xD4
		::System::Single _TimelineCurveFirstVal_contribution; // 0xD8
		::System::Single _TimelineCurveLastVal_contribution; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_texture_FieldHandleType; // 0xE0
		::System::Byte _padding2[0x4];
		::UnityEngine::Texture* ESPP_texture; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contribution_FieldHandleType; // 0xF0
		::System::Boolean ESPP_contribution_UseIt; // 0xF4
		::System::Byte _padding3[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contribution; // 0xF8
		::System::Boolean ESPP_contribution_EnableFade; // 0x100
		::System::Boolean ESPP_contribution_EnableOverrideDefaultValue; // 0x101
		::System::Byte _padding4[0x2];
		::System::Single ESPP_contribution_OverrideDefaultValue; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORLOOKUP_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
