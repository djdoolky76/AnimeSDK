#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CAPKINMFNIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C546B10)
#define CAPKINMFNIL_GET_COMPLETEDBATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x1C546AF0)
#define CAPKINMFNIL_GET_COMPLETEDWAVE_OFFSET UNITYSDK_OFFSET(0x1C546AB0)
#define CAPKINMFNIL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1C546A90)
#define CAPKINMFNIL_GET_REMAININGROUND_OFFSET UNITYSDK_OFFSET(0x1C546AD0)
#define CAPKINMFNIL_SET_COMPLETEDBATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x1C546B00)
#define CAPKINMFNIL_SET_COMPLETEDWAVE_OFFSET UNITYSDK_OFFSET(0x1C546AC0)
#define CAPKINMFNIL_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1C546AA0)
#define CAPKINMFNIL_SET_REMAININGROUND_OFFSET UNITYSDK_OFFSET(0x1C546AE0)

	class CAPKINMFNIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _CompletedBattleTargetIDs_k__BackingField; // 0x10
		::System::UInt32 _CompletedWave_k__BackingField; // 0x18
		::System::UInt32 _RemainingRound_k__BackingField; // 0x1C
		::System::UInt32 _LevelID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPKINMFNIL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPKINMFNIL_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAPKINMFNIL_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompletedWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPKINMFNIL_GET_COMPLETEDWAVE_OFFSET))(this);
		}

		::System::Void set_CompletedWave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAPKINMFNIL_SET_COMPLETEDWAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainingRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPKINMFNIL_GET_REMAININGROUND_OFFSET))(this);
		}

		::System::Void set_RemainingRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAPKINMFNIL_SET_REMAININGROUND_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_CompletedBattleTargetIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPKINMFNIL_GET_COMPLETEDBATTLETARGETIDS_OFFSET))(this);
		}

		::System::Void set_CompletedBattleTargetIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CAPKINMFNIL_SET_COMPLETEDBATTLETARGETIDS_OFFSET))(this, a1);
		}

	};
