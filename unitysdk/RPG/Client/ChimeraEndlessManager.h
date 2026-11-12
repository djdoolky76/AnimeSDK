#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOHECIMGMHB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAENDLESSMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD4A94D0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4A9030)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSUNLOCKCHIMERAID_OFFSET UNITYSDK_OFFSET(0xD4A92B0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSWORKROUNDDATA_OFFSET UNITYSDK_OFFSET(0xD4A90D0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_CURRENTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0xD4A9470)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xD4A94B0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_HIGHESTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0xD4A9450)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_WORKROUNDID_OFFSET UNITYSDK_OFFSET(0xD4A9490)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD4A8D30)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_CURRENTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0xD4A9480)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xD4A94C0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_HIGHESTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0xD4A9460)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_WORKROUNDID_OFFSET UNITYSDK_OFFSET(0xD4A94A0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0xD4A91A0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAQUITENDLESS_OFFSET UNITYSDK_OFFSET(0xD4A9260)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERASTARTENDLESS_OFFSET UNITYSDK_OFFSET(0xD4A9210)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER__INITENDLESSWORKROUND_OFFSET UNITYSDK_OFFSET(0xD4A8D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEndlessManager_TypeDefinitionIndex = 64859;

	class ChimeraEndlessManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FOHECIMGMHB*>* _WorkRoundDataDict; // 0x10
		::System::UInt32 _WorkRoundID_k__BackingField; // 0x18
		::System::UInt32 _CurrentFinishWorkValue_k__BackingField; // 0x1C
		::System::UInt32 _HighestFinishWorkValue_k__BackingField; // 0x20
		::System::UInt32 _FinishWorkCnt_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_DISPOSE_OFFSET))(this);
		}

		::FOHECIMGMHB* GetEndlessWorkRoundData(::System::UInt32 a1)
		{
			return ((::FOHECIMGMHB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSWORKROUNDDATA_OFFSET))(this, a1);
		}

		::System::Void SyncChimeraFinishWorkValue(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAFINISHWORKVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SyncChimeraStartEndless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERASTARTENDLESS_OFFSET))(this);
		}

		::System::Void SyncChimeraQuitEndless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAQUITENDLESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEndlessUnlockChimeraID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSUNLOCKCHIMERAID_OFFSET))(this);
		}

		::System::Void _InitEndlessWorkRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER__INITENDLESSWORKROUND_OFFSET))(this);
		}

		::System::UInt32 get_HighestFinishWorkValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_HIGHESTFINISHWORKVALUE_OFFSET))(this);
		}

		::System::Void set_HighestFinishWorkValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_HIGHESTFINISHWORKVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentFinishWorkValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_CURRENTFINISHWORKVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentFinishWorkValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_CURRENTFINISHWORKVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_WORKROUNDID_OFFSET))(this);
		}

		::System::Void set_WorkRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_WORKROUNDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_FINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_FinishWorkCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_FINISHWORKCNT_OFFSET))(this, a1);
		}

	};
}
