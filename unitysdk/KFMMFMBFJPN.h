#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define KFMMFMBFJPN_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x15B8AAB0)
#define KFMMFMBFJPN_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x15B8ACF0)
#define KFMMFMBFJPN_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x15B8ABE0)
#define KFMMFMBFJPN_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x15B8AB50)
#define KFMMFMBFJPN_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x15B8ACA0)
#define KFMMFMBFJPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8ACB0)

inline static constexpr unsigned int KFMMFMBFJPN_TypeDefinitionIndex = 82437;

class KFMMFMBFJPN
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMFMBFJPN__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMFMBFJPN_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMFMBFJPN_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMFMBFJPN_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMFMBFJPN_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMFMBFJPN_FCOPJKOKHDD_OFFSET))(this);
	}
};
