#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16D430)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16D470)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP___C__GET_SPOTLIGHTIDS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E16D480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightTrackGroup___c_TypeDefinitionIndex = 66987;

	class GridFightSpotLightTrackGroup___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x111E0);
		}

		static ::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x111E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_SpotLightIDs_b__9_0(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTRACKGROUP___C__GET_SPOTLIGHTIDS_B__9_0_OFFSET))(this, a1);
		}

	};
}
