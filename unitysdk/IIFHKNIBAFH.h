#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingCyclePhase.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
class AJPBKMBIGNC;
class HBGNFKBHDJK;
class KFHKMDOPMFC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIFHKNIBAFH_ANHONMOOFNF_OFFSET UNITYSDK_OFFSET(0x193CDEA0)
#define IIFHKNIBAFH_BHGEKHBBGIA_OFFSET UNITYSDK_OFFSET(0x193CDF50)
#define IIFHKNIBAFH_CTOR_OFFSET UNITYSDK_OFFSET(0x193CDFA0)
#define IIFHKNIBAFH_GET_AGENDAS_OFFSET UNITYSDK_OFFSET(0x193CDE60)
#define IIFHKNIBAFH_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x193CDD80)
#define IIFHKNIBAFH_GET_CURRENTDAY_OFFSET UNITYSDK_OFFSET(0x193CDDC0)
#define IIFHKNIBAFH_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x193CDDE0)
#define IIFHKNIBAFH_GET_DRIVERS_OFFSET UNITYSDK_OFFSET(0x193CDE20)
#define IIFHKNIBAFH_GET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x193CDE40)
#define IIFHKNIBAFH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x193CDDA0)
#define IIFHKNIBAFH_GET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0x193CDE00)
#define IIFHKNIBAFH_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0x193CDE80)
#define IIFHKNIBAFH_SET_AGENDAS_OFFSET UNITYSDK_OFFSET(0x193CDE70)
#define IIFHKNIBAFH_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x193CDD90)
#define IIFHKNIBAFH_SET_CURRENTDAY_OFFSET UNITYSDK_OFFSET(0x193CDDD0)
#define IIFHKNIBAFH_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x193CDDF0)
#define IIFHKNIBAFH_SET_DRIVERS_OFFSET UNITYSDK_OFFSET(0x193CDE30)
#define IIFHKNIBAFH_SET_FINISHEDMATCHNUM_OFFSET UNITYSDK_OFFSET(0x193CDE50)
#define IIFHKNIBAFH_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x193CDDB0)
#define IIFHKNIBAFH_SET_TARGETPARTID_OFFSET UNITYSDK_OFFSET(0x193CDE10)
#define IIFHKNIBAFH_SET_TEAMS_OFFSET UNITYSDK_OFFSET(0x193CDE90)
#define IIFHKNIBAFH__GET_CURRENTAGENDA_B__37_0_OFFSET UNITYSDK_OFFSET(0x193CE040)

inline static constexpr unsigned int IIFHKNIBAFH_TypeDefinitionIndex = 84485;

	class IIFHKNIBAFH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AJPBKMBIGNC*>* _Agendas_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::HBGNFKBHDJK*>* _Drivers_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::AFNPIPBLFJM*>* _Teams_k__BackingField; // 0x20
		::KFHKMDOPMFC* _Config_k__BackingField; // 0x28
		::RPG::Client::B51Racing::B51RacingCyclePhase _Phase_k__BackingField; // 0x30
		::System::UInt32 _CurrentDay_k__BackingField; // 0x34
		::System::UInt32 _DriverID_k__BackingField; // 0x38
		::System::UInt32 _FinishedMatchNum_k__BackingField; // 0x3C
		::System::UInt32 _TargetPartID_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_CTOR_OFFSET))(this);
		}

		::KFHKMDOPMFC* get_Config()
		{
			return ((::KFHKMDOPMFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::KFHKMDOPMFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFHKMDOPMFC*))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingCyclePhase get_Phase()
		{
			return ((::RPG::Client::B51Racing::B51RacingCyclePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::B51Racing::B51RacingCyclePhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCyclePhase))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_PHASE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_CURRENTDAY_OFFSET))(this);
		}

		::System::Void set_CurrentDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_CURRENTDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_DriverID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_DRIVERID_OFFSET))(this);
		}

		::System::Void set_DriverID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_DRIVERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetPartID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_TARGETPARTID_OFFSET))(this);
		}

		::System::Void set_TargetPartID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_TARGETPARTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::HBGNFKBHDJK*>* get_Drivers()
		{
			return ((::System::Collections::Generic::List_1<::HBGNFKBHDJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_DRIVERS_OFFSET))(this);
		}

		::System::Void set_Drivers(::System::Collections::Generic::List_1<::HBGNFKBHDJK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBGNFKBHDJK*>*))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_DRIVERS_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedMatchNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_FINISHEDMATCHNUM_OFFSET))(this);
		}

		::System::Void set_FinishedMatchNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_FINISHEDMATCHNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::AJPBKMBIGNC*>* get_Agendas()
		{
			return ((::System::Collections::Generic::List_1<::AJPBKMBIGNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_AGENDAS_OFFSET))(this);
		}

		::System::Void set_Agendas(::System::Collections::Generic::List_1<::AJPBKMBIGNC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AJPBKMBIGNC*>*))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_AGENDAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::AFNPIPBLFJM*>* get_Teams()
		{
			return ((::System::Collections::Generic::List_1<::AFNPIPBLFJM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_GET_TEAMS_OFFSET))(this);
		}

		::System::Void set_Teams(::System::Collections::Generic::List_1<::AFNPIPBLFJM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AFNPIPBLFJM*>*))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_SET_TEAMS_OFFSET))(this, a1);
		}

		::AJPBKMBIGNC* ANHONMOOFNF()
		{
			return ((::AJPBKMBIGNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_ANHONMOOFNF_OFFSET))(this);
		}

		::System::UInt32 BHGEKHBBGIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFHKNIBAFH_BHGEKHBBGIA_OFFSET))(this);
		}

		::System::Boolean _get_CurrentAgenda_b__37_0(::AJPBKMBIGNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJPBKMBIGNC*))((::PBYTE)hIl2Cpp + IIFHKNIBAFH__GET_CURRENTAGENDA_B__37_0_OFFSET))(this, a1);
		}

	};
