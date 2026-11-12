#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightConfig; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDC81340)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDC81110)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDC810C0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0xDC810B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightCandidateItem_TypeDefinitionIndex = 66958;

	class GridFightSpotLightCandidateItem : public ::System::Object
	{
	public:
		::System::UInt32 _SpotLightID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_GET_SPOTLIGHTID_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::Client::GridFightSpotLightConfig* get_Config()
		{
			return ((::RPG::Client::GridFightSpotLightConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCANDIDATEITEM_GET_CONFIG_OFFSET))(this);
		}

	};
}
