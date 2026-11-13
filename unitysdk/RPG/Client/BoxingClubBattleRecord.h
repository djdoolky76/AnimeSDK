#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
class OFHGANNPNIH;
namespace RPG::GameCore { class BoxingClubStageGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57F9D0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1C580310)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x1C5802F0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_ISBATTLING_OFFSET UNITYSDK_OFFSET(0x1C5802D0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_SELECTEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x1C580330)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_STAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1C580080)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_ISFINALROUND_OFFSET UNITYSDK_OFFSET(0x1C580260)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SETINBATTLE_OFFSET UNITYSDK_OFFSET(0x1C5800D0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1C580320)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x1C580300)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_ISBATTLING_OFFSET UNITYSDK_OFFSET(0x1C5802E0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_TRYUPDATEINFOBYNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C5801B0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATEDATABYNETPACKET_OFFSET UNITYSDK_OFFSET(0x1C57FB30)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATESTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1C580120)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubBattleRecord_TypeDefinitionIndex = 64392;

	class BoxingClubBattleRecord : public ::System::Object
	{
	public:
		::RPG::GameCore::BoxingClubStageGroupConfigRow* Row; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedBuffList; // 0x18
		::System::Boolean _IsBattling_k__BackingField; // 0x20
		::System::Boolean IsBattleWin; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 _CurrentStageIndex_k__BackingField; // 0x24
		::System::UInt32 CurrentRoundNum; // 0x28
		::System::UInt32 _CurrentStage_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateDataByNetPacket(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATEDATABYNETPACKET_OFFSET))(this, a1);
		}

		::System::Void SetInBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SETINBATTLE_OFFSET))(this, a1);
		}

		::System::Void UpdateStageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATESTAGEINDEX_OFFSET))(this);
		}

		::System::Void TryUpdateInfoByNotify(::OFHGANNPNIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHGANNPNIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_TRYUPDATEINFOBYNOTIFY_OFFSET))(this, a1);
		}

		::System::Boolean IsFinalRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_ISFINALROUND_OFFSET))(this);
		}

		::System::Boolean get_IsBattling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_ISBATTLING_OFFSET))(this);
		}

		::System::Void set_IsBattling(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_ISBATTLING_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_STAGEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrentStage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentStageIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentStageIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_SELECTEDBUFFLIST_OFFSET))(this);
		}

	};
}
