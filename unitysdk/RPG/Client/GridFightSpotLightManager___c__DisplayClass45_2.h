#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGEIHMPCFKA;
namespace RPG::Client { class GridFightSpotLightTrack; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_2_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1605A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_2___SYNCTRACKS_B__4_OFFSET UNITYSDK_OFFSET(0x1E16AA10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass45_2_TypeDefinitionIndex = 66968;

	template <typename T1, typename T2>
	class GridFightSpotLightManager___c__DisplayClass45_2 : public ::System::Object
	{
	public:
		::OGEIHMPCFKA* info; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_2_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTracks_b__4(::RPG::Client::GridFightSpotLightTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_2___SYNCTRACKS_B__4_OFFSET))(this, a1);
		}

	};
}
