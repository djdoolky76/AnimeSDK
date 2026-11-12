#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightTrackGroup; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC84FE0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS54_0__CANCELTRACK_B__0_OFFSET UNITYSDK_OFFSET(0xDC8D510)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass54_0_TypeDefinitionIndex = 66971;

	class GridFightSpotLightManager___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::DFNHMOGNJGJ source; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CancelTrack_b__0(::RPG::Client::GridFightSpotLightTrackGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrackGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS54_0__CANCELTRACK_B__0_OFFSET))(this, a1);
		}

	};
}
