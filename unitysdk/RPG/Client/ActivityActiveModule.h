#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class IKCDOOFJDKO;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActiveActivityData; }
namespace RPG::Client { class ActivityActiveModule; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7792C0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1B777E40)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B777CE0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B778290)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B778370)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDACTIVITYDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1B777D60)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET UNITYSDK_OFFSET(0x1B7785F0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B7783C0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0x1B779070)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B779240)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B778730)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B778ED0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x1B7787B0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1B778F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule_TypeDefinitionIndex = 62765;

	class ActivityActiveModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityData*>* _ActiveActivityDataList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendActivityDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDACTIVITYDATAREQUEST_OFFSET))(this);
		}

		::System::Void SendTakeRewardRequest(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET))(this, a1);
		}

		::RPG::Client::ActiveActivityData* GetActiveActivityDataByActivityID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActiveActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET))(this, a1);
		}

		::System::Void _OnGetActiveActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActiveActivityDataList(::System::Collections::Generic::IEnumerable_1<::IKCDOOFJDKO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IKCDOOFJDKO*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET))(this, a1);
		}

		::System::Void _OnTakeActiveActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _NotifyActivityReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET))(this, a1);
		}

		::System::Void _OnActiveActivityDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActivityData(::IKCDOOFJDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityActiveModule* get_Instance()
		{
			return ((::RPG::Client::ActivityActiveModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET))();
		}

	};
}
