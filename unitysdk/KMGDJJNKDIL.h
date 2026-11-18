#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define KMGDJJNKDIL_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x1634C0D0)
#define KMGDJJNKDIL_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x1634C310)
#define KMGDJJNKDIL_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x1634C200)
#define KMGDJJNKDIL_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x1634C170)
#define KMGDJJNKDIL_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x1634C2C0)
#define KMGDJJNKDIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1634C2D0)

inline static constexpr unsigned int KMGDJJNKDIL_TypeDefinitionIndex = 42106;

class KMGDJJNKDIL
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDJJNKDIL__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDJJNKDIL_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDJJNKDIL_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDJJNKDIL_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDJJNKDIL_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGDJJNKDIL_FCOPJKOKHDD_OFFSET))(this);
	}
};
