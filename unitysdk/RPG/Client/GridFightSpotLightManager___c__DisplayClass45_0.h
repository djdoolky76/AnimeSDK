#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGEIHMPCFKA;
namespace RPG::Client { class GridFightSpotLightTrack; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E160590)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_0___SYNCTRACKS_B__1_OFFSET UNITYSDK_OFFSET(0x1E16A920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass45_0_TypeDefinitionIndex = 66966;

	class GridFightSpotLightManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OGEIHMPCFKA*>* infos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTracks_b__1(::RPG::Client::GridFightSpotLightTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS45_0___SYNCTRACKS_B__1_OFFSET))(this, a1);
		}

	};
}
