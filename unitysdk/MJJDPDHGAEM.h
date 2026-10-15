#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
class DHCNDENHLGO;

#define MJJDPDHGAEM_OFIMIEJMOGE_OFFSET UNITYSDK_OFFSET(0xB96DCD0)

inline static constexpr unsigned int MJJDPDHGAEM_TypeDefinitionIndex = 81570;

	class MJJDPDHGAEM : public ::System::Object
	{
	public:
		static ::RPG::GameCore::ChallengeGroupType OFIMIEJMOGE(::DHCNDENHLGO* a1)
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::DHCNDENHLGO*))((::PBYTE)hIl2Cpp + MJJDPDHGAEM_OFIMIEJMOGE_OFFSET))(a1);
		}

	};
