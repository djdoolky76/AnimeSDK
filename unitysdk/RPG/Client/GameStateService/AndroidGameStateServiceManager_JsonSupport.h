#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONData; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_ALLOCATEJSONDATA_OFFSET UNITYSDK_OFFSET(0x1C702360)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_CLEARJSONDATA_OFFSET UNITYSDK_OFFSET(0x1C703590)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_EXCHANGEJSONDATA_OFFSET UNITYSDK_OFFSET(0x1C703C30)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_INITJSONDATAPOOL_OFFSET UNITYSDK_OFFSET(0x1C703500)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_RECYCLEJSONDATA_OFFSET UNITYSDK_OFFSET(0x1C7022A0)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_JsonSupport_TypeDefinitionIndex = 77952;

	class AndroidGameStateServiceManager_JsonSupport : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::SimpleJSON::JSONData*>** StaticGet__stringJsonNodePool()
		{
			return (::System::Collections::Generic::Queue_1<::SimpleJSON::JSONData*>**)UnitySDK::FromName("RPG.Client.GameStateService", "JsonSupport")->GetStaticField(0x6F5D0);
		}

		static ::System::Void InitJsonDataPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_INITJSONDATAPOOL_OFFSET))();
		}

		static ::SimpleJSON::JSONData* AllocateJsonData()
		{
			return ((::SimpleJSON::JSONData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_ALLOCATEJSONDATA_OFFSET))();
		}

		static ::System::Void RecycleJsonData(::SimpleJSON::JSONData* a1)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_RECYCLEJSONDATA_OFFSET))(a1);
		}

		static ::System::Void ClearJsonData(::SimpleJSON::JSONClass* a1)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_CLEARJSONDATA_OFFSET))(a1);
		}

		static ::System::Void ExchangeJsonData(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_EXCHANGEJSONDATA_OFFSET))(a1, a2);
		}

	};
}
