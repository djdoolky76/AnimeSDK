#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightTrackGroup; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC8F490)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__DISPLAYCLASS30_0__GETGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xDC8F8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightTrack___c__DisplayClass30_0_TypeDefinitionIndex = 66990;

	class GridFightSpotLightTrack___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::DFNHMOGNJGJ source; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGroup_b__0(::RPG::Client::GridFightSpotLightTrackGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrackGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__DISPLAYCLASS30_0__GETGROUP_B__0_OFFSET))(this, a1);
		}

	};
}
