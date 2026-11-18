#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityColorCurvesEffects; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1BA6F790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1BA71910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1BA6F520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA70090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1BA70080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1BA6F510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1BA6F3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1BA72450)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1BA72280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA72620)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorCurves_TypeDefinitionIndex = 42990;

	class ESPostProcessColorCurves
	{
	public:
		::MoleMole::Config::ConfigEntityColorCurvesEffects* m_stAsset; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_master; // 0xB8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_red; // 0xC0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_green; // 0xC8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_blue; // 0xD0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsHue; // 0xD8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_hueVsSat; // 0xE0
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_satVsSat; // 0xE8
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolDefault_lumVsSat; // 0xF0
		::System::Boolean _VolPreVal_master_overrideState; // 0xF8
		::System::Byte _padding0[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_master; // 0x100
		::System::Boolean _VolPreVal_red_overrideState; // 0x108
		::System::Byte _padding1[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_red; // 0x110
		::System::Boolean _VolPreVal_green_overrideState; // 0x118
		::System::Byte _padding2[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_green; // 0x120
		::System::Boolean _VolPreVal_blue_overrideState; // 0x128
		::System::Byte _padding3[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_blue; // 0x130
		::System::Boolean _VolPreVal_hueVsHue_overrideState; // 0x138
		::System::Byte _padding4[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsHue; // 0x140
		::System::Boolean _VolPreVal_hueVsSat_overrideState; // 0x148
		::System::Byte _padding5[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_hueVsSat; // 0x150
		::System::Boolean _VolPreVal_satVsSat_overrideState; // 0x158
		::System::Byte _padding6[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_satVsSat; // 0x160
		::System::Boolean _VolPreVal_lumVsSat_overrideState; // 0x168
		::System::Byte _padding7[0x7];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* _VolPreVal_lumVsSat; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_master_FieldHandleType; // 0x178
		::System::Byte _padding8[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_master; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_red_FieldHandleType; // 0x188
		::System::Byte _padding9[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_red; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_green_FieldHandleType; // 0x198
		::System::Byte _padding10[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_green; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blue_FieldHandleType; // 0x1A8
		::System::Byte _padding11[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_blue; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsHue_FieldHandleType; // 0x1B8
		::System::Byte _padding12[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsHue; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueVsSat_FieldHandleType; // 0x1C8
		::System::Byte _padding13[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_hueVsSat; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_satVsSat_FieldHandleType; // 0x1D8
		::System::Byte _padding14[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_satVsSat; // 0x1E0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lumVsSat_FieldHandleType; // 0x1E8
		::System::Byte _padding15[0x4];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ESPP_lumVsSat; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORCURVES_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
