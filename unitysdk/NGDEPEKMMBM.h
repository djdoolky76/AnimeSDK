#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define NGDEPEKMMBM_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x137563E0)
#define NGDEPEKMMBM_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x13756620)
#define NGDEPEKMMBM_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x13756510)
#define NGDEPEKMMBM_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x13756480)
#define NGDEPEKMMBM_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x137565D0)
#define NGDEPEKMMBM__CTOR_OFFSET UNITYSDK_OFFSET(0x137565E0)

inline static constexpr unsigned int NGDEPEKMMBM_TypeDefinitionIndex = 57709;

class NGDEPEKMMBM
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDEPEKMMBM__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDEPEKMMBM_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDEPEKMMBM_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDEPEKMMBM_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDEPEKMMBM_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDEPEKMMBM_FCOPJKOKHDD_OFFSET))(this);
	}
};
