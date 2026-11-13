#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::Client { class BrochureDiaryData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAVELBROCHUREMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5D280)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5CFF0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_DATAINITED_OFFSET UNITYSDK_OFFSET(0x1CE59AC0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETALLDIARYDATAS_OFFSET UNITYSDK_OFFSET(0x1CE5A2C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIARYDATA_OFFSET UNITYSDK_OFFSET(0x1CE5A500)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIRECTORYDIARYDATAS_OFFSET UNITYSDK_OFFSET(0x1CE59C90)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETPASTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE5A550)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GETUNLOCKEDDIARYDATAS_OFFSET UNITYSDK_OFFSET(0x1CE5A070)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_HASSEENBROCHURE_OFFSET UNITYSDK_OFFSET(0x1CE5CF40)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWIMAGEPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0x1CE598B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0x1CE59870)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERIDS_OFFSET UNITYSDK_OFFSET(0x1CE59850)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWTEXTPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0x1CE59890)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_GET_SEENBROCHUREINDEX_OFFSET UNITYSDK_OFFSET(0x1CE5CEF0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_ISENTRANCESHOW_OFFSET UNITYSDK_OFFSET(0x1CE59B00)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_RECORDBROCHURESEEN_OFFSET UNITYSDK_OFFSET(0x1CE5A5E0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SAFEINITREDDOT_OFFSET UNITYSDK_OFFSET(0x1CE58ED0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x1CE599E0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWIMAGEPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0x1CE598C0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0x1CE59880)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERIDS_OFFSET UNITYSDK_OFFSET(0x1CE59860)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWTEXTPASTERDIARYIDS_OFFSET UNITYSDK_OFFSET(0x1CE598A0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0x1CE598D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CE5CEA0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CE5A720)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ADDREDDOTNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CE59580)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CE5C8B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREDATASYNCED_OFFSET UNITYSDK_OFFSET(0x1CE59760)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERGOT_OFFSET UNITYSDK_OFFSET(0x1CE597B0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERSEEN_OFFSET UNITYSDK_OFFSET(0x1CE59800)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREAPPLYPASTERLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x1CE5C2D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1CE5ACC0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETPASTERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CE5C860)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGERESETSCRSP_OFFSET UNITYSDK_OFFSET(0x1CE5C4A0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGEUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CE5C780)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREREMOVEPASTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1CE5C400)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHURESELECTMESSAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1CE5C5D0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREUPDATEPASTERPOSSCRSP_OFFSET UNITYSDK_OFFSET(0x1CE5C450)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__REDDOTUNINIT_OFFSET UNITYSDK_OFFSET(0x1CE58E30)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__SAFECREATEDIARYDATA_OFFSET UNITYSDK_OFFSET(0x1CE59EE0)
#define RPG_CLIENT_TRAVELBROCHUREMODULE__UPDATEPASTERNEW_OFFSET UNITYSDK_OFFSET(0x1CE58F20)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelBrochureModule_TypeDefinitionIndex = 70127;

	class TravelBrochureModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PasterCounts; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewTextPasterDiaryIDs_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise* _DataInited; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewPasterIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _NewPasterDiaryIDs_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BrochureDiaryData*>* _DiaryDatas; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _NewImagePasterDiaryIDs_k__BackingField; // 0x40
		::System::Boolean _IsRedDotPasterInited; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 _RemoteHasSeenBrochureIndex; // 0x4C
		::System::UInt32 _LocalHasSeenBrochureIndex; // 0x50
		static ::System::UInt32* StaticGet__SeenBrochureMaxIndex()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "TravelBrochureModule")->GetStaticField(0xA860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_CCTOR_OFFSET))();
		}

		::System::Void _RedDotUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__REDDOTUNINIT_OFFSET))(this);
		}

		::System::Void SafeInitRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SAFEINITREDDOT_OFFSET))(this);
		}

		::System::Void _UpdatePasterNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__UPDATEPASTERNEW_OFFSET))(this);
		}

		::System::Void _AddRedDotNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDREDDOTNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRedDotTravelBrochureDataSynced(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREDATASYNCED_OFFSET))(this, a1);
		}

		::System::Void _OnRedDotTravelBrochurePasterGot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERGOT_OFFSET))(this, a1);
		}

		::System::Void _OnRedDotTravelBrochurePasterSeen(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONREDDOTTRAVELBROCHUREPASTERSEEN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERIDS_OFFSET))(this);
		}

		::System::Void set_NewPasterIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewPasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewPasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWPASTERDIARYIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewTextPasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWTEXTPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewTextPasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWTEXTPASTERDIARYIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewImagePasterDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_NEWIMAGEPASTERDIARYIDS_OFFSET))(this);
		}

		::System::Void set_NewImagePasterDiaryIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SET_NEWIMAGEPASTERDIARYIDS_OFFSET))(this, a1);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DataInited()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_DATAINITED_OFFSET))(this);
		}

		::System::Boolean IsEntranceShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_ISENTRANCESHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetDirectoryDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIRECTORYDIARYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetUnlockedDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETUNLOCKEDDIARYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>* GetAllDiaryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BrochureDiaryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETALLDIARYDATAS_OFFSET))(this);
		}

		::RPG::Client::BrochureDiaryData* GetDiaryData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETDIARYDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetPasterCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GETPASTERCOUNT_OFFSET))(this, a1);
		}

		::System::Void RecordBrochureSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_RECORDBROCHURESEEN_OFFSET))(this, a1);
		}

		::RPG::Client::BrochureDiaryData* _SafeCreateDiaryData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BrochureDiaryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__SAFECREATEDIARYDATA_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTravelBrochureGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochureApplyPasterListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREAPPLYPASTERLISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochureRemovePasterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREREMOVEPASTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochureUpdatePasterPosScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREUPDATEPASTERPOSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochurePageResetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGERESETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochureSelectMessageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHURESELECTMESSAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochurePageUnlockScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREPAGEUNLOCKSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTravelBrochureGetPasterScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONTRAVELBROCHUREGETPASTERSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ONPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::UInt32 get_SeenBrochureIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_SEENBROCHUREINDEX_OFFSET))(this);
		}

		::System::Boolean get_HasSeenBrochure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELBROCHUREMODULE_GET_HASSEENBROCHURE_OFFSET))(this);
		}

	};
}
