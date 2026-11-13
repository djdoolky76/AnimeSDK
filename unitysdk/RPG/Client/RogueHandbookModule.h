#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"
class BPHIKPCNBHM;
class CIGDBCKOFBN;
class NHGJEIHKKHB;
namespace RPG::Client { class RogueHandbookAeonsData; }
namespace RPG::Client { class RogueHandbookBuffData; }
namespace RPG::Client { class RogueHandbookBuffTypeRewardData; }
namespace RPG::Client { class RogueHandbookMiracleData; }
namespace RPG::Client { class RogueHandbookRandomEventData; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueHandBookEventTypeRow; }
namespace RPG::GameCore { class RogueHandBookMiracleTypeRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKMODULE_CLEARUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0x1CBFEEA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFE5B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBFE9A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETALLSORTEDBUFF_OFFSET UNITYSDK_OFFSET(0x1CBFF510)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEEVENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x1CC01000)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEMIRACLETYPELIST_OFFSET UNITYSDK_OFFSET(0x1CC004D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1CC02830)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETDEFAULTSELECTAEONINDEX_OFFSET UNITYSDK_OFFSET(0x1CC00C70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0x1CC02A00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x1CC028C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC02AE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1CC02950)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMUNLOCKAEONIMG_OFFSET UNITYSDK_OFFSET(0x1CC00D90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDBUFFBYTYPE_OFFSET UNITYSDK_OFFSET(0x1CBFF560)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDMIRACLE_OFFSET UNITYSDK_OFFSET(0x1CBFFE30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDRANDOMEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1CC01610)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AEONSMAP_OFFSET UNITYSDK_OFFSET(0x1CC04D80)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E80)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1CC04EA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1CC04EE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1CC04EC0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFSMAP_OFFSET UNITYSDK_OFFSET(0x1CC04DA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFTYPEREWARDQUESTDATAS_OFFSET UNITYSDK_OFFSET(0x1CC01FD0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_MIRACLESMAP_OFFSET UNITYSDK_OFFSET(0x1CC04DC0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_RANDOMEVENTSMAP_OFFSET UNITYSDK_OFFSET(0x1CC04DE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1CC04E40)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASAEONUNREAD_OFFSET UNITYSDK_OFFSET(0x1CC00F00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASBUFFTYPEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1CC01D20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASHANDBOOKREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1CC01CB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASMIRACLEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1CC01E20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_HASRANDOMEVENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1CC01F00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_INITALLSHOWDATAS_OFFSET UNITYSDK_OFFSET(0x1CBFE930)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1CBFE8A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_ISBUFFTYPEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1CC02030)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_REFRESHSCHEDULESTATUSANDUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0x1CC02190)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SETUNLOCKEDAEONREADED_OFFSET UNITYSDK_OFFSET(0x1CC01AB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AEONSMAP_OFFSET UNITYSDK_OFFSET(0x1CC04D90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1CC04EB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1CC04EF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1CC04ED0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_BUFFSMAP_OFFSET UNITYSDK_OFFSET(0x1CC04DB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_MIRACLESMAP_OFFSET UNITYSDK_OFFSET(0x1CC04DD0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_RANDOMEVENTSMAP_OFFSET UNITYSDK_OFFSET(0x1CC04DF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKAEONSNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E10)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E30)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1CC04E70)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1CC04E50)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CBFEBE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCEVENTSCHEDULESTATUSBYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1CC04C90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCMIRACLESCHEDULESTATUSBYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1CC04BA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CHECKSHOWROGUEHANDBOOKBUFF_OFFSET UNITYSDK_OFFSET(0x1CC04910)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1CC03EE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x1CC04220)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__GETSCHEDULESTATUSANDCACHE_OFFSET UNITYSDK_OFFSET(0x1CC00AB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEAEONDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBFEF00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEBUFFDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBFF0F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEMIRACLEDATASBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBFF320)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__INITROGUEBUFFTYPEREWARD_OFFSET UNITYSDK_OFFSET(0x1CC04970)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDGETROGUEHANDBOOKDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1CC02B90)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC03C80)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEEVENTHANDBOOKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC046D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEROGUEMIRACLEHANDBOOKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC03A80)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHBUFFSCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0x1CC02240)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHEVENTSCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0x1CC02610)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHMIRACLESCHEDULESTATUS_OFFSET UNITYSDK_OFFSET(0x1CC02430)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKBUFFNUM_OFFSET UNITYSDK_OFFSET(0x1CC040C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKEVENTNUM_OFFSET UNITYSDK_OFFSET(0x1CC045A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKMIRACLENUM_OFFSET UNITYSDK_OFFSET(0x1CC043C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEAEONDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0x1CC02CC0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEBUFFDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0x1CC02E10)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEMIRACLEDATASBYSERVER_OFFSET UNITYSDK_OFFSET(0x1CC02EF0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUERANDOMEVENTDATABYSERVER_OFFSET UNITYSDK_OFFSET(0x1CC031D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule_TypeDefinitionIndex = 69318;

	class RogueHandbookModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* _RandomEventsMap_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* _MiraclesMap_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _ActivityModuleStatusCache; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::UInt32>* _NPCProgress2HandbookEventID; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* _BuffsMap_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>* _BuffTypeRewardQuestDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* _AeonsMap_k__BackingField; // 0x40
		::System::UInt32 _UnlockBuffNum_k__BackingField; // 0x48
		::System::Nullable_1<::System::UInt32> _ReadedAeonsNum; // 0x4C
		::System::UInt32 _AvailableAeonsNum_k__BackingField; // 0x54
		::System::UInt32 _UnlockMiracleNum_k__BackingField; // 0x58
		::System::UInt32 _AvailableMiracleNum_k__BackingField; // 0x5C
		::System::UInt32 _UnlockEventNum_k__BackingField; // 0x60
		::System::UInt32 _AvailableBuffNum_k__BackingField; // 0x64
		::System::Boolean _IsInitedAllShowDatas; // 0x68
		::System::Byte _padding0[0x3];
		::System::UInt32 _UnlockAeonsNum_k__BackingField; // 0x6C
		::System::UInt32 _AvailableEventNum_k__BackingField; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void ClearUnlockNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_CLEARUNLOCKNUM_OFFSET))(this);
		}

		::System::Void InitAllShowDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_INITALLSHOWDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>* GetAllSortedBuff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETALLSORTEDBUFF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>* GetSortedBuffByType(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDBUFFBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookMiracleData*>* GetSortedMiracle(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookMiracleData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDMIRACLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookMiracleTypeRow*>* GetAvailableMiracleTypeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookMiracleTypeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEMIRACLETYPELIST_OFFSET))(this);
		}

		::System::UInt32 GetDefaultSelectAeonIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETDEFAULTSELECTAEONINDEX_OFFSET))(this);
		}

		::System::String* GetRandomUnlockAeonImg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMUNLOCKAEONIMG_OFFSET))(this);
		}

		::System::Boolean HasAeonUnread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASAEONUNREAD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookEventTypeRow*>* GetAvailableEventTypeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueHandBookEventTypeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETAVAILABLEEVENTTYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookRandomEventData*>* GetSortedRandomEventData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookRandomEventData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETSORTEDRANDOMEVENTDATA_OFFSET))(this, a1);
		}

		::System::Void SetUnlockedAeonReaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SETUNLOCKEDAEONREADED_OFFSET))(this);
		}

		::System::Boolean HasHandbookRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASHANDBOOKREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasBuffTypeRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASBUFFTYPEREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsBuffTypeRewardCanTake(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_ISBUFFTYPEREWARDCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean HasMiracleRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASMIRACLEREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasRandomEventRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_HASRANDOMEVENTREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void RefreshScheduleStatusAndUnlockNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_REFRESHSCHEDULESTATUSANDUNLOCKNUM_OFFSET))(this);
		}

		::RPG::Client::RogueHandbookBuffData* GetBuffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookMiracleData* GetMiracleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookRandomEventData* GetRandomEventData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookRandomEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookMiracleData* GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookRandomEventData* GetRandomEventDataByNPCProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueHandbookRandomEventData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GETRANDOMEVENTDATABYNPCPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueHandbookDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDGETROGUEHANDBOOKDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeRogueMiracleHandbookRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEROGUEMIRACLEHANDBOOKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueHandbookDataUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeEventHandbookRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__ONCMDTAKEEVENTHANDBOOKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateRogueAeonDatasByServer(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEAEONDATASBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _UpdateRogueBuffDatasByServer(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEBUFFDATASBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _UpdateRogueMiracleDatasByServer(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUEMIRACLEDATASBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _UpdateRogueRandomEventDataByServer(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__UPDATEROGUERANDOMEVENTDATABYSERVER_OFFSET))(this, a1);
		}

		::System::Void _InitAllRogueAeonDatasByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEAEONDATASBYEXCEL_OFFSET))(this);
		}

		::System::Void _InitAllRogueBuffDatasByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEBUFFDATASBYEXCEL_OFFSET))(this);
		}

		::System::Void _InitAllRogueMiracleDatasByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITALLROGUEMIRACLEDATASBYEXCEL_OFFSET))(this);
		}

		::RPG::Client::RogueHandbookBuffData* _CreateOrUpdateRogueBuffData(::BPHIKPCNBHM* a1)
		{
			return ((::RPG::Client::RogueHandbookBuffData*(*)(::PVOID, ::BPHIKPCNBHM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueHandbookMiracleData* _CreateOrUpdateRogueMiracleData(::CIGDBCKOFBN* a1)
		{
			return ((::RPG::Client::RogueHandbookMiracleData*(*)(::PVOID, ::CIGDBCKOFBN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CREATEORUPDATEROGUEMIRACLEDATA_OFFSET))(this, a1);
		}

		::System::Boolean _CheckShowRogueHandBookBuff(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CHECKSHOWROGUEHANDBOOKBUFF_OFFSET))(this, a1);
		}

		::System::Void _InitRogueBuffTypeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__INITROGUEBUFFTYPEREWARD_OFFSET))(this);
		}

		::System::Boolean _GetScheduleStatusAndCache(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__GETSCHEDULESTATUSANDCACHE_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffScheduleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHBUFFSCHEDULESTATUS_OFFSET))(this);
		}

		::System::Void _RefreshMiracleScheduleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHMIRACLESCHEDULESTATUS_OFFSET))(this);
		}

		::System::Void _RefreshEventScheduleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHEVENTSCHEDULESTATUS_OFFSET))(this);
		}

		::System::Boolean _CalcMiracleScheduleStatusByTypeList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCMIRACLESCHEDULESTATUSBYTYPELIST_OFFSET))(this, a1);
		}

		::System::Boolean _CalcEventScheduleStatusByTypeList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__CALCEVENTSCHEDULESTATUSBYTYPELIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockBuffNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKBUFFNUM_OFFSET))(this);
		}

		::System::Void _RefreshUnlockMiracleNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKMIRACLENUM_OFFSET))(this);
		}

		::System::Void _RefreshUnlockEventNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE__REFRESHUNLOCKEVENTNUM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* get_AeonsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AEONSMAP_OFFSET))(this);
		}

		::System::Void set_AeonsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookAeonsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AEONSMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* get_BuffsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFSMAP_OFFSET))(this);
		}

		::System::Void set_BuffsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_BUFFSMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* get_MiraclesMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_MIRACLESMAP_OFFSET))(this);
		}

		::System::Void set_MiraclesMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_MIRACLESMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* get_RandomEventsMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_RANDOMEVENTSMAP_OFFSET))(this);
		}

		::System::Void set_RandomEventsMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueHandbookRandomEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_RANDOMEVENTSMAP_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockAeonsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKAEONSNUM_OFFSET))(this);
		}

		::System::Void set_UnlockAeonsNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKAEONSNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockBuffNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKBUFFNUM_OFFSET))(this);
		}

		::System::Void set_UnlockBuffNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKBUFFNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockMiracleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKMIRACLENUM_OFFSET))(this);
		}

		::System::Void set_UnlockMiracleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKMIRACLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockEventNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_UNLOCKEVENTNUM_OFFSET))(this);
		}

		::System::Void set_UnlockEventNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_UNLOCKEVENTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableAeonsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEAEONSNUM_OFFSET))(this);
		}

		::System::Void set_AvailableAeonsNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEAEONSNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableBuffNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEBUFFNUM_OFFSET))(this);
		}

		::System::Void set_AvailableBuffNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEBUFFNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableMiracleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEMIRACLENUM_OFFSET))(this);
		}

		::System::Void set_AvailableMiracleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEMIRACLENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableEventNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_AVAILABLEEVENTNUM_OFFSET))(this);
		}

		::System::Void set_AvailableEventNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_SET_AVAILABLEEVENTNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>* get_BuffTypeRewardQuestDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueHandbookBuffTypeRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE_GET_BUFFTYPEREWARDQUESTDATAS_OFFSET))(this);
		}

	};
}
