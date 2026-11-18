#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define EFEEOLKFJBL_ADCAOECGMFG_OFFSET UNITYSDK_OFFSET(0x154A4600)
#define EFEEOLKFJBL_CGODADAGKHK_OFFSET UNITYSDK_OFFSET(0x154A44F0)
#define EFEEOLKFJBL__CTOR_OFFSET UNITYSDK_OFFSET(0x154A44E0)

inline static constexpr unsigned int EFEEOLKFJBL_TypeDefinitionIndex = 49302;

class EFEEOLKFJBL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEEOLKFJBL__CTOR_OFFSET))(this);
	}

	static ::System::Single CGODADAGKHK(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + EFEEOLKFJBL_CGODADAGKHK_OFFSET))(FAJHPKBELMF, FNIOPKPHDEH);
	}

	static ::System::Single ADCAOECGMFG(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single EGEGIMGMJHN, ::System::Single KILPCOMOCMD, ::System::Single BBCODANAFGI, ::System::Single NKLACMBEPCO)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EFEEOLKFJBL_ADCAOECGMFG_OFFSET))(FAJHPKBELMF, EGEGIMGMJHN, KILPCOMOCMD, BBCODANAFGI, NKLACMBEPCO);
	}
};
