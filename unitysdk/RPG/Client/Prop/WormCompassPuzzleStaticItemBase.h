#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleItemBase.h"

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xE847620)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xE8472D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleStaticItemBase_TypeDefinitionIndex = 81708;

	class WormCompassPuzzleStaticItemBase : public ::RPG::Client::Prop::WormCompassPuzzleItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_CTOR_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLESTATICITEMBASE_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

	};
}
