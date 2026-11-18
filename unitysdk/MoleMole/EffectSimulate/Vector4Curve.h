#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_BJHHIHFEFBB_OFFSET UNITYSDK_OFFSET(0x142ECF70)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_BKJBGEEDEDC_OFFSET UNITYSDK_OFFSET(0x142ECBE0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_BNJAJBDLJHA_OFFSET UNITYSDK_OFFSET(0x142EC3D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_CBPAKHAGBJK_OFFSET UNITYSDK_OFFSET(0x142ECE70)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_DALOACFDJLP_OFFSET UNITYSDK_OFFSET(0x142ECEF0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_EHJKJJKOMHH_OFFSET UNITYSDK_OFFSET(0x142EBC80)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x142EB8D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_FCMGIKPFDEG_OFFSET UNITYSDK_OFFSET(0x142EC4F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_INFPPCNDBED_OFFSET UNITYSDK_OFFSET(0x142ECFB0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_INMGFPFLGDC_OFFSET UNITYSDK_OFFSET(0x142EC460)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_LFNDIAEMAGM_OFFSET UNITYSDK_OFFSET(0x142ECF30)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_NAIMLHBOJIH_OFFSET UNITYSDK_OFFSET(0x142EBE40)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_NDGBCAJAHPF_OFFSET UNITYSDK_OFFSET(0x142EBD70)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_OJMHCDPPLCK_OFFSET UNITYSDK_OFFSET(0x142ECE60)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x142EB7F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector4Curve_TypeDefinitionIndex = 69903;

	class Vector4Curve
	{
	public:
		::System::Boolean sameOnVec; // 0x90
		::System::Boolean xUseCurve; // 0x91
		::System::Byte _padding0[0x6];
		::UnityEngine::AnimationCurve* xCurve; // 0x98
		::System::Boolean yUseCurve; // 0xA0
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* yCurve; // 0xA8
		::System::Boolean zUseCurve; // 0xB0
		::System::Byte _padding2[0x7];
		::UnityEngine::AnimationCurve* zCurve; // 0xB8
		::System::Boolean wUseCurve; // 0xC0
		::System::Byte _padding3[0x7];
		::UnityEngine::AnimationCurve* wCurve; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 FCFOEJGPDNO(::System::Single HIIOCANBKAM, ::UnityEngine::Vector4 GIGFCJMEFHK)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_FCFOEJGPDNO_OFFSET))(this, HIIOCANBKAM, GIGFCJMEFHK);
		}

		::UnityEngine::Vector4 NDGBCAJAHPF(::UnityEngine::Vector4 DGJPJAHELMN, ::UnityEngine::Vector4 LFGOAJKIDOL, ::System::Single IMLLDOHDCNC)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_NDGBCAJAHPF_OFFSET))(this, DGJPJAHELMN, LFGOAJKIDOL, IMLLDOHDCNC);
		}

		::System::Void NAIMLHBOJIH(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_NAIMLHBOJIH_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void FCMGIKPFDEG(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_FCMGIKPFDEG_OFFSET))(this, GEJCKFFFKCL);
		}

		::UnityEngine::AnimationCurve* INMGFPFLGDC(::System::Int32 GEJCKFFFKCL)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_INMGFPFLGDC_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void BNJAJBDLJHA(::System::Int32 GEJCKFFFKCL, ::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_BNJAJBDLJHA_OFFSET))(this, GEJCKFFFKCL, GEGOALONGBI);
		}

		::System::Void BKJBGEEDEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_BKJBGEEDEDC_OFFSET))(this);
		}

		::System::Single EHJKJJKOMHH(::System::Single HIIOCANBKAM, ::System::Single EOFIHAHOJLH, ::System::Boolean DINIPECMCMA, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::UnityEngine::AnimationCurve* NGHGCDKEEOK, ::UnityEngine::AnimationCurve* LJGKLFKDHGL)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_EHJKJJKOMHH_OFFSET))(this, HIIOCANBKAM, EOFIHAHOJLH, DINIPECMCMA, FAJHPKBELMF, NGHGCDKEEOK, LJGKLFKDHGL);
		}

		::System::Void OJMHCDPPLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_OJMHCDPPLCK_OFFSET))(this);
		}

		::System::String* CBPAKHAGBJK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_CBPAKHAGBJK_OFFSET))(this);
		}

		::System::Void DALOACFDJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_DALOACFDJLP_OFFSET))(this);
		}

		::System::Void LFNDIAEMAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_LFNDIAEMAGM_OFFSET))(this);
		}

		::System::Void BJHHIHFEFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_BJHHIHFEFBB_OFFSET))(this);
		}

		::System::Void INFPPCNDBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR4CURVE_INFPPCNDBED_OFFSET))(this);
		}
	};
}
