#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightTrack; }
namespace RPG::Client { class GridFightSpotLightTrackGroup; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC86860)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0__SYNCGUIDETRACKS_B__0_OFFSET UNITYSDK_OFFSET(0xDC8D530)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0__SYNCGUIDETRACKS_B__3_OFFSET UNITYSDK_OFFSET(0xDC8D5D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0__SYNCGUIDETRACKS_B__4_OFFSET UNITYSDK_OFFSET(0xDC8D5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass55_0_TypeDefinitionIndex = 66972;

	class GridFightSpotLightManager___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::GridFightSpotLightTrackGroup*>* __9__4; // 0x10
		::System::Func_2<::RPG::Client::GridFightSpotLightTrackGroup*, ::System::Boolean>* __9__3; // 0x18
		::DFNHMOGNJGJ source; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncGuideTracks_b__0(::RPG::Client::GridFightSpotLightTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0__SYNCGUIDETRACKS_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _SyncGuideTracks_b__3(::RPG::Client::GridFightSpotLightTrackGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrackGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0__SYNCGUIDETRACKS_B__3_OFFSET))(this, a1);
		}

		::System::Boolean _SyncGuideTracks_b__4(::RPG::Client::GridFightSpotLightTrackGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrackGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS55_0__SYNCGUIDETRACKS_B__4_OFFSET))(this, a1);
		}

	};
}
