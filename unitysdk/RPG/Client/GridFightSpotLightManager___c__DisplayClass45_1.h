#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGEIHMPCFKA;
namespace RPG::Client { class GridFightSpotLightTrack; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16A9D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_1___SYNCTRACKS_B__3_OFFSET UNITYSDK_OFFSET(0x1E16A9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass45_1_TypeDefinitionIndex = 66967;

	template <typename T>
	class GridFightSpotLightManager___c__DisplayClass45_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSpotLightTrack* track; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTracks_b__3(::OGEIHMPCFKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGEIHMPCFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_1___SYNCTRACKS_B__3_OFFSET))(this, a1);
		}

	};
}
