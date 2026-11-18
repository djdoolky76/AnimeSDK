#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define HLJNACKPCEG_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x12E67090)
#define HLJNACKPCEG_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x12E672D0)
#define HLJNACKPCEG_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x12E671C0)
#define HLJNACKPCEG_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x12E67130)
#define HLJNACKPCEG_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x12E67280)
#define HLJNACKPCEG__CTOR_OFFSET UNITYSDK_OFFSET(0x12E67290)

inline static constexpr unsigned int HLJNACKPCEG_TypeDefinitionIndex = 67281;

class HLJNACKPCEG
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNACKPCEG__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNACKPCEG_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNACKPCEG_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNACKPCEG_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNACKPCEG_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJNACKPCEG_FCOPJKOKHDD_OFFSET))(this);
	}
};
