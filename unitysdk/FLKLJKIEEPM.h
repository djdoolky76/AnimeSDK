#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGBIFFCBKEH;
class EKFKFEBANDA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLKLJKIEEPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C554100)
#define FLKLJKIEEPM_GET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0x1C554060)
#define FLKLJKIEEPM_GET_AVAILABLEMECHIDS_OFFSET UNITYSDK_OFFSET(0x1C5540A0)
#define FLKLJKIEEPM_GET_AVAILABLEORDERIDS_OFFSET UNITYSDK_OFFSET(0x1C554080)
#define FLKLJKIEEPM_GET_COIN_OFFSET UNITYSDK_OFFSET(0x1C554000)
#define FLKLJKIEEPM_GET_CURRENTDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C553FC0)
#define FLKLJKIEEPM_GET_DESIGNLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C553F80)
#define FLKLJKIEEPM_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1C553FE0)
#define FLKLJKIEEPM_GET_FINISHEDREPORTIDS_OFFSET UNITYSDK_OFFSET(0x1C5540E0)
#define FLKLJKIEEPM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C554020)
#define FLKLJKIEEPM_GET_REVENUE_OFFSET UNITYSDK_OFFSET(0x1C554040)
#define FLKLJKIEEPM_GET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0x1C5540C0)
#define FLKLJKIEEPM_GET_TOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C553FA0)
#define FLKLJKIEEPM_GET_WORKSHOPLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C553F60)
#define FLKLJKIEEPM_SET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0x1C554070)
#define FLKLJKIEEPM_SET_AVAILABLEMECHIDS_OFFSET UNITYSDK_OFFSET(0x1C5540B0)
#define FLKLJKIEEPM_SET_AVAILABLEORDERIDS_OFFSET UNITYSDK_OFFSET(0x1C554090)
#define FLKLJKIEEPM_SET_COIN_OFFSET UNITYSDK_OFFSET(0x1C554010)
#define FLKLJKIEEPM_SET_CURRENTDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C553FD0)
#define FLKLJKIEEPM_SET_DESIGNLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C553F90)
#define FLKLJKIEEPM_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1C553FF0)
#define FLKLJKIEEPM_SET_FINISHEDREPORTIDS_OFFSET UNITYSDK_OFFSET(0x1C5540F0)
#define FLKLJKIEEPM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C554030)
#define FLKLJKIEEPM_SET_REVENUE_OFFSET UNITYSDK_OFFSET(0x1C554050)
#define FLKLJKIEEPM_SET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0x1C5540D0)
#define FLKLJKIEEPM_SET_TOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x1C553FB0)
#define FLKLJKIEEPM_SET_WORKSHOPLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1C553F70)

	class FLKLJKIEEPM : public ::System::Object
	{
	public:
		::EGBIFFCBKEH* _WorkshopLevelConfig_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableOrderIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableChipIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableMechIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedReportIDs_k__BackingField; // 0x30
		::EKFKFEBANDA* _DesignLevelConfig_k__BackingField; // 0x38
		::System::UInt32 _TotalDesignExp_k__BackingField; // 0x40
		::System::UInt32 _Level_k__BackingField; // 0x44
		::System::UInt32 _Revenue_k__BackingField; // 0x48
		::System::UInt32 _CurrentDesignExp_k__BackingField; // 0x4C
		::System::UInt32 _Coin_k__BackingField; // 0x50
		::System::UInt32 _RunningExamID_k__BackingField; // 0x54
		::System::UInt32 _DesignLevel_k__BackingField; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_CTOR_OFFSET))(this);
		}

		::EGBIFFCBKEH* get_WorkshopLevelConfig()
		{
			return ((::EGBIFFCBKEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_WORKSHOPLEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_WorkshopLevelConfig(::EGBIFFCBKEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGBIFFCBKEH*))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_WORKSHOPLEVELCONFIG_OFFSET))(this, a1);
		}

		::EKFKFEBANDA* get_DesignLevelConfig()
		{
			return ((::EKFKFEBANDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_DESIGNLEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_DesignLevelConfig(::EKFKFEBANDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFKFEBANDA*))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_DESIGNLEVELCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalDesignExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_TOTALDESIGNEXP_OFFSET))(this);
		}

		::System::Void set_TotalDesignExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_TOTALDESIGNEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentDesignExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_CURRENTDESIGNEXP_OFFSET))(this);
		}

		::System::Void set_CurrentDesignExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_CURRENTDESIGNEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_DesignLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_DESIGNLEVEL_OFFSET))(this);
		}

		::System::Void set_DesignLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_DESIGNLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Coin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_COIN_OFFSET))(this);
		}

		::System::Void set_Coin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_COIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Revenue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_REVENUE_OFFSET))(this);
		}

		::System::Void set_Revenue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_REVENUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableChipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_AVAILABLECHIPIDS_OFFSET))(this);
		}

		::System::Void set_AvailableChipIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_AVAILABLECHIPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableOrderIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_AVAILABLEORDERIDS_OFFSET))(this);
		}

		::System::Void set_AvailableOrderIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_AVAILABLEORDERIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableMechIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_AVAILABLEMECHIDS_OFFSET))(this);
		}

		::System::Void set_AvailableMechIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_AVAILABLEMECHIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_RunningExamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_RUNNINGEXAMID_OFFSET))(this);
		}

		::System::Void set_RunningExamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_RUNNINGEXAMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedReportIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_GET_FINISHEDREPORTIDS_OFFSET))(this);
		}

		::System::Void set_FinishedReportIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FLKLJKIEEPM_SET_FINISHEDREPORTIDS_OFFSET))(this, a1);
		}

	};
