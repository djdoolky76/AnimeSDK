#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::GameCore { class ActivityMultiplayerConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_COLLECTREQUIREDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD8DD440)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD8DD410)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD8DD760)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDFRAMEPATH_OFFSET UNITYSDK_OFFSET(0xD8DD800)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDIMGPATH_OFFSET UNITYSDK_OFFSET(0xD8DD7B0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINCURRENT_OFFSET UNITYSDK_OFFSET(0xD8DDA80)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINDISPLAY_OFFSET UNITYSDK_OFFSET(0xD8DD8A0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISPROMOTING_OFFSET UNITYSDK_OFFSET(0xD8DD920)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISTRANSFERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD8DDBE0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_PROGRAMGROUPID_OFFSET UNITYSDK_OFFSET(0xD8DD850)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__CURRENTSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD8DDB00)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__DISPLAYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD8DD5D0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__PROMOTIONSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD8DD9A0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD8DD4B0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYINFO_UNREGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD8DD6B0)

namespace RPG::Client
{
	class MultiPlayerActivityInfo : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleTask* _WaitStartTask; // 0x10
		::RPG::GameCore::ActivityMultiplayerConfigRow* _Config; // 0x18
		::RPG::Client::ConditionChecker* _UnlockChecker; // 0x20
		::System::Void _ctor(::RPG::GameCore::ActivityMultiplayerConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityMultiplayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void CollectRequiredMissionData(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_COLLECTREQUIREDMISSIONDATA_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterWaitForOpenSchedule(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_REGISTERWAITFOROPENSCHEDULE_OFFSET))(this, a1);
		}

		::System::Void UnregisterWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_UNREGISTERWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::String* get_CardImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDIMGPATH_OFFSET))(this);
		}

		::System::String* get_CardFramePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_CARDFRAMEPATH_OFFSET))(this);
		}

		::System::UInt32 get_ProgramGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_PROGRAMGROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsInDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsPromoting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISPROMOTING_OFFSET))(this);
		}

		::System::Boolean get_IsInCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISINCURRENT_OFFSET))(this);
		}

		::System::Boolean get_IsTransferAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET_ISTRANSFERAVAILABLE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__DisplayScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__DISPLAYSCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__PromotionScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__PROMOTIONSCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get__CurrentScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYINFO_GET__CURRENTSCHEDULEDATA_OFFSET))(this);
		}

	};
}
