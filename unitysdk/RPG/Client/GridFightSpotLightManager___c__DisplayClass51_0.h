#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightTrackGroup; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC84A20)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS51_0__TRACK_B__1_OFFSET UNITYSDK_OFFSET(0xDC8D4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass51_0_TypeDefinitionIndex = 66970;

	class GridFightSpotLightManager___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::DFNHMOGNJGJ source; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Track_b__1(::RPG::Client::GridFightSpotLightTrackGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrackGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS51_0__TRACK_B__1_OFFSET))(this, a1);
		}

	};
}
