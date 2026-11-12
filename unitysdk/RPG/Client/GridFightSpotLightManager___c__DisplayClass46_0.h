#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightTrack; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC833C0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS46_0__GETTRACK_B__0_OFFSET UNITYSDK_OFFSET(0xDC8D4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass46_0_TypeDefinitionIndex = 66969;

	class GridFightSpotLightManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTrack_b__0(::RPG::Client::GridFightSpotLightTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS46_0__GETTRACK_B__0_OFFSET))(this, a1);
		}

	};
}
