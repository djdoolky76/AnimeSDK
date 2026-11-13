#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E161A80)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKHIT_GET_ANY_OFFSET UNITYSDK_OFFSET(0x1E16D4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightTrackHit_TypeDefinitionIndex = 66981;

	class GridFightSpotLightTrackHit : public ::System::Object
	{
	public:
		::System::Boolean IsRecommend; // 0x10
		::System::Boolean IsGuide; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKHIT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Any()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKHIT_GET_ANY_OFFSET))(this);
		}

	};
}
