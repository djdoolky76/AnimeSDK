#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define KPKKEBPIPGK_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x1A2E1520)
#define KPKKEBPIPGK_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x1A2E19A0)
#define KPKKEBPIPGK_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x1A2E1650)
#define KPKKEBPIPGK_HKNPPIIOIFO_OFFSET UNITYSDK_OFFSET(0x1A2E1720)
#define KPKKEBPIPGK_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x1A2E15C0)
#define KPKKEBPIPGK_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x1A2E1710)
#define KPKKEBPIPGK_PBDGKNAPGIB_OFFSET UNITYSDK_OFFSET(0x1A2E1AA0)
#define KPKKEBPIPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E1960)

inline static constexpr unsigned int KPKKEBPIPGK_TypeDefinitionIndex = 84830;

class KPKKEBPIPGK
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_NHLMHIHPNED_OFFSET))(this);
	}

	::System::Boolean HKNPPIIOIFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_HKNPPIIOIFO_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_FCOPJKOKHDD_OFFSET))(this);
	}

	::System::Boolean PBDGKNAPGIB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKKEBPIPGK_PBDGKNAPGIB_OFFSET))(this);
	}
};
