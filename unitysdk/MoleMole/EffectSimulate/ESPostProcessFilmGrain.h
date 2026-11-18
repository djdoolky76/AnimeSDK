#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Config { class ConfigEntityFilmGrains; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1CD2F280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1CD30720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1CD2F0B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1CD2F920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1CD2F7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1CD2F0A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1CD2EE60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1CD31230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1CD30DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD316B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFilmGrain_TypeDefinitionIndex = 64580;

	class ESPostProcessFilmGrain
	{
	public:
		::MoleMole::Config::ConfigEntityFilmGrains* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _DefaultType; // 0xB8
		::System::Single _DefaultIntensity; // 0xBC
		::System::Single _DefaultResponse; // 0xC0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _VolDefault_type; // 0xC4
		::System::Single _VolDefault_intensity; // 0xC8
		::System::Single _VolDefault_response; // 0xCC
		::UnityEngine::Texture* _VolDefault_texture; // 0xD0
		::System::Boolean _VolPreVal_type_overrideState; // 0xD8
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::FilmGrainLookup _VolPreVal_type; // 0xDC
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xE0
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_intensity; // 0xE4
		::System::Boolean _VolPreVal_response_overrideState; // 0xE8
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_response; // 0xEC
		::System::Boolean _VolPreVal_texture_overrideState; // 0xF0
		::System::Byte _padding3[0x7];
		::UnityEngine::Texture* _VolPreVal_texture; // 0xF8
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_response; // 0x108
		::System::Single _TimelineCurveLastVal_response; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_type_FieldHandleType; // 0x110
		::UnityEngine::Rendering::Universal::FilmGrainLookup ESPP_type; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x118
		::System::Boolean ESPP_intensity_UseIt; // 0x11C
		::System::Byte _padding4[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x120
		::System::Boolean ESPP_intensity_EnableFade; // 0x128
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x129
		::System::Byte _padding5[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_response_FieldHandleType; // 0x130
		::System::Boolean ESPP_response_UseIt; // 0x134
		::System::Byte _padding6[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_response; // 0x138
		::System::Boolean ESPP_response_EnableFade; // 0x140
		::System::Boolean ESPP_response_EnableOverrideDefaultValue; // 0x141
		::System::Byte _padding7[0x2];
		::System::Single ESPP_response_OverrideDefaultValue; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_texture_FieldHandleType; // 0x148
		::System::Byte _padding8[0x4];
		::UnityEngine::Texture* ESPP_texture; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
