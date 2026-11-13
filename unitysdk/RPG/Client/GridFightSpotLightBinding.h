#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightSpotLightConfig; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15E550)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ISLOSS_OFFSET UNITYSDK_OFFSET(0x1E15E5E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x1E15E5B0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x1E15E590)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ROLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1E15E5F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_SPOTLIGHTCONFIG_OFFSET UNITYSDK_OFFSET(0x1E15E5C0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0x1E15E5A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1E15E5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightBinding_TypeDefinitionIndex = 66982;

	class GridFightSpotLightBinding : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSpotLightConfig* _SpotLightConfig_k__BackingField; // 0x10
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x18
		::System::UInt32 _RoleUniqueID_k__BackingField; // 0x20
		::System::UInt32 _RoleID_k__BackingField; // 0x24
		::System::UInt32 _SpotLightID_k__BackingField; // 0x28
		::System::Boolean _IsLoss_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 _UniqueID_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleConfig* a3, ::RPG::Client::GridFightSpotLightConfig* a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleConfig*, ::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ROLEID_OFFSET))(this);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_SPOTLIGHTID_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ROLECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightSpotLightConfig* get_SpotLightConfig()
		{
			return ((::RPG::Client::GridFightSpotLightConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_SPOTLIGHTCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ISLOSS_OFFSET))(this);
		}

		::System::UInt32 get_RoleUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTBINDING_GET_ROLEUNIQUEID_OFFSET))(this);
		}

	};
}
