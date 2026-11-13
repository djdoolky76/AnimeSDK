#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameCycleData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_ADDWORKDATA_OFFSET UNITYSDK_OFFSET(0x1CCBA290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAACTIONPOINTENOUGH_OFFSET UNITYSDK_OFFSET(0x1CCB96E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAENERGYENOUGH_OFFSET UNITYSDK_OFFSET(0x1CCB9920)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATAFINISH_OFFSET UNITYSDK_OFFSET(0x1CCBAB60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATASELECTED_OFFSET UNITYSDK_OFFSET(0x1CCBA9C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CLEARARRANGEDWORKDATA_OFFSET UNITYSDK_OFFSET(0x1CCBA870)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBAD40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCB9560)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETAVAILABLEACTIONPOINTNUM_OFFSET UNITYSDK_OFFSET(0x1CCB9750)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETROUTINEWORKLIST_OFFSET UNITYSDK_OFFSET(0x1CCB9F90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_ARRANGEDWORKLIST_OFFSET UNITYSDK_OFFSET(0x1CCBAD00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_FIXEDWORK_OFFSET UNITYSDK_OFFSET(0x1CCBAD20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_INIT_OFFSET UNITYSDK_OFFSET(0x1CCB94D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVELASTWORKDATA_OFFSET UNITYSDK_OFFSET(0x1CCBA710)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVEWORKDATA_OFFSET UNITYSDK_OFFSET(0x1CCBA5D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_RESET_OFFSET UNITYSDK_OFFSET(0x1CCB95B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SETFIXEDWORKDATA_OFFSET UNITYSDK_OFFSET(0x1CCBA580)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_ARRANGEDWORKLIST_OFFSET UNITYSDK_OFFSET(0x1CCBAD10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_FIXEDWORK_OFFSET UNITYSDK_OFFSET(0x1CCBAD30)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutine_TypeDefinitionIndex = 77929;

	class ActivityHipplenRoutine : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* _GameCycleData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _ArrangedWorkList_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* _FixedWork_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_RESET_OFFSET))(this);
		}

		::System::Boolean CheckAddWorkDataActionPointEnough(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAACTIONPOINTENOUGH_OFFSET))(this, a1);
		}

		::System::Boolean CheckAddWorkDataEnergyEnough(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAENERGYENOUGH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetRoutineWorkList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETROUTINEWORKLIST_OFFSET))(this, a1);
		}

		::System::Boolean AddWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_ADDWORKDATA_OFFSET))(this, a1);
		}

		::System::Void SetFixedWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SETFIXEDWORKDATA_OFFSET))(this, a1);
		}

		::System::Boolean RemoveWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVEWORKDATA_OFFSET))(this, a1);
		}

		::System::Boolean RemoveLastWorkData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVELASTWORKDATA_OFFSET))(this);
		}

		::System::Boolean ClearArrangedWorkData(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CLEARARRANGEDWORKDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckWorkDataSelected(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATASELECTED_OFFSET))(this, a1);
		}

		::System::Boolean CheckWorkDataFinish(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATAFINISH_OFFSET))(this, a1);
		}

		::System::Int32 GetAvailableActionPointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETAVAILABLEACTIONPOINTNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* get_ArrangedWorkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_ARRANGEDWORKLIST_OFFSET))(this);
		}

		::System::Void set_ArrangedWorkList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_ARRANGEDWORKLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* get_FixedWork()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_FIXEDWORK_OFFSET))(this);
		}

		::System::Void set_FixedWork(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_FIXEDWORK_OFFSET))(this, a1);
		}

	};
}
