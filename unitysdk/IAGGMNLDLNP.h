#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

#define IAGGMNLDLNP_CPLOHPKNEBL_OFFSET UNITYSDK_OFFSET(0x15E0D380)
#define IAGGMNLDLNP_HLJLIKCANNP_OFFSET UNITYSDK_OFFSET(0x15E0D330)
#define IAGGMNLDLNP_MONHKOOAPNJ_OFFSET UNITYSDK_OFFSET(0x15E0D3D0)

	class IAGGMNLDLNP : public ::System::Object
	{
	public:
		static ::RPG::GameCore::ChallengeGroupType HLJLIKCANNP(::RPG::GameCore::BadgePlayType a1)
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::RPG::GameCore::BadgePlayType))((::PBYTE)hIl2Cpp + IAGGMNLDLNP_HLJLIKCANNP_OFFSET))(a1);
		}

		static ::RPG::GameCore::BadgePlayType CPLOHPKNEBL(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::GameCore::BadgePlayType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + IAGGMNLDLNP_CPLOHPKNEBL_OFFSET))(a1);
		}

		static ::RPG::GameCore::BadgeLevel MONHKOOAPNJ(::RPG::Client::ChallengePeakRank a1)
		{
			return ((::RPG::GameCore::BadgeLevel(*)(::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + IAGGMNLDLNP_MONHKOOAPNJ_OFFSET))(a1);
		}

	};
