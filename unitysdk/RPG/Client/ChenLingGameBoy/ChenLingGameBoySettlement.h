#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class PGIOKHAKAPP;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengeData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengePackData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoySettlement; }
namespace RPG::GameCore { class ChenLingGameBoyCaseRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xD43D900)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD43D9B0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xD43DE40)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xD43D7C0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0xD43D7E0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISCHEAT_OFFSET UNITYSDK_OFFSET(0xD43D840)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD43D820)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xD43D800)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xD43D860)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_SETTLEMENTTEXTID_OFFSET UNITYSDK_OFFSET(0xD43D880)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xD43D7D0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0xD43D7F0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISCHEAT_OFFSET UNITYSDK_OFFSET(0xD43D850)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD43D830)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xD43D810)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xD43D870)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__INIT_OFFSET UNITYSDK_OFFSET(0xD43D9C0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__SYNC_OFFSET UNITYSDK_OFFSET(0xD43DD00)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoySettlement_TypeDefinitionIndex = 76963;

	class ChenLingGameBoySettlement : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingGameBoyCaseRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* _ChallengeData_k__BackingField; // 0x20
		::System::UInt64 _FinishedTime_k__BackingField; // 0x28
		::System::Boolean _IsCheat_k__BackingField; // 0x30
		::System::Boolean _IsNewRecord_k__BackingField; // 0x31
		::System::Boolean _IsFinished_k__BackingField; // 0x32
		::System::Byte _padding0[0x1];
		::System::UInt32 GameID; // 0x34
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* get_ChallengeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_CHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::UInt64 get_FinishedTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_FINISHEDTIME_OFFSET))(this);
		}

		::System::Void set_FinishedTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_FINISHEDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsNewRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISNEWRECORD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCheat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISCHEAT_OFFSET))(this);
		}

		::System::Void set_IsCheat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISCHEAT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_REWARDITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SettlementTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_SETTLEMENTTEXTID_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoySettlement* Create(::PGIOKHAKAPP* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoySettlement*(*)(::PGIOKHAKAPP*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__INIT_OFFSET))(this);
		}

		::System::Void _Sync(::PGIOKHAKAPP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::PGIOKHAKAPP*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* GetChallengeData(::System::Int32 a1)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GETCHALLENGEDATA_OFFSET))(this, a1);
		}

	};
}
