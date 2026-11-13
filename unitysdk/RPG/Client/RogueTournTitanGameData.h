#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class BBJBIFHOLGF;
class DFIFNLFNBLK;
class IAFKJCICCOP;
class PFLOIHLLMEE;
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
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_CLEARPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACED460)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACECD50)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACED230)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x1ACED6C0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1ACED4B0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0x1ACED680)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1ACED500)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1ACED710)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x1ACED580)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x1ACED600)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1ACED540)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1ACED640)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x1ACED5C0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0x1ACEE670)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1ACEE650)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE770)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE720)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1ACEE690)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE740)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACEE7C0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x1ACEE7E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0x1ACEE820)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE760)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE6D0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE730)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1ACEE6B0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE750)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0x1ACEE630)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0x1ACEE780)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE790)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0x1ACEE7A0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1ACEE5E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1ACEE800)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1ACED1F0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x1ACEE6E0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0x1ACEE680)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1ACEE660)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1ACEE6A0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACEE7D0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x1ACEE7F0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0x1ACEE830)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1ACEE6C0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0x1ACEE640)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_TITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0x1ACEE7B0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1ACEE810)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNCTITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0x1ACEE510)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1ACEDEC0)
#define RPG_CLIENT_ROGUETOURNTITANGAMEDATA__FILLFROMAREAEXCEL_OFFSET UNITYSDK_OFFSET(0x1ACEE280)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanGameData_TypeDefinitionIndex = 69803;

	class RogueTournTitanGameData : public ::System::Object
	{
	public:
		::DFIFNLFNBLK* _SettleResultFactory_k__BackingField; // 0x10
		::RPG::Client::RogueTournMiracleInfo* _MiracleInfo_k__BackingField; // 0x18
		::BBJBIFHOLGF* _AvatarCollectionBuilder; // 0x20
		::System::String* _ReportTransNo_k__BackingField; // 0x28
		::RPG::Client::IRogueTournDifficulty* _Difficulty_k__BackingField; // 0x30
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x38
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x40
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x48
		::RPG::Client::RogueTournClassicGameLevelInfo* _LevelInfo_k__BackingField; // 0x50
		::IAFKJCICCOP* _BlackboardInfo_k__BackingField; // 0x58
		::RPG::Client::RogueTournAreaGroupData* _AreaGroup_k__BackingField; // 0x60
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x68
		::RPG::Client::RogueTournTitanBlessInfo* _TitanBlessInfo_k__BackingField; // 0x70
		::System::UInt32 _TitanBlessProgress_k__BackingField; // 0x78
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x7C
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x80
		::System::UInt32 _MonsterEliteDropID; // 0x84
		::System::Boolean _IsFreeMode_k__BackingField; // 0x88
		::System::Boolean _HasPendingTitanBlessProgressUpdate_k__BackingField; // 0x89
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x8A
		::System::Byte _padding0[0x1];
		::System::UInt32 _AreaID_k__BackingField; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearPendingTitanBlessProgressUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_CLEARPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::IAFKJCICCOP* GetRogueBlackboardInfo()
		{
			return ((::IAFKJCICCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::PFLOIHLLMEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFLOIHLLMEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncTitanBlessProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SYNCTITANBLESSPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _FillFromAreaExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA__FILLFROMAREAEXCEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::System::Void set_AreaGroup(::RPG::Client::RogueTournAreaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_AREAGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournClassicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournClassicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* RPG_Client_IRogueTournGame_get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_RPG_CLIENT_IROGUETOURNGAME_GET_LEVELINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueTournMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::IAFKJCICCOP* get_BlackboardInfo()
		{
			return ((::IAFKJCICCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::DFIFNLFNBLK* get_SettleResultFactory()
		{
			return ((::DFIFNLFNBLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::System::UInt32 get_TitanBlessProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_TITANBLESSPROGRESS_OFFSET))(this);
		}

		::System::Void set_TitanBlessProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_TITANBLESSPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPendingTitanBlessProgressUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this);
		}

		::System::Void set_HasPendingTitanBlessProgressUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_GET_ISFREEMODE_OFFSET))(this);
		}

		::System::Void set_IsFreeMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANGAMEDATA_SET_ISFREEMODE_OFFSET))(this, a1);
		}

	};
}
