#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace UnityEngine { class RectTransform; }
template <typename T> class BFMLEHMAGAK_1;

#define HKDBNPICAOK_CCKJJKMFJMH_OFFSET UNITYSDK_OFFSET(0x15B61D90)
#define HKDBNPICAOK_FCOPJKOKHDD_OFFSET UNITYSDK_OFFSET(0x15B61FD0)
#define HKDBNPICAOK_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x15B61EC0)
#define HKDBNPICAOK_KIAGBIJAKNP_OFFSET UNITYSDK_OFFSET(0x15B61E30)
#define HKDBNPICAOK_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x15B61F80)
#define HKDBNPICAOK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B61F90)

inline static constexpr unsigned int HKDBNPICAOK_TypeDefinitionIndex = 52931;

class HKDBNPICAOK
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDBNPICAOK__CTOR_OFFSET))(this);
	}

	::System::Boolean CCKJJKMFJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDBNPICAOK_CCKJJKMFJMH_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KIAGBIJAKNP()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDBNPICAOK_KIAGBIJAKNP_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDBNPICAOK_FDILCHDDCPB_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDBNPICAOK_NHLMHIHPNED_OFFSET))(this);
	}

	::OLPPOJJADDO FCOPJKOKHDD()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDBNPICAOK_FCOPJKOKHDD_OFFSET))(this);
	}
};
