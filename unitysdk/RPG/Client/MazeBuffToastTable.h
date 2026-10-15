#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SingleMazeBuffToastConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MAZEBUFFTOASTTABLE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD5E0990)
#define RPG_CLIENT_MAZEBUFFTOASTTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xD5E0700)
#define RPG_CLIENT_MAZEBUFFTOASTTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xD5E08F0)

namespace RPG::Client
{
	class MazeBuffToastTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SingleMazeBuffToastConfig*>** StaticGet__MazeBuffToastLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SingleMazeBuffToastConfig*>**)UnitySDK::FromName("RPG.Client", "MazeBuffToastTable")->GetStaticField(0x567D0);
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEBUFFTOASTTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnLoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEBUFFTOASTTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::SingleMazeBuffToastConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SingleMazeBuffToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEBUFFTOASTTABLE_GETCONFIG_OFFSET))(a1);
		}

	};
}
