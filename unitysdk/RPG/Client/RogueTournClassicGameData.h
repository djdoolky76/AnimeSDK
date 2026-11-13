#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class BBJBIFHOLGF;
class DFIFNLFNBLK;
class IAFKJCICCOP;
class PFLOIHLLMEE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class RogueTournAreaGroupData; }
namespace RPG::Client { class RogueTournClassicGameLevelInfo; }
namespace RPG::Client { class RogueTournMiracleInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C878570)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C878A90)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1C878E70)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C878CA0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0x1C878E30)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1C878CF0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1C878EB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x1C878D70)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x1C878DB0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1C878D30)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1C878DF0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0x1C87A2D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C87A2B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0x1C87A3B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x1C87A360)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C87A2F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0x1C87A380)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x1C87A3D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0x1C87A410)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x1C87A3A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x1C87A310)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1C87A370)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1C87A290)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1C87A390)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0x1C87A270)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0x1C87A3C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1C87A220)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1C87A3F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1C878A50)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x1C87A320)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0x1C87A2E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C87A2C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C87A300)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x1C87A3E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0x1C87A420)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1C87A2A0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0x1C87A280)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1C87A400)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C8798F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0x1C879D20)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__SYNCDIFFCOMP_OFFSET UNITYSDK_OFFSET(0x1C879CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameData_TypeDefinitionIndex = 69571;

	class RogueTournClassicGameData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x10
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _DiffCompIDs; // 0x20
		::IAFKJCICCOP* _BlackboardInfo_k__BackingField; // 0x28
		::System::String* _ReportTransNo_k__BackingField; // 0x30
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x38
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x40
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x48
		::DFIFNLFNBLK* _SettleResultFactory_k__BackingField; // 0x50
		::BBJBIFHOLGF* _AvatarCollectionBuilder; // 0x58
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x60
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x68
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x70
		::System::Boolean _IsGodMode_k__BackingField; // 0x78
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x79
		::System::Byte _padding0[0x2];
		::System::UInt32 _MonsterEliteDropID; // 0x7C
		::System::UInt32 _AreaID_k__BackingField; // 0x80
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x84
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::IAFKJCICCOP* GetRogueBlackboardInfo()
		{
			return ((::IAFKJCICCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::PFLOIHLLMEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFLOIHLLMEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncDiffComp(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__SYNCDIFFCOMP_OFFSET))(this, a1);
		}

		::System::Void _FillFromAreaExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA__FILLFROMAREAEXCEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, a1);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_AREAGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournClassicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournClassicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* RPG_Client_IRogueTournGame_get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::IAFKJCICCOP* get_BlackboardInfo()
		{
			return ((::IAFKJCICCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::DFIFNLFNBLK* get_SettleResultFactory()
		{
			return ((::DFIFNLFNBLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_GET_ISGODMODE_OFFSET))(this);
		}

		::System::Void set_IsGodMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMEDATA_SET_ISGODMODE_OFFSET))(this, a1);
		}

	};
}
