#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define PELOGHAIPPK_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x1AFD7CF0)
#define PELOGHAIPPK_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x1AFD7F30)
#define PELOGHAIPPK_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x1AFD7E20)
#define PELOGHAIPPK_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x1AFD7D90)
#define PELOGHAIPPK_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x1AFD7EE0)
#define PELOGHAIPPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7EF0)

inline static constexpr unsigned int PELOGHAIPPK_TypeDefinitionIndex = 89388;

class PELOGHAIPPK
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELOGHAIPPK__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PELOGHAIPPK_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELOGHAIPPK_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELOGHAIPPK_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + PELOGHAIPPK_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + PELOGHAIPPK_FCOPJKOKHDD_OFFSET))(this);
	}
};
