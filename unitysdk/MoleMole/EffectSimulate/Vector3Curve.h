#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_BJHHIHFEFBB_OFFSET UNITYSDK_OFFSET(0x19B67660)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_BKJBGEEDEDC_OFFSET UNITYSDK_OFFSET(0x19B67350)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_BNJAJBDLJHA_OFFSET UNITYSDK_OFFSET(0x19B66BF0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_CBPAKHAGBJK_OFFSET UNITYSDK_OFFSET(0x19B675E0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_DALOACFDJLP_OFFSET UNITYSDK_OFFSET(0x19B67560)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_EHJKJJKOMHH_OFFSET UNITYSDK_OFFSET(0x19B664F0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x19B66200)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_FCMGIKPFDEG_OFFSET UNITYSDK_OFFSET(0x19B66CE0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_INFPPCNDBED_OFFSET UNITYSDK_OFFSET(0x19B675A0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_INMGFPFLGDC_OFFSET UNITYSDK_OFFSET(0x19B66C70)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_NAIMLHBOJIH_OFFSET UNITYSDK_OFFSET(0x19B666E0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_NDGBCAJAHPF_OFFSET UNITYSDK_OFFSET(0x19B665E0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_OJMHCDPPLCK_OFFSET UNITYSDK_OFFSET(0x19B67550)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B66140)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector3Curve_TypeDefinitionIndex = 43033;

	class Vector3Curve
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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 FCFOEJGPDNO(::System::Single HIIOCANBKAM, ::UnityEngine::Vector3 GEJJCNHLNDA)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_FCFOEJGPDNO_OFFSET))(this, HIIOCANBKAM, GEJJCNHLNDA);
		}

		::UnityEngine::Vector3 NDGBCAJAHPF(::UnityEngine::Vector3 DGJPJAHELMN, ::UnityEngine::Vector3 LFGOAJKIDOL, ::System::Single IMLLDOHDCNC)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_NDGBCAJAHPF_OFFSET))(this, DGJPJAHELMN, LFGOAJKIDOL, IMLLDOHDCNC);
		}

		::System::Void NAIMLHBOJIH(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_NAIMLHBOJIH_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void FCMGIKPFDEG(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_FCMGIKPFDEG_OFFSET))(this, GEJCKFFFKCL);
		}

		::UnityEngine::AnimationCurve* INMGFPFLGDC(::System::Int32 GEJCKFFFKCL)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_INMGFPFLGDC_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void BNJAJBDLJHA(::System::Int32 GEJCKFFFKCL, ::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_BNJAJBDLJHA_OFFSET))(this, GEJCKFFFKCL, GEGOALONGBI);
		}

		::System::Void BKJBGEEDEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_BKJBGEEDEDC_OFFSET))(this);
		}

		::System::Void OJMHCDPPLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_OJMHCDPPLCK_OFFSET))(this);
		}

		::System::Single EHJKJJKOMHH(::System::Single HIIOCANBKAM, ::System::Single EOFIHAHOJLH, ::System::Boolean DINIPECMCMA, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::UnityEngine::AnimationCurve* NGHGCDKEEOK, ::UnityEngine::AnimationCurve* LJGKLFKDHGL)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_EHJKJJKOMHH_OFFSET))(this, HIIOCANBKAM, EOFIHAHOJLH, DINIPECMCMA, FAJHPKBELMF, NGHGCDKEEOK, LJGKLFKDHGL);
		}

		::System::Void DALOACFDJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_DALOACFDJLP_OFFSET))(this);
		}

		::System::Void INFPPCNDBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_INFPPCNDBED_OFFSET))(this);
		}

		::System::String* CBPAKHAGBJK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_CBPAKHAGBJK_OFFSET))(this);
		}

		::System::Void BJHHIHFEFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_BJHHIHFEFBB_OFFSET))(this);
		}
	};
}
