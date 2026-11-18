#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/OLPPOJJADDO.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class BFMLEHMAGAK_1;
template <typename T> class DBMAHDDGMHM_1;

#define OMDLDLJDPGD_EDMEOAJKDKE_OFFSET UNITYSDK_OFFSET(0x14F8C420)
#define OMDLDLJDPGD_FDILCHDDCPB_OFFSET UNITYSDK_OFFSET(0x14F8C450)
#define OMDLDLJDPGD_HKNPPIIOIFO_OFFSET UNITYSDK_OFFSET(0x14F8C430)
#define OMDLDLJDPGD_MJMCCLKHLIF_OFFSET UNITYSDK_OFFSET(0x14F8C750)
#define OMDLDLJDPGD_NHLMHIHPNED_OFFSET UNITYSDK_OFFSET(0x14F8C440)
#define OMDLDLJDPGD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8C710)

inline static constexpr unsigned int OMDLDLJDPGD_TypeDefinitionIndex = 83866;

class OMDLDLJDPGD
{
public:
	::BFMLEHMAGAK_1<::OLPPOJJADDO>* ELEMEAGFJIF; // 0x230
	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* HNHHPLKIIIM; // 0x238
	::DBMAHDDGMHM_1<::System::Single>* ODGPHENMCME; // 0x240

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDLDLJDPGD__CTOR_OFFSET))(this);
	}

	::System::Boolean EDMEOAJKDKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDLDLJDPGD_EDMEOAJKDKE_OFFSET))(this);
	}

	::System::Boolean HKNPPIIOIFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDLDLJDPGD_HKNPPIIOIFO_OFFSET))(this);
	}

	::ICEBNIECGBK NHLMHIHPNED()
	{
		return ((::ICEBNIECGBK(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDLDLJDPGD_NHLMHIHPNED_OFFSET))(this);
	}

	::BFMLEHMAGAK_1<::OLPPOJJADDO>* FDILCHDDCPB()
	{
		return ((::BFMLEHMAGAK_1<::OLPPOJJADDO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDLDLJDPGD_FDILCHDDCPB_OFFSET))(this);
	}

	::OLPPOJJADDO MJMCCLKHLIF()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDLDLJDPGD_MJMCCLKHLIF_OFFSET))(this);
	}
};
