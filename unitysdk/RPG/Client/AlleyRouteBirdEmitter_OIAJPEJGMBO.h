#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8DBE0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_GET_BIRDINTERVAL_OFFSET UNITYSDK_OFFSET(0x1BE8E4D0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_GET_BIRDSPEED_OFFSET UNITYSDK_OFFSET(0x1BE8E520)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_GET_SQUADSINTERVAL_OFFSET UNITYSDK_OFFSET(0x1BE8E480)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBirdEmitter_OIAJPEJGMBO_TypeDefinitionIndex = 63707;

	class AlleyRouteBirdEmitter_OIAJPEJGMBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_CTOR_OFFSET))(this);
		}

		::System::Single get_SquadsInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_GET_SQUADSINTERVAL_OFFSET))(this);
		}

		::System::Single get_BirdInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_GET_BIRDINTERVAL_OFFSET))(this);
		}

		::System::Single get_BirdSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OIAJPEJGMBO_GET_BIRDSPEED_OFFSET))(this);
		}

	};
}
