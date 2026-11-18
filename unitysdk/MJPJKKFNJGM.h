#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define MJPJKKFNJGM_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x1216B300)
#define MJPJKKFNJGM_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x1216B540)
#define MJPJKKFNJGM_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x1216B430)
#define MJPJKKFNJGM_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x1216B3A0)
#define MJPJKKFNJGM_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x1216B4F0)
#define MJPJKKFNJGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1216B500)

inline static constexpr unsigned int MJPJKKFNJGM_TypeDefinitionIndex = 82368;

class MJPJKKFNJGM
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPJKKFNJGM__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPJKKFNJGM_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPJKKFNJGM_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPJKKFNJGM_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPJKKFNJGM_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPJKKFNJGM_FCOPJKOKHDD_OFFSET))(this);
	}
};
