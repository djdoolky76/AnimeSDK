#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define JJENHHGEEFK_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x14A821C0)
#define JJENHHGEEFK_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x14A82400)
#define JJENHHGEEFK_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x14A822F0)
#define JJENHHGEEFK_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x14A82260)
#define JJENHHGEEFK_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x14A823B0)
#define JJENHHGEEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A823C0)

inline static constexpr unsigned int JJENHHGEEFK_TypeDefinitionIndex = 45674;

class JJENHHGEEFK
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJENHHGEEFK__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJENHHGEEFK_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJENHHGEEFK_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJENHHGEEFK_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + JJENHHGEEFK_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + JJENHHGEEFK_FCOPJKOKHDD_OFFSET))(this);
	}
};
