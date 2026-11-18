#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define FNGNFGGLLLP_AFBMFFOIEEO_OFFSET UNITYSDK_OFFSET(0x179B77E0)
#define FNGNFGGLLLP_DLAOIJFKAMM_OFFSET UNITYSDK_OFFSET(0x179B7570)
#define FNGNFGGLLLP_EICBMPGOMJB_OFFSET UNITYSDK_OFFSET(0x179B7720)

inline static constexpr unsigned int FNGNFGGLLLP_TypeDefinitionIndex = 63766;

class FNGNFGGLLLP : public ::System::Object
{
public:
	static ::System::Single DLAOIJFKAMM(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single EGEGIMGMJHN, ::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII, ::System::Int32 KKIAHJODOIA)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FNGNFGGLLLP_DLAOIJFKAMM_OFFSET))(FAJHPKBELMF, EGEGIMGMJHN, GIAEPMKCBIB, DOBFFIICAII, KKIAHJODOIA);
	}

	static ::System::Single EICBMPGOMJB(::System::Single JLGBFMDKFHE, ::System::Single MPLDDNMCECG)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNGNFGGLLLP_EICBMPGOMJB_OFFSET))(JLGBFMDKFHE, MPLDDNMCECG);
	}

	static ::System::Single AFBMFFOIEEO(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single KGHNBNOMMJI)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + FNGNFGGLLLP_AFBMFFOIEEO_OFFSET))(FAJHPKBELMF, KGHNBNOMMJI);
	}
};
