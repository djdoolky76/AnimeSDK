#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIFNKEPOOPA;
class DFJPGILAAON;
class JALACKKFDEG;
class JPDFANKBJNO;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarRequest; }
namespace RPG::GameCore { class DrinkMakerChatRow; }
namespace RPG::GameCore { class DrinkMakerDayRow; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET UNITYSDK_OFFSET(0x1DA51C40)
#define RPG_CLIENT_DRINKMAKERBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA50D80)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET UNITYSDK_OFFSET(0x1DA50F30)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0x1DA51FC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET UNITYSDK_OFFSET(0x1DA51EE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET UNITYSDK_OFFSET(0x1DA52030)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET UNITYSDK_OFFSET(0x1DA51FE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1DA520C0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET UNITYSDK_OFFSET(0x1DA51F50)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x1DA52100)
#define RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1DA50EE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DA52140)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET UNITYSDK_OFFSET(0x1DA52180)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x1DA523C0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0x1DA52290)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0x1DA520E0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0x1DA52120)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0x1DA520A0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DA52160)
#define RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET UNITYSDK_OFFSET(0x1DA50E90)
#define RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0x1DA52080)
#define RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET UNITYSDK_OFFSET(0x1DA50F80)
#define RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x1DA51C80)
#define RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET UNITYSDK_OFFSET(0x1DA51B00)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0x1DA51FD0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1DA520D0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0x1DA52110)
#define RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DA52150)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x1DA523D0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0x1DA520F0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0x1DA52130)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0x1DA520B0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DA52170)
#define RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0x1DA52090)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0x1DA514C0)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET UNITYSDK_OFFSET(0x1DA51530)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1DA50FD0)
#define RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1DA521D0)
#define RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0x1DA522E0)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1DA51020)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET UNITYSDK_OFFSET(0x1DA51600)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBar_TypeDefinitionIndex = 65030;

	class DrinkMakerBar : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* _TodayGuestRows_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* _LastServiceResults_k__BackingField; // 0x18
		::RPG::GameCore::DrinkMakerRequestRow* _GuideMissionRequestRow; // 0x20
		::RPG::Client::DrinkMakerBarDrink* _CustomDrink_k__BackingField; // 0x28
		::RPG::GameCore::DrinkMakerChatRow* _CurChatRow_k__BackingField; // 0x30
		::RPG::GameCore::DrinkMakerRequestRow* _BusinessDayRequestRow; // 0x38
		::JPDFANKBJNO* _ServerData; // 0x40
		::RPG::GameCore::DrinkMakerGuestRow* _BusinessDayGuestRow; // 0x48
		::RPG::GameCore::DrinkMakerGuestRow* _GuideMissionGuestRow; // 0x50
		::System::Boolean _IsTodayFinished_k__BackingField; // 0x58
		::System::Boolean _IsInGuideMission_k__BackingField; // 0x59
		::System::Byte _padding0[0x2];
		::System::UInt32 _LastSequenceID_k__BackingField; // 0x5C
		::System::UInt32 _CurSequenceIndex_k__BackingField; // 0x60
		::System::UInt32 _FreePhaseMissionID_k__BackingField; // 0x64
		::System::UInt32 _MixTagUnlockSubMissionID_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SequenceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET))(this);
		}

		::System::UInt32 get_ChatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET))(this);
		}

		::System::Boolean IsCurBusinessDayGuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET))(this);
		}

		::System::Void UpdateData(::JPDFANKBJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPDFANKBJNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateData_1(::BIFNKEPOOPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIFNKEPOOPA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET))(this, a1);
		}

		::System::Void UpdateData_2(::JALACKKFDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JALACKKFDEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET))(this, a1);
		}

		::System::Void SetGuideMissionBartendData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET))(this, a1);
		}

		::System::Void BackToBusinessDayBartend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET))(this);
		}

		::System::Void RefreshCustomDrink(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerDayRow* get_CurDayRow()
		{
			return ((::RPG::GameCore::DrinkMakerDayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestSequenceRow* get_CurSequenceRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestSequenceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerChatRow* get_CurChatRow()
		{
			return ((::RPG::GameCore::DrinkMakerChatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET))(this);
		}

		::System::Void set_CurChatRow(::RPG::GameCore::DrinkMakerChatRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerRequestRow* get_CurRequestRow()
		{
			return ((::RPG::GameCore::DrinkMakerRequestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestRow* get_CurGuestRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* get_TodayGuestRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET))(this);
		}

		::System::Void set_TodayGuestRows(::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* get_LastServiceResults()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET))(this);
		}

		::System::Void set_LastServiceResults(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSequenceIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET))(this);
		}

		::System::Void set_CurSequenceIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTodayFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET))(this);
		}

		::System::Void set_IsTodayFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarDrink* get_CustomDrink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET))(this);
		}

		::System::Void set_CustomDrink(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastSequenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET))(this);
		}

		::System::Void set_LastSequenceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FreePhaseMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET))(this);
		}

		::System::Void set_FreePhaseMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MixTagUnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_MixTagUnlockSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFreePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsMixTagUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsInGuideMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET))(this);
		}

		::System::Void set_IsInGuideMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET))(this, a1);
		}

		::System::Void _UpdateGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void _UpdateResultData(::JALACKKFDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JALACKKFDEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsFreePhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET))(this);
		}

		::System::Boolean _IsMixTagUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET))(this);
		}

	};
}
