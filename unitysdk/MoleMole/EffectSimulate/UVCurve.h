#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_BJHHIHFEFBB_OFFSET UNITYSDK_OFFSET(0x142EB600)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_BKJBGEEDEDC_OFFSET UNITYSDK_OFFSET(0x142EB340)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_BNJAJBDLJHA_OFFSET UNITYSDK_OFFSET(0x142EAB30)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_CBPAKHAGBJK_OFFSET UNITYSDK_OFFSET(0x142EB640)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_DALOACFDJLP_OFFSET UNITYSDK_OFFSET(0x142EB5C0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_EHJKJJKOMHH_OFFSET UNITYSDK_OFFSET(0x142EA3A0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x142E9FD0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_FCMGIKPFDEG_OFFSET UNITYSDK_OFFSET(0x142EAC50)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_INFPPCNDBED_OFFSET UNITYSDK_OFFSET(0x142EB6D0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_INMGFPFLGDC_OFFSET UNITYSDK_OFFSET(0x142EABC0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_LFNDIAEMAGM_OFFSET UNITYSDK_OFFSET(0x142EB720)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_NAIMLHBOJIH_OFFSET UNITYSDK_OFFSET(0x142EA5A0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_NDGBCAJAHPF_OFFSET UNITYSDK_OFFSET(0x142EA4D0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_OJMHCDPPLCK_OFFSET UNITYSDK_OFFSET(0x142EB710)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_PPJGJGNDHJL_OFFSET UNITYSDK_OFFSET(0x142EB760)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x142E9EF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int UVCurve_TypeDefinitionIndex = 89278;

	class UVCurve
	{
	public:
		// static const ::System::String* TILING_TITLE_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* TILING_XY_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* OFFSET_TITLE_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* OFFSET_XY_HOR_GROUP_NAME; // 0x0
		// static const ::System::Single FIRST_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single SECOND_LABEL_ITEM_WIDTH; // 0x0
		::System::Boolean tilingSameOnVec; // 0x90
		::System::Boolean xUseCurve; // 0x91
		::System::Byte _padding0[0x6];
		::UnityEngine::AnimationCurve* xCurve; // 0x98
		::System::Boolean yUseCurve; // 0xA0
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* yCurve; // 0xA8
		::System::Boolean offsetSameOnVec; // 0xB0
		::System::Boolean zUseCurve; // 0xB1
		::System::Byte _padding2[0x6];
		::UnityEngine::AnimationCurve* zCurve; // 0xB8
		::System::Boolean wUseCurve; // 0xC0
		::System::Byte _padding3[0x7];
		::UnityEngine::AnimationCurve* wCurve; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 FCFOEJGPDNO(::System::Single HIIOCANBKAM, ::UnityEngine::Vector4 GIGFCJMEFHK)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_FCFOEJGPDNO_OFFSET))(this, HIIOCANBKAM, GIGFCJMEFHK);
		}

		::UnityEngine::Vector4 NDGBCAJAHPF(::UnityEngine::Vector4 DGJPJAHELMN, ::UnityEngine::Vector4 LFGOAJKIDOL, ::System::Single IMLLDOHDCNC)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_NDGBCAJAHPF_OFFSET))(this, DGJPJAHELMN, LFGOAJKIDOL, IMLLDOHDCNC);
		}

		::System::Void NAIMLHBOJIH(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_NAIMLHBOJIH_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void FCMGIKPFDEG(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_FCMGIKPFDEG_OFFSET))(this, GEJCKFFFKCL);
		}

		::UnityEngine::AnimationCurve* INMGFPFLGDC(::System::Int32 GEJCKFFFKCL)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_INMGFPFLGDC_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void BNJAJBDLJHA(::System::Int32 GEJCKFFFKCL, ::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_BNJAJBDLJHA_OFFSET))(this, GEJCKFFFKCL, GEGOALONGBI);
		}

		::System::Void BKJBGEEDEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_BKJBGEEDEDC_OFFSET))(this);
		}

		::System::Void DALOACFDJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_DALOACFDJLP_OFFSET))(this);
		}

		::System::Void BJHHIHFEFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_BJHHIHFEFBB_OFFSET))(this);
		}

		::System::String* CBPAKHAGBJK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_CBPAKHAGBJK_OFFSET))(this);
		}

		::System::Void INFPPCNDBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_INFPPCNDBED_OFFSET))(this);
		}

		::System::Single EHJKJJKOMHH(::System::Single HIIOCANBKAM, ::System::Single EOFIHAHOJLH, ::System::Boolean DINIPECMCMA, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::UnityEngine::AnimationCurve* NGHGCDKEEOK, ::UnityEngine::AnimationCurve* LJGKLFKDHGL, ::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_EHJKJJKOMHH_OFFSET))(this, HIIOCANBKAM, EOFIHAHOJLH, DINIPECMCMA, FAJHPKBELMF, NGHGCDKEEOK, LJGKLFKDHGL, GEJCKFFFKCL);
		}

		::System::Void OJMHCDPPLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_OJMHCDPPLCK_OFFSET))(this);
		}

		::System::Void LFNDIAEMAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_LFNDIAEMAGM_OFFSET))(this);
		}

		::System::String* PPJGJGNDHJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_PPJGJGNDHJL_OFFSET))(this);
		}
	};
}
