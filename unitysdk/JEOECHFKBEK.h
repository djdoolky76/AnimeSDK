#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class BFMLEHMAGAK_1;
template <typename T> class DBMAHDDGMHM_1;

#define JEOECHFKBEK_EDMEOAJKDKE_OFFSET UNITYSDK_OFFSET(0x14FAA890)
#define JEOECHFKBEK_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x14FAA8C0)
#define JEOECHFKBEK_HKNPPIIOIFO_OFFSET UNITYSDK_OFFSET(0x14FAA8A0)
#define JEOECHFKBEK_MJMCCLKHLIF_OFFSET UNITYSDK_OFFSET(0x14FAAD00)
#define JEOECHFKBEK_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x14FAA8B0)
#define JEOECHFKBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x14FAACC0)

inline static constexpr unsigned int JEOECHFKBEK_TypeDefinitionIndex = 69019;

class JEOECHFKBEK
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230
	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* HNHHPLKIIIM; // 0x238
	::DBMAHDDGMHM_1<::System::Single>* ODGPHENMCME; // 0x240

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOECHFKBEK__CTOR_OFFSET))(this);
	}

	::System::Boolean EDMEOAJKDKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOECHFKBEK_EDMEOAJKDKE_OFFSET))(this);
	}

	::System::Boolean HKNPPIIOIFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOECHFKBEK_HKNPPIIOIFO_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOECHFKBEK_NHLMHIHPNED_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOECHFKBEK_FDILCHDDCPB_OFFSET))(this);
	}

	::OLPPOJJADDO MJMCCLKHLIF()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOECHFKBEK_MJMCCLKHLIF_OFFSET))(this);
	}
};
