#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAODPHAPKOA;
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightSpotLightTrackGroup; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16CCA0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16CCE0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__GET_SPOTLIGHTIDS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E16CDC0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__GET_TRACKSPOTLIGHTCONFIGS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1E16CDA0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__UPDATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1E16CCF0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__UPDATE_B__1_1_OFFSET UNITYSDK_OFFSET(0x1E16CD00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightTrack___c_TypeDefinitionIndex = 66989;

	class GridFightSpotLightTrack___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11020);
		}

		static ::System::Func_2<::RPG::Client::GridFightSpotLightTrackGroup*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightConfig*>*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSpotLightTrackGroup*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightConfig*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11028);
		}

		static ::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11030);
		}

		static ::System::Func_2<::NAODPHAPKOA*, ::RPG::Client::GridFightSpotLightTrackGroup*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::NAODPHAPKOA*, ::RPG::Client::GridFightSpotLightTrackGroup*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11038);
		}

		static ::System::Func_2<::NAODPHAPKOA*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::NAODPHAPKOA*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__1_0(::NAODPHAPKOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAODPHAPKOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__UPDATE_B__1_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSpotLightTrackGroup* _Update_b__1_1(::NAODPHAPKOA* a1)
		{
			return ((::RPG::Client::GridFightSpotLightTrackGroup*(*)(::PVOID, ::NAODPHAPKOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__UPDATE_B__1_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightConfig*>* _get_TrackSpotLightConfigs_b__17_0(::RPG::Client::GridFightSpotLightTrackGroup* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrackGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__GET_TRACKSPOTLIGHTCONFIGS_B__17_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_SpotLightIDs_b__23_0(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACK___C__GET_SPOTLIGHTIDS_B__23_0_OFFSET))(this, a1);
		}

	};
}
