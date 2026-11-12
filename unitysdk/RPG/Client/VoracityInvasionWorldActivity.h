#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCOHDEGDBM;
class BDHMILHOJBC;
class DICLAFBPBCN;
class EINCAJMPJOJ;
class NAEHHGFGNFF;
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class VoracityInvasionFightEntranceData; }
namespace RPG::Client { class VoracityInvasionPersonalProgress; }
namespace RPG::Client { class VoracityInvasionWorldProgress; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_CTOR_OFFSET UNITYSDK_OFFSET(0xEF1ABB0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEF1B060)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GETFIGHTENTRANCELIST_OFFSET UNITYSDK_OFFSET(0xEF1D0D0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_DISPLAYMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xEF1CF00)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xEF1CF20)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_ONUPDATED_OFFSET UNITYSDK_OFFSET(0xEF1CEE0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_PERSONALPROGRESS_OFFSET UNITYSDK_OFFSET(0xEF1CEA0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_WORLDPROGRESS_OFFSET UNITYSDK_OFFSET(0xEF1CEC0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xEF1D030)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_PUBLISHUPDATEEVENT_OFFSET UNITYSDK_OFFSET(0xEF1C460)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_DISPLAYMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xEF1CF10)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xEF1CF30)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_ONUPDATED_OFFSET UNITYSDK_OFFSET(0xEF1CEF0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_PERSONALPROGRESS_OFFSET UNITYSDK_OFFSET(0xEF1CEB0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_WORLDPROGRESS_OFFSET UNITYSDK_OFFSET(0xEF1CED0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEDISPLAYPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xEF1C030)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATELASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xEF1C0D0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEPERSONALCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xEF1BF30)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEWORLDCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xEF1BFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionWorldActivity_TypeDefinitionIndex = 70216;

	class VoracityInvasionWorldActivity : public ::System::Object
	{
	public:
		::BDHMILHOJBC* _Provider; // 0x10
		::RPG::Client::VoracityInvasionPersonalProgress* _PersonalProgress_k__BackingField; // 0x18
		::NAEHHGFGNFF* _TimerService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _DisplayMonsterDataList_k__BackingField; // 0x28
		::System::Action* _OnUpdated_k__BackingField; // 0x30
		::BCCOHDEGDBM* _NetworkService; // 0x38
		::RPG::Client::VoracityInvasionWorldProgress* _WorldProgress_k__BackingField; // 0x40
		::System::Int64 _LastUpdateTime_k__BackingField; // 0x48
		::System::Int32 _RefreshTimerID; // 0x50
		::System::Int32 _StartOfHourTimerID; // 0x54
		::System::Void _ctor(::BCCOHDEGDBM* a1, ::NAEHHGFGNFF* a2, ::BDHMILHOJBC* a3, ::EINCAJMPJOJ* a4, ::DICLAFBPBCN* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BCCOHDEGDBM*, ::NAEHHGFGNFF*, ::BDHMILHOJBC*, ::EINCAJMPJOJ*, ::DICLAFBPBCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::VoracityInvasionPersonalProgress* get_PersonalProgress()
		{
			return ((::RPG::Client::VoracityInvasionPersonalProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_PERSONALPROGRESS_OFFSET))(this);
		}

		::System::Void set_PersonalProgress(::RPG::Client::VoracityInvasionPersonalProgress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VoracityInvasionPersonalProgress*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_PERSONALPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::VoracityInvasionWorldProgress* get_WorldProgress()
		{
			return ((::RPG::Client::VoracityInvasionWorldProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_WORLDPROGRESS_OFFSET))(this);
		}

		::System::Void set_WorldProgress(::RPG::Client::VoracityInvasionWorldProgress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VoracityInvasionWorldProgress*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_WORLDPROGRESS_OFFSET))(this, a1);
		}

		::System::Action* get_OnUpdated()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_ONUPDATED_OFFSET))(this);
		}

		::System::Void set_OnUpdated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_ONUPDATED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* get_DisplayMonsterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_DISPLAYMONSTERDATALIST_OFFSET))(this);
		}

		::System::Void set_DisplayMonsterDataList(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_DISPLAYMONSTERDATALIST_OFFSET))(this, a1);
		}

		::System::Int64 get_LastUpdateTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_LASTUPDATETIME_OFFSET))(this);
		}

		::System::Void set_LastUpdateTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_LASTUPDATETIME_OFFSET))(this, a1);
		}

		::System::Void UpdatePersonalCurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEPERSONALCURPROGRESS_OFFSET))(this, a1);
		}

		::System::Void UpdateWorldCurProgress(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEWORLDCURPROGRESS_OFFSET))(this, a1);
		}

		::System::Void UpdateDisplayPercentage(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEDISPLAYPERCENTAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_ISEXPIRED_OFFSET))(this);
		}

		::System::Void UpdateLastUpdateTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATELASTUPDATETIME_OFFSET))(this, a1);
		}

		::System::Void PublishUpdateEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_PUBLISHUPDATEEVENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>* GetFightEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GETFIGHTENTRANCELIST_OFFSET))(this);
		}

	};
}
