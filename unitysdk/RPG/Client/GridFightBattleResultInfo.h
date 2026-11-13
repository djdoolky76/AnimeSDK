#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJJIFGINJAJ.h"
#include "unitysdk/System/Object.h"
class ELDJBEKOLHB;
namespace RPG::Client { class GridFightBattleResultDropInfo; }
namespace RPG::Client { class GridFightBattleResultHpChangeInfo; }
namespace RPG::Client { class GridFightBattleResultInfo; }
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C739030)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7390C0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C73BCC0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPCOINADD_OFFSET UNITYSDK_OFFSET(0x1C73BD50)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPITEMADD_OFFSET UNITYSDK_OFFSET(0x1C73C230)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPORBADD_OFFSET UNITYSDK_OFFSET(0x1C73C510)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPROLEADD_OFFSET UNITYSDK_OFFSET(0x1C73BF50)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ADDEXP_OFFSET UNITYSDK_OFFSET(0x1C73C9D0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFFECTEDPETPALCONFIG_OFFSET UNITYSDK_OFFSET(0x1C73CC40)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C73CC60)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFFECTEDPETPALID_OFFSET UNITYSDK_OFFSET(0x1C73CC80)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFTEREXP_OFFSET UNITYSDK_OFFSET(0x1C73CA70)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFTERLEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1C73CA90)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1C73CA50)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C73C950)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDALL_OFFSET UNITYSDK_OFFSET(0x1C73CCF0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDBASIC_OFFSET UNITYSDK_OFFSET(0x1C73CBA0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDINTEREST_OFFSET UNITYSDK_OFFSET(0x1C73CBC0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDKEEPWIN_OFFSET UNITYSDK_OFFSET(0x1C73CBE0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1C73CA10)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CURLEFTHP_OFFSET UNITYSDK_OFFSET(0x1C73C990)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CURLEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1C73CA30)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x1C73C9F0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1C73CD60)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_DEADLINEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C73CB80)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_DROPLIST_OFFSET UNITYSDK_OFFSET(0x1C73CD40)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_HPCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x1C73CD80)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISFAIL_OFFSET UNITYSDK_OFFSET(0x1C73CAF0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0x1C73CAB0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISLOSE_OFFSET UNITYSDK_OFFSET(0x1C73CAD0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISPERFECTFINISH_OFFSET UNITYSDK_OFFSET(0x1C73CB40)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_KEEPWINTIMES_OFFSET UNITYSDK_OFFSET(0x1C73CC00)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_LASTKEEPWINTIMES_OFFSET UNITYSDK_OFFSET(0x1C73CC20)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C73C9B0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x1C73CB60)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1C73C930)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1C73C970)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ADDEXP_OFFSET UNITYSDK_OFFSET(0x1C73C9E0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFFECTEDPETPALCONFIG_OFFSET UNITYSDK_OFFSET(0x1C73CC50)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFFECTEDPETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C73CC70)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFTEREXP_OFFSET UNITYSDK_OFFSET(0x1C73CA80)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFTERLEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1C73CAA0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1C73CA60)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C73C960)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_COINADDBASIC_OFFSET UNITYSDK_OFFSET(0x1C73CBB0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_COINADDINTEREST_OFFSET UNITYSDK_OFFSET(0x1C73CBD0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_COINADDKEEPWIN_OFFSET UNITYSDK_OFFSET(0x1C73CBF0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1C73CA20)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CURLEFTHP_OFFSET UNITYSDK_OFFSET(0x1C73C9A0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CURLEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x1C73CA40)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x1C73CA00)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1C73CD70)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_DEADLINEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C73CB90)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_DROPLIST_OFFSET UNITYSDK_OFFSET(0x1C73CD50)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_HPCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x1C73CD90)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0x1C73CAC0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ISLOSE_OFFSET UNITYSDK_OFFSET(0x1C73CAE0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ISPERFECTFINISH_OFFSET UNITYSDK_OFFSET(0x1C73CB50)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_KEEPWINTIMES_OFFSET UNITYSDK_OFFSET(0x1C73CC10)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_LASTKEEPWINTIMES_OFFSET UNITYSDK_OFFSET(0x1C73CC30)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1C73C9C0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x1C73CB70)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1C73C940)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1C73C980)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO__SYNC_OFFSET UNITYSDK_OFFSET(0x1C7390D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultInfo_TypeDefinitionIndex = 65857;

	class GridFightBattleResultInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPetPalEffectConfig* _AffectedPetPalEffectConfig_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x18
		::RPG::Client::GridFightPetPalConfig* _AffectedPetPalConfig_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::MJJIFGINJAJ, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultDropInfo*>*>* _DropList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultHpChangeInfo*>* _HpChangeInfos_k__BackingField; // 0x30
		::System::UInt32 _AfterLevelUpNeedExp_k__BackingField; // 0x38
		::System::UInt32 _CurLevel_k__BackingField; // 0x3C
		::System::UInt32 _CoinAddInterest_k__BackingField; // 0x40
		::System::UInt32 _CurExp_k__BackingField; // 0x44
		::System::UInt32 _CoinAddBasic_k__BackingField; // 0x48
		::System::UInt32 _AfterLevel_k__BackingField; // 0x4C
		::System::UInt32 _KeepWinTimes_k__BackingField; // 0x50
		::System::UInt32 _ProgressPercent_k__BackingField; // 0x54
		::System::UInt32 _SectionID_k__BackingField; // 0x58
		::System::UInt32 _AfterExp_k__BackingField; // 0x5C
		::System::UInt32 _CurLeftHP_k__BackingField; // 0x60
		::System::UInt32 _ChapterID_k__BackingField; // 0x64
		::System::Boolean _IsPerfectFinish_k__BackingField; // 0x68
		::System::Boolean _IsLevelUp_k__BackingField; // 0x69
		::System::Boolean _IsLose_k__BackingField; // 0x6A
		::System::Byte _padding0[0x1];
		::System::UInt32 _CurLevelUpNeedExp_k__BackingField; // 0x6C
		::System::UInt32 _MaxHP_k__BackingField; // 0x70
		::System::UInt32 _AddExp_k__BackingField; // 0x74
		::System::UInt32 _RouteID_k__BackingField; // 0x78
		::System::UInt32 _DeadLinePercent_k__BackingField; // 0x7C
		::System::UInt32 _LastKeepWinTimes_k__BackingField; // 0x80
		::System::UInt32 _CoinAddKeepWin_k__BackingField; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBattleResultInfo* Create(::ELDJBEKOLHB* a1)
		{
			return ((::RPG::Client::GridFightBattleResultInfo*(*)(::ELDJBEKOLHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetDropCoinAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPCOINADD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetDropRoleAdd()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPROLEADD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetDropItemAdd()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPITEMADD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* GetDropOrbAdd()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GETDROPORBADD_OFFSET))(this);
		}

		::System::Void _Sync(::ELDJBEKOLHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELDJBEKOLHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO__SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Void set_ChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_SECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLeftHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CURLEFTHP_OFFSET))(this);
		}

		::System::Void set_CurLeftHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CURLEFTHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ADDEXP_OFFSET))(this);
		}

		::System::Void set_AddExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ADDEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Void set_CurLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CURLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CUREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevelUpNeedExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_CURLEVELUPNEEDEXP_OFFSET))(this);
		}

		::System::Void set_CurLevelUpNeedExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_CURLEVELUPNEEDEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_AfterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFTERLEVEL_OFFSET))(this);
		}

		::System::Void set_AfterLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFTERLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_AfterExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFTEREXP_OFFSET))(this);
		}

		::System::Void set_AfterExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFTEREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_AfterLevelUpNeedExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFTERLEVELUPNEEDEXP_OFFSET))(this);
		}

		::System::Void set_AfterLevelUpNeedExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFTERLEVELUPNEEDEXP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISLEVELUP_OFFSET))(this);
		}

		::System::Void set_IsLevelUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ISLEVELUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISLOSE_OFFSET))(this);
		}

		::System::Void set_IsLose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ISLOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISFAIL_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_ISPERFECTFINISH_OFFSET))(this);
		}

		::System::Void set_IsPerfectFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_ISPERFECTFINISH_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_PROGRESSPERCENT_OFFSET))(this);
		}

		::System::Void set_ProgressPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_PROGRESSPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_DeadLinePercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_DEADLINEPERCENT_OFFSET))(this);
		}

		::System::Void set_DeadLinePercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_DEADLINEPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinAddBasic()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDBASIC_OFFSET))(this);
		}

		::System::Void set_CoinAddBasic(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_COINADDBASIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinAddInterest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDINTEREST_OFFSET))(this);
		}

		::System::Void set_CoinAddInterest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_COINADDINTEREST_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinAddKeepWin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDKEEPWIN_OFFSET))(this);
		}

		::System::Void set_CoinAddKeepWin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_COINADDKEEPWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_KeepWinTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_KEEPWINTIMES_OFFSET))(this);
		}

		::System::Void set_KeepWinTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_KEEPWINTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastKeepWinTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_LASTKEEPWINTIMES_OFFSET))(this);
		}

		::System::Void set_LastKeepWinTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_LASTKEEPWINTIMES_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalConfig* get_AffectedPetPalConfig()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFFECTEDPETPALCONFIG_OFFSET))(this);
		}

		::System::Void set_AffectedPetPalConfig(::RPG::Client::GridFightPetPalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFFECTEDPETPALCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_AffectedPetPalEffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void set_AffectedPetPalEffectConfig(::RPG::Client::GridFightPetPalEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_AFFECTEDPETPALEFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_AffectedPetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_AFFECTEDPETPALID_OFFSET))(this);
		}

		::System::UInt32 get_CoinAddAll()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_COINADDALL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::MJJIFGINJAJ, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultDropInfo*>*>* get_DropList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::MJJIFGINJAJ, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultDropInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_DROPLIST_OFFSET))(this);
		}

		::System::Void set_DropList(::System::Collections::Generic::Dictionary_2<::MJJIFGINJAJ, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultDropInfo*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MJJIFGINJAJ, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultDropInfo*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_DROPLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void set_DamageStatistics(::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_DAMAGESTATISTICS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultHpChangeInfo*>* get_HpChangeInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultHpChangeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_GET_HPCHANGEINFOS_OFFSET))(this);
		}

		::System::Void set_HpChangeInfos(::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultHpChangeInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBattleResultHpChangeInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO_SET_HPCHANGEINFOS_OFFSET))(this, a1);
		}

	};
}
