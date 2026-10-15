#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BCMOLHGOPEK;
class EHLMPJIELJF;
class JNJPJOPEDHP;
class PLEODCMINJF;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::Client::NavMap::FiveDim { class SurfaceConnectIcon_SurfaceConnectTarget; }

#define BCMOLHGOPEK_AAEKOAMHBPP_OFFSET UNITYSDK_OFFSET(0x162D7E10)
#define BCMOLHGOPEK_AGGPNLACJFM_OFFSET UNITYSDK_OFFSET(0x162D8D40)
#define BCMOLHGOPEK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x162D7E90)
#define BCMOLHGOPEK_CCBMKEMOANA_OFFSET UNITYSDK_OFFSET(0x162D7D90)
#define BCMOLHGOPEK_CHBDNKMADFL_OFFSET UNITYSDK_OFFSET(0x162D7910)
#define BCMOLHGOPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x162D7EF0)
#define BCMOLHGOPEK_DPENHEIDONJ_OFFSET UNITYSDK_OFFSET(0x162D89B0)
#define BCMOLHGOPEK_FPMOEHJELID_OFFSET UNITYSDK_OFFSET(0x162D7D40)
#define BCMOLHGOPEK_HKMJOOJHAFE_OFFSET UNITYSDK_OFFSET(0x162D79C0)
#define BCMOLHGOPEK_IBCJAJGDHMI_OFFSET UNITYSDK_OFFSET(0x162D8770)
#define BCMOLHGOPEK_INNFIOKFHOG_OFFSET UNITYSDK_OFFSET(0x162D86F0)
#define BCMOLHGOPEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x162D7F00)
#define BCMOLHGOPEK_OKBIBFFCMCA_OFFSET UNITYSDK_OFFSET(0x162D85C0)
#define BCMOLHGOPEK_PCHGGBNJBNK_OFFSET UNITYSDK_OFFSET(0x162D8540)
#define BCMOLHGOPEK_PFDMFNEKDLI_OFFSET UNITYSDK_OFFSET(0x162D8B20)
#define BCMOLHGOPEK_PPAFKECMFMK_OFFSET UNITYSDK_OFFSET(0x162D87B0)

inline static constexpr unsigned int BCMOLHGOPEK_TypeDefinitionIndex = 74677;

	class BCMOLHGOPEK : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::FiveDim::Face* AKFIOMCJJKC; // 0x10
		::JNJPJOPEDHP* MMFHLMOPIHG; // 0x18
		::System::Void _ctor(::JNJPJOPEDHP* a1, ::RPG::Client::NavMap::FiveDim::Face* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JNJPJOPEDHP*, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CHBDNKMADFL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_CHBDNKMADFL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HKMJOOJHAFE(::EHLMPJIELJF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::EHLMPJIELJF*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_HKMJOOJHAFE_OFFSET))(this, a1);
		}

		static ::BCMOLHGOPEK* BPLPBPMEODA(::JNJPJOPEDHP* a1, ::RPG::Client::NavMap::FiveDim::Face* a2)
		{
			return ((::BCMOLHGOPEK*(*)(::JNJPJOPEDHP*, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PPAFKECMFMK(::EHLMPJIELJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_PPAFKECMFMK_OFFSET))(this, a1);
		}

		::System::Void DPENHEIDONJ(::EHLMPJIELJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_DPENHEIDONJ_OFFSET))(this, a1);
		}

		::System::Void PFDMFNEKDLI(::EHLMPJIELJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHLMPJIELJF*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_PFDMFNEKDLI_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget* AGGPNLACJFM(::EHLMPJIELJF* a1)
		{
			return ((::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget*(*)(::PVOID, ::EHLMPJIELJF*))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_AGGPNLACJFM_OFFSET))(this, a1);
		}

		::System::UInt32 OKBIBFFCMCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_OKBIBFFCMCA_OFFSET))(this);
		}

		::System::UInt32 CCBMKEMOANA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_CCBMKEMOANA_OFFSET))(this);
		}

		::System::UInt32 AAEKOAMHBPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_AAEKOAMHBPP_OFFSET))(this);
		}

		::PLEODCMINJF* PCHGGBNJBNK()
		{
			return ((::PLEODCMINJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_PCHGGBNJBNK_OFFSET))(this);
		}

		::RPG::Client::NavMap::MapData* FPMOEHJELID()
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_FPMOEHJELID_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* INNFIOKFHOG()
		{
			return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_INNFIOKFHOG_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* IBCJAJGDHMI()
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOLHGOPEK_IBCJAJGDHMI_OFFSET))(this);
		}

	};
