#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
class NAODPHAPKOA;
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDC84BD0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xDC8F810)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xDC8FEB0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_GET_SPOTLIGHTIDS_OFFSET UNITYSDK_OFFSET(0xDC83D20)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_GET_TRACKSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC8FEC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_TOPROTO_OFFSET UNITYSDK_OFFSET(0xDC86E00)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP__CREATECONFIGS_OFFSET UNITYSDK_OFFSET(0xDC8F8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightTrackGroup_TypeDefinitionIndex = 66986;

	class GridFightSpotLightTrackGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _TrackSpotLightConfigs_k__BackingField; // 0x10
		::DFNHMOGNJGJ _Source_k__BackingField; // 0x18
		::System::Void _ctor(::NAODPHAPKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAODPHAPKOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::DFNHMOGNJGJ a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DFNHMOGNJGJ, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_CTOR_1_OFFSET))(this, a1, a2);
		}

		::DFNHMOGNJGJ get_Source()
		{
			return ((::DFNHMOGNJGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_GET_SOURCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* get_TrackSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_GET_TRACKSPOTLIGHTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SpotLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_GET_SPOTLIGHTIDS_OFFSET))(this);
		}

		::NAODPHAPKOA* ToProto()
		{
			return ((::NAODPHAPKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP_TOPROTO_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _CreateConfigs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP__CREATECONFIGS_OFFSET))(a1);
		}

	};
}
