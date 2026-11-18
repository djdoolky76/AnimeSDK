#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define MALOGCCEPHE_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x11F2B4F0)
#define MALOGCCEPHE_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x11F2B730)
#define MALOGCCEPHE_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x11F2B620)
#define MALOGCCEPHE_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x11F2B590)
#define MALOGCCEPHE_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x11F2B6E0)
#define MALOGCCEPHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2B6F0)

inline static constexpr unsigned int MALOGCCEPHE_TypeDefinitionIndex = 43983;

class MALOGCCEPHE
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOGCCEPHE__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOGCCEPHE_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOGCCEPHE_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOGCCEPHE_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOGCCEPHE_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOGCCEPHE_FCOPJKOKHDD_OFFSET))(this);
	}
};
