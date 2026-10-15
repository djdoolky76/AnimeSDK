#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace RPG::Client::ActivityAlley { class ClientAlleyPlacingShip; }

#define PHJOLLEAHIJ_BFPGOJLHFNL_OFFSET UNITYSDK_OFFSET(0xC252F60)
#define PHJOLLEAHIJ_CEOGIAPOHKP_OFFSET UNITYSDK_OFFSET(0xC2514B0)
#define PHJOLLEAHIJ_DPCNJNKHHHM_OFFSET UNITYSDK_OFFSET(0xC252E40)
#define PHJOLLEAHIJ_HLBKLCMEFFP_OFFSET UNITYSDK_OFFSET(0xC2523F0)

	class PHJOLLEAHIJ : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityAlley::ClientAlleyPlacingShip* CEOGIAPOHKP(::RPG::Client::ActivityAlley::AlleyPackShipData* a1)
		{
			return ((::RPG::Client::ActivityAlley::ClientAlleyPlacingShip*(*)(::RPG::Client::ActivityAlley::AlleyPackShipData*))((::PBYTE)hIl2Cpp + PHJOLLEAHIJ_CEOGIAPOHKP_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityAlley::AlleyPackGroupData* HLBKLCMEFFP(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + PHJOLLEAHIJ_HLBKLCMEFFP_OFFSET))(a1);
		}

		static ::System::Boolean DPCNJNKHHHM(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + PHJOLLEAHIJ_DPCNJNKHHHM_OFFSET))(a1, a2);
		}

		static ::System::Boolean BFPGOJLHFNL(::RPG::Client::ActivityAlley::AlleyPackGroupData* a1, ::RPG::Client::ActivityAlley::AlleyPackGroupData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGroupData*, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + PHJOLLEAHIJ_BFPGOJLHFNL_OFFSET))(a1, a2);
		}

	};
