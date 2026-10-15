#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"
class DKJDEDPEMPJ;
class OKEFHOAGJGH;
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlayerOutfitBaseRow; }
namespace RPG::GameCore { class PlayerOutfitDetailRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCPCFGHPHDM_AFOPFOOENDJ_OFFSET UNITYSDK_OFFSET(0xBB1DA00)
#define NCPCFGHPHDM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB1CFC0)
#define NCPCFGHPHDM_DAPHFFEGBGB_OFFSET UNITYSDK_OFFSET(0xBB1D610)
#define NCPCFGHPHDM_DBBLBFFPENN_OFFSET UNITYSDK_OFFSET(0xBB1D260)
#define NCPCFGHPHDM_KNLEEEGBCCC_OFFSET UNITYSDK_OFFSET(0xBB1D060)

	class NCPCFGHPHDM : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarOutfitUnit* BPLPBPMEODA(::RPG::GameCore::PlayerOutfitBaseRow* a1, ::RPG::Client::AvatarOutfitSlot* a2)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::RPG::GameCore::PlayerOutfitBaseRow*, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + NCPCFGHPHDM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::DKJDEDPEMPJ*>* DBBLBFFPENN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::DKJDEDPEMPJ*>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NCPCFGHPHDM_DBBLBFFPENN_OFFSET))(a1, a2);
		}

		static ::DKJDEDPEMPJ* DAPHFFEGBGB(::RPG::GameCore::PlayerOutfitDetailRow* a1, ::RPG::Client::ItemData* a2, ::OKEFHOAGJGH* a3)
		{
			return ((::DKJDEDPEMPJ*(*)(::RPG::GameCore::PlayerOutfitDetailRow*, ::RPG::Client::ItemData*, ::OKEFHOAGJGH*))((::PBYTE)hIl2Cpp + NCPCFGHPHDM_DAPHFFEGBGB_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::DKJDEDPEMPJ*>* KNLEEEGBCCC(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::DKJDEDPEMPJ*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NCPCFGHPHDM_KNLEEEGBCCC_OFFSET))(a1);
		}

		static ::DKJDEDPEMPJ* AFOPFOOENDJ(::System::UInt32 a1, ::RPG::GameCore::TargetGenderType a2)
		{
			return ((::DKJDEDPEMPJ*(*)(::System::UInt32, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + NCPCFGHPHDM_AFOPFOOENDJ_OFFSET))(a1, a2);
		}

	};
