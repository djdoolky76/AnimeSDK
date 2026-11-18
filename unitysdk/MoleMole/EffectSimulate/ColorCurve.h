#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

class NapGradient;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_BNJAJBDLJHA_OFFSET UNITYSDK_OFFSET(0x1B4586E0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_EEKBEBDCPCL_OFFSET UNITYSDK_OFFSET(0x1B458770)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1B458390)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_FCMGIKPFDEG_OFFSET UNITYSDK_OFFSET(0x1B4585B0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_GECJPENLMDJ_OFFSET UNITYSDK_OFFSET(0x1B458840)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_INMGFPFLGDC_OFFSET UNITYSDK_OFFSET(0x1B458650)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_NAIMLHBOJIH_OFFSET UNITYSDK_OFFSET(0x1B458600)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_NDGBCAJAHPF_OFFSET UNITYSDK_OFFSET(0x1B458480)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B458550)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ColorCurve_TypeDefinitionIndex = 87327;

	class ColorCurve
	{
	public:
		::NapGradient* gradient; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color FCFOEJGPDNO(::System::Single HIIOCANBKAM, ::UnityEngine::Color GIGFCJMEFHK)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_FCFOEJGPDNO_OFFSET))(this, HIIOCANBKAM, GIGFCJMEFHK);
		}

		::UnityEngine::Color NDGBCAJAHPF(::UnityEngine::Color DGJPJAHELMN, ::UnityEngine::Color LFGOAJKIDOL, ::System::Single IMLLDOHDCNC)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_NDGBCAJAHPF_OFFSET))(this, DGJPJAHELMN, LFGOAJKIDOL, IMLLDOHDCNC);
		}

		::System::Void FCMGIKPFDEG(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_FCMGIKPFDEG_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void NAIMLHBOJIH(::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_NAIMLHBOJIH_OFFSET))(this, GEJCKFFFKCL);
		}

		::UnityEngine::AnimationCurve* INMGFPFLGDC(::System::Int32 GEJCKFFFKCL)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_INMGFPFLGDC_OFFSET))(this, GEJCKFFFKCL);
		}

		::System::Void BNJAJBDLJHA(::System::Int32 GEJCKFFFKCL, ::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_BNJAJBDLJHA_OFFSET))(this, GEJCKFFFKCL, GEGOALONGBI);
		}

		::NapGradient* EEKBEBDCPCL(::System::Int32 MEGPACNOBIK)
		{
			return ((::NapGradient*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_EEKBEBDCPCL_OFFSET))(this, MEGPACNOBIK);
		}

		::System::Boolean GECJPENLMDJ(::UnityEngine::Color EJCBEJMGFAJ, ::UnityEngine::Color EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_GECJPENLMDJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
