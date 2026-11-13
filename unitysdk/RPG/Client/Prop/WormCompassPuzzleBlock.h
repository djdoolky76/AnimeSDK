#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0x1871C0E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1871C250)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1871C1D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0x1871BBA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBlock_TypeDefinitionIndex = 81697;

	class WormCompassPuzzleBlock : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_CTOR_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void CPNEMOBKHEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_CPNEMOBKHEL_OFFSET))(this);
		}

	};
}
