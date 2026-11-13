#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNOEKPLPCL;
namespace RPG::Client { class RogueEndlessBattleResult; }

#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7D2250)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7D2120)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D21B0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7D22C0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_BASESCORE_OFFSET UNITYSDK_OFFSET(0x1C7D2380)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x1C7D2320)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0x1C7D23D0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1C7D2340)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0x1C7D2360)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1C7D2300)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x1C7D2330)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0x1C7D23E0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1C7D2350)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0x1C7D2370)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1C7D2310)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SYNC_OFFSET UNITYSDK_OFFSET(0x1C7D21C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessBattleResult_TypeDefinitionIndex = 69388;

	class RogueEndlessBattleResult : public ::System::Object
	{
	public:
		::System::UInt32 _ExtraScore_k__BackingField; // 0x10
		::System::UInt32 _Layer_k__BackingField; // 0x14
		::System::Boolean _IsNewScoreRecord_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _Score_k__BackingField; // 0x1C
		::System::UInt32 _LeftRoundCnt_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueEndlessBattleResult* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::AJNOEKPLPCL* a1, ::RPG::Client::RogueEndlessBattleResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJNOEKPLPCL*, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Clone(::RPG::Client::RogueEndlessBattleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CLONE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_EXTRASCORE_OFFSET))(this);
		}

		::System::Void set_ExtraScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_EXTRASCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LEFTROUNDCNT_OFFSET))(this);
		}

		::System::Void set_LeftRoundCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LEFTROUNDCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_BASESCORE_OFFSET))(this);
		}

		::System::Boolean get_IsNewScoreRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET))(this);
		}

		::System::Void set_IsNewScoreRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET))(this, a1);
		}

	};
}
