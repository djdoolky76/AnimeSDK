#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GEDKNEFIADK.h"
namespace RPG::GameCore { class PetLineupPlacementConfig; }

#define MNHLCMPBNFH_AJEHIAFLLGB_OFFSET UNITYSDK_OFFSET(0xBA09950)
#define MNHLCMPBNFH_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xBA096B0)
#define MNHLCMPBNFH_NHEGBODLDFH_OFFSET UNITYSDK_OFFSET(0xBA09680)

	class MNHLCMPBNFH : public ::System::Object
	{
	public:
		static ::RPG::GameCore::PetLineupPlacementConfig* NHEGBODLDFH()
		{
			return ((::RPG::GameCore::PetLineupPlacementConfig*(*)())((::PBYTE)hIl2Cpp + MNHLCMPBNFH_NHEGBODLDFH_OFFSET))();
		}

		static ::GEDKNEFIADK KHJNHDOJDDP(::RPG::Client::Pet::PetLineupShape a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::GEDKNEFIADK(*)(::RPG::Client::Pet::PetLineupShape, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MNHLCMPBNFH_KHJNHDOJDDP_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 AJEHIAFLLGB(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNHLCMPBNFH_AJEHIAFLLGB_OFFSET))(a1);
		}

	};
