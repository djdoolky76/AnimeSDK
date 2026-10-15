#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class JFKNHCMPADM;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYNormalItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYPhotoItem; }

#define PHPFNBDDNEK_DJNNNJOMLOE_OFFSET UNITYSDK_OFFSET(0xC259C20)
#define PHPFNBDDNEK_EBHFKHPCHBB_OFFSET UNITYSDK_OFFSET(0xC259A00)
#define PHPFNBDDNEK_LIEAIMNJANM_OFFSET UNITYSDK_OFFSET(0xC259B40)
#define PHPFNBDDNEK_MJEKKLGPIAC_OFFSET UNITYSDK_OFFSET(0xC259A70)

inline static constexpr unsigned int PHPFNBDDNEK_TypeDefinitionIndex = 68163;

	class PHPFNBDDNEK : public ::System::Object
	{
	public:
		static ::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem* EBHFKHPCHBB(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHPFNBDDNEK_EBHFKHPCHBB_OFFSET))(a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* MJEKKLGPIAC(::JFKNHCMPADM* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::JFKNHCMPADM*))((::PBYTE)hIl2Cpp + PHPFNBDDNEK_MJEKKLGPIAC_OFFSET))(a1);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* LIEAIMNJANM(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + PHPFNBDDNEK_LIEAIMNJANM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem* DJNNNJOMLOE(::CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD a1, ::System::UInt32 a2, ::RPG::GameCore::GenderType a3)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*(*)(::CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD, ::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + PHPFNBDDNEK_DJNNNJOMLOE_OFFSET))(a1, a2, a3);
		}

	};
