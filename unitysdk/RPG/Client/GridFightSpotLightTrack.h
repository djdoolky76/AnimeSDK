#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/RPG/Client/GridFightSpotLightTrackRoleState.h"
#include "unitysdk/System/Object.h"
class OGEIHMPCFKA;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightSpotLightTrackGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xDC83050)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GETGROUP_OFFSET UNITYSDK_OFFSET(0xDC83C40)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0xDC8F120)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_GUIDESPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC8F340)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ISOBTAINED_OFFSET UNITYSDK_OFFSET(0xDC8F020)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDC8F470)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_RECOMMENDSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC8F2A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xDC8F100)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ROLESTATE_OFFSET UNITYSDK_OFFSET(0xDC8EE70)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xDC8F0A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xDC8F3E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_SPOTLIGHTIDS_OFFSET UNITYSDK_OFFSET(0xDC83770)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_TRACKSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC8F140)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_SET_GROUPS_OFFSET UNITYSDK_OFFSET(0xDC8F130)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDC8F480)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0xDC8F110)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_TOPROTO_OFFSET UNITYSDK_OFFSET(0xDC8F4A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC83060)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK__GETOBTAINEDROLE_OFFSET UNITYSDK_OFFSET(0xDC8EEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightTrack_TypeDefinitionIndex = 66988;

	class GridFightSpotLightTrack : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>* _Groups_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _DummyRole; // 0x18
		::System::UInt32 _Priority_k__BackingField; // 0x20
		::System::UInt32 _RoleID_k__BackingField; // 0x24
		::System::Void _ctor(::OGEIHMPCFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGEIHMPCFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::OGEIHMPCFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGEIHMPCFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightTrackRoleState get_RoleState()
		{
			return ((::RPG::Client::GridFightSpotLightTrackRoleState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ROLESTATE_OFFSET))(this);
		}

		::System::Boolean get_IsObtained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ISOBTAINED_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ROLE_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_SET_ROLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>* get_Groups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_GROUPS_OFFSET))(this);
		}

		::System::Void set_Groups(::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightTrackGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_SET_GROUPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* get_TrackSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_TRACKSPOTLIGHTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* get_RecommendSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_RECOMMENDSPOTLIGHTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* get_GuideSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_GUIDESPOTLIGHTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SpotLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_SPOTLIGHTIDS_OFFSET))(this);
		}

		::DFNHMOGNJGJ get_Source()
		{
			return ((::DFNHMOGNJGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_SOURCE_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_SET_PRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightTrackGroup* GetGroup(::DFNHMOGNJGJ a1)
		{
			return ((::RPG::Client::GridFightSpotLightTrackGroup*(*)(::PVOID, ::DFNHMOGNJGJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_GETGROUP_OFFSET))(this, a1);
		}

		::OGEIHMPCFKA* ToProto()
		{
			return ((::OGEIHMPCFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK_TOPROTO_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetObtainedRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK__GETOBTAINEDROLE_OFFSET))(this);
		}

	};
}
