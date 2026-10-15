#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKFODPFGEA;
class LBKFMPEMAJF;
class LGGLMOFICJK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PANDNBODLAP_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0B70)
#define PANDNBODLAP_GET_AGENDA_OFFSET UNITYSDK_OFFSET(0xBFD0AB0)
#define PANDNBODLAP_GET_CARID_OFFSET UNITYSDK_OFFSET(0xBFD0AF0)
#define PANDNBODLAP_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0xBFD0A70)
#define PANDNBODLAP_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xBFD0B10)
#define PANDNBODLAP_GET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0xBFD0A90)
#define PANDNBODLAP_GET_PLAYERCAR_OFFSET UNITYSDK_OFFSET(0xBFD0B50)
#define PANDNBODLAP_GET_PREMATCHTRACKINFOLIST_OFFSET UNITYSDK_OFFSET(0xBFD0AD0)
#define PANDNBODLAP_GET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0xBFD0B30)
#define PANDNBODLAP_SET_AGENDA_OFFSET UNITYSDK_OFFSET(0xBFD0AC0)
#define PANDNBODLAP_SET_CARID_OFFSET UNITYSDK_OFFSET(0xBFD0B00)
#define PANDNBODLAP_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0xBFD0A80)
#define PANDNBODLAP_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xBFD0B20)
#define PANDNBODLAP_SET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0xBFD0AA0)
#define PANDNBODLAP_SET_PLAYERCAR_OFFSET UNITYSDK_OFFSET(0xBFD0B60)
#define PANDNBODLAP_SET_PREMATCHTRACKINFOLIST_OFFSET UNITYSDK_OFFSET(0xBFD0AE0)
#define PANDNBODLAP_SET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0xBFD0B40)

inline static constexpr unsigned int PANDNBODLAP_TypeDefinitionIndex = 81707;

	class PANDNBODLAP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LBKFMPEMAJF*>* _PreMatchTrackInfoList_k__BackingField; // 0x10
		::LGGLMOFICJK* _PlayerCar_k__BackingField; // 0x18
		::KHKFODPFGEA* _Agenda_k__BackingField; // 0x20
		::System::UInt32 _CycleID_k__BackingField; // 0x28
		::System::UInt32 _TargetPartID_k__BackingField; // 0x2C
		::System::UInt32 _CarID_k__BackingField; // 0x30
		::System::UInt32 _FinishedMatchNum_k__BackingField; // 0x34
		::System::UInt32 _DriverID_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_CYCLEID_OFFSET))(this);
		}

		::System::Void set_CycleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_CYCLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedMatchNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_FINISHEDMATCHNUM_OFFSET))(this);
		}

		::System::Void set_FinishedMatchNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_FINISHEDMATCHNUM_OFFSET))(this, a1);
		}

		::KHKFODPFGEA* get_Agenda()
		{
			return ((::KHKFODPFGEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_AGENDA_OFFSET))(this);
		}

		::System::Void set_Agenda(::KHKFODPFGEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKFODPFGEA*))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_AGENDA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LBKFMPEMAJF*>* get_PreMatchTrackInfoList()
		{
			return ((::System::Collections::Generic::List_1<::LBKFMPEMAJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_PREMATCHTRACKINFOLIST_OFFSET))(this);
		}

		::System::Void set_PreMatchTrackInfoList(::System::Collections::Generic::List_1<::LBKFMPEMAJF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LBKFMPEMAJF*>*))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_PREMATCHTRACKINFOLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_CarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_CARID_OFFSET))(this);
		}

		::System::Void set_CarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_CARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DriverID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_DRIVERID_OFFSET))(this);
		}

		::System::Void set_DriverID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_DRIVERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetPartID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_TARGETPARTID_OFFSET))(this);
		}

		::System::Void set_TargetPartID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_TARGETPARTID_OFFSET))(this, a1);
		}

		::LGGLMOFICJK* get_PlayerCar()
		{
			return ((::LGGLMOFICJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANDNBODLAP_GET_PLAYERCAR_OFFSET))(this);
		}

		::System::Void set_PlayerCar(::LGGLMOFICJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGLMOFICJK*))((::PBYTE)hIl2Cpp + PANDNBODLAP_SET_PLAYERCAR_OFFSET))(this, a1);
		}

	};
