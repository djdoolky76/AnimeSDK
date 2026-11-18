#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_BKJBGEEDEDC_OFFSET UNITYSDK_OFFSET(0x12B2E1C0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_BNJAJBDLJHA_OFFSET UNITYSDK_OFFSET(0x12B2DB00)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_CBPAKHAGBJK_OFFSET UNITYSDK_OFFSET(0x12B2E3B0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_DALOACFDJLP_OFFSET UNITYSDK_OFFSET(0x12B2E370)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_EHJKJJKOMHH_OFFSET UNITYSDK_OFFSET(0x12B2D4A0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x12B2D2A0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_FCMGIKPFDEG_OFFSET UNITYSDK_OFFSET(0x12B2DBE0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_INFPPCNDBED_OFFSET UNITYSDK_OFFSET(0x12B2E330)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_INMGFPFLGDC_OFFSET UNITYSDK_OFFSET(0x12B2DB70)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_NAIMLHBOJIH_OFFSET UNITYSDK_OFFSET(0x12B2D650)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_NDGBCAJAHPF_OFFSET UNITYSDK_OFFSET(0x12B2D590)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_OJMHCDPPLCK_OFFSET UNITYSDK_OFFSET(0x12B2E430)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2D210)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector2Curve_TypeDefinitionIndex = 41891;

	class Vector2Curve
	{
	public:
		::System::Boolean sameOnVec; // 0x90
		::System::Boolean xUseCurve; // 0x91
		::System::Byte _padding0[0x6];
		::UnityEngine::AnimationCurve* xCurve; // 0x98
		::System::Boolean yUseCurve; // 0xA0
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* yCurve; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 FCFOEJGPDNO(::System::Single HIIOCANBKAM, ::UnityEngine::Vector2 GIGFCJMEFHK)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_FCFOEJGPDNO_OFFSET))(this, HIIOCANBKAM, GIGFCJMEFHK);
		}

		::UnityEngine::Vector2 NDGBCAJAHPF(::UnityEngine::Vector2 DGJPJAHELMN, ::UnityEngine::Vector2 LFGOAJKIDOL, ::System::Single IMLLDOHDCNC)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_NDGBCAJAHPF_OFFSET))(this, DGJPJAHELMN, LFGOAJKIDOL, IMLLDOHDCNC);
		}

		::System::Void NAIMLHBOJIH(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_NAIMLHBOJIH_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void FCMGIKPFDEG(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_FCMGIKPFDEG_OFFSET))(this, GEJCKFFFKCL);
		}

		::UnityEngine::AnimationCurve* INMGFPFLGDC(::System::Int32 GEJCKFFFKCL)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_INMGFPFLGDC_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void BNJAJBDLJHA(::System::Int32 GEJCKFFFKCL, ::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_BNJAJBDLJHA_OFFSET))(this, GEJCKFFFKCL, GEGOALONGBI);
		}

		::System::Void BKJBGEEDEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_BKJBGEEDEDC_OFFSET))(this);
		}

		::System::Void INFPPCNDBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_INFPPCNDBED_OFFSET))(this);
		}

		::System::Void DALOACFDJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_DALOACFDJLP_OFFSET))(this);
		}

		::System::String* CBPAKHAGBJK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_CBPAKHAGBJK_OFFSET))(this);
		}

		::System::Single EHJKJJKOMHH(::System::Single HIIOCANBKAM, ::System::Single EOFIHAHOJLH, ::System::Boolean DINIPECMCMA, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::UnityEngine::AnimationCurve* NGHGCDKEEOK, ::UnityEngine::AnimationCurve* LJGKLFKDHGL)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_EHJKJJKOMHH_OFFSET))(this, HIIOCANBKAM, EOFIHAHOJLH, DINIPECMCMA, FAJHPKBELMF, NGHGCDKEEOK, LJGKLFKDHGL);
		}

		::System::Void OJMHCDPPLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_OJMHCDPPLCK_OFFSET))(this);
		}
	};
}
