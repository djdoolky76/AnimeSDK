#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEOMEIAMNMB.h"
#include "unitysdk/HJCOLMNPKBK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BMCNDLNONMO;
class CCJBBHOBBEC;
class KFACLOGFNJF;
class LMNCBIDKHLF;
class MOOKMKEKMKC;
namespace RPG::Client { class ChessRogueDiceData; }
namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueNousDiceData; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET UNITYSDK_OFFSET(0xD454BB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET UNITYSDK_OFFSET(0xD454AB0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD453850)
#define RPG_CLIENT_CHESSROGUEDICEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD453D30)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICESURFACEDISPLAYDATAITEM_OFFSET UNITYSDK_OFFSET(0xD4573C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICETITLE_OFFSET UNITYSDK_OFFSET(0xD457510)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICEICON_OFFSET UNITYSDK_OFFSET(0xD4576A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETDICESURFACEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xD457270)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET UNITYSDK_OFFSET(0xD457C40)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET UNITYSDK_OFFSET(0xD4571C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEDESCEXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0xD457AC0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTBASEPARAM_OFFSET UNITYSDK_OFFSET(0xD457F50)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0xD457E00)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xD457960)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTICONPATH_OFFSET UNITYSDK_OFFSET(0xD4580A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GETSTARTEFFECTTOASTDESC_OFFSET UNITYSDK_OFFSET(0xD457800)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0xD458460)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xD458420)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0xD458880)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURBRANCHID_OFFSET UNITYSDK_OFFSET(0xD4584C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICEID_OFFSET UNITYSDK_OFFSET(0xD458610)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0xD4583E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESURFACEID_OFFSET UNITYSDK_OFFSET(0xD458690)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURROLLEDOUTSURFACEIDS_OFFSET UNITYSDK_OFFSET(0xD4587E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURSLOTID_OFFSET UNITYSDK_OFFSET(0xD458570)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD4583A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD458380)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET UNITYSDK_OFFSET(0xD4583C0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0xD458480)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD458400)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xD4584A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xD458440)
#define RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0xD4588A0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_HASPROTECTSPECIALTYPEMODIFIER_OFFSET UNITYSDK_OFFSET(0xD458200)
#define RPG_CLIENT_CHESSROGUEDICEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD453A40)
#define RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET UNITYSDK_OFFSET(0xD456D50)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET UNITYSDK_OFFSET(0xD458470)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xD458430)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET UNITYSDK_OFFSET(0xD458890)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET UNITYSDK_OFFSET(0xD4583F0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD4583B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD458390)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET UNITYSDK_OFFSET(0xD4583D0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0xD458490)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD458410)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xD4584B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET UNITYSDK_OFFSET(0xD458450)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET UNITYSDK_OFFSET(0xD4588B0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET UNITYSDK_OFFSET(0xD4541E0)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xD457170)
#define RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET UNITYSDK_OFFSET(0xD454840)
#define RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET UNITYSDK_OFFSET(0xD456DA0)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD456FC0)
#define RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xD456EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceInfo_TypeDefinitionIndex = 68884;

	class ChessRogueDiceInfo : public ::System::Object
	{
	public:
		::CCJBBHOBBEC* _CurDiceItem; // 0x10
		::RPG::Client::RogueNousDiceData* _RogueNousDiceData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceModifiers_k__BackingField; // 0x20
		::RPG::Client::ChessRogueDiceData* _ChessRogueDiceData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _DiceBranchModifiers_k__BackingField; // 0x30
		::EEOMEIAMNMB _CurDiceStatus_k__BackingField; // 0x38
		::System::Boolean _IsCheatRollUnlocked_k__BackingField; // 0x3C
		::System::Boolean _CanReRoll_k__BackingField; // 0x3D
		::System::Byte _padding0[0x2];
		::System::UInt32 _ReRollLeftNum_k__BackingField; // 0x40
		::System::Int32 _PassiveAccumulateValue_k__BackingField; // 0x44
		::System::UInt32 _GiveUpObtainCoin_k__BackingField; // 0x48
		::HJCOLMNPKBK _DiceType_k__BackingField; // 0x4C
		::System::UInt32 _CheatRollLeftNum_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void AddDiceModifier(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void AddDiceBranchModifier(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_ADDDICEBRANCHMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ResetDiceStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_RESETDICESTATUS_OFFSET))(this);
		}

		::System::Void SyncChessRogueDiceInfo(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCCHESSROGUEDICEINFO_OFFSET))(this, a1);
		}

		::System::Void SyncDicePassiveAccumulateValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCDICEPASSIVEACCUMULATEVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>* GetNousDiceSlots()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETNOUSDICESLOTS_OFFSET))(this);
		}

		::System::Void _RefreshDiceModifiers(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEMODIFIERS_OFFSET))(this, a1);
		}

		::System::Void _RefreshDiceBranchModifiers(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__REFRESHDICEBRANCHMODIFIERS_OFFSET))(this, a1);
		}

		::CCJBBHOBBEC* _CreateDiceItem(::KFACLOGFNJF* a1)
		{
			return ((::CCJBBHOBBEC*(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO__CREATEDICEITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>* GetDiceSurfaceDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETDICESURFACEDISPLAYDATALIST_OFFSET))(this);
		}

		::RPG::Client::ChessRogueDiceSurfaceDisplayData* GetCurDiceSurfaceDisplayDataItem()
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICESURFACEDISPLAYDATAITEM_OFFSET))(this);
		}

		::RPG::Client::TextID GetCurDiceTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETCURDICETITLE_OFFSET))(this);
		}

		::System::String* GetDiceIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETDICEICON_OFFSET))(this);
		}

		::System::String* GetStartEffectToastDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETSTARTEFFECTTOASTDESC_OFFSET))(this);
		}

		::System::String* GetPassiveEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetPassiveDescExtraEffect()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEDESCEXTRAEFFECT_OFFSET))(this);
		}

		::System::Void GetFullEffectDescWithExtraDesc(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETFULLEFFECTDESCWITHEXTRADESC_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPassiveEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTCOUNT_OFFSET))(this);
		}

		::System::Single GetPassiveEffectBaseParam()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTBASEPARAM_OFFSET))(this);
		}

		::System::String* GetPassiveEffectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GETPASSIVEEFFECTICONPATH_OFFSET))(this);
		}

		::System::Boolean HasProtectSpecialTypeModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_HASPROTECTSPECIALTYPEMODIFIER_OFFSET))(this);
		}

		::System::Void SyncRogueNousDiceBranchData(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SYNCROGUENOUSDICEBRANCHDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_DiceModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEMODIFIERS_OFFSET))(this);
		}

		::System::Void set_DiceModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEMODIFIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_DiceBranchModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICEBRANCHMODIFIERS_OFFSET))(this);
		}

		::System::Void set_DiceBranchModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICEBRANCHMODIFIERS_OFFSET))(this, a1);
		}

		::HJCOLMNPKBK get_DiceType()
		{
			return ((::HJCOLMNPKBK(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_DICETYPE_OFFSET))(this);
		}

		::System::Void set_DiceType(::HJCOLMNPKBK a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCOLMNPKBK))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_DICETYPE_OFFSET))(this, a1);
		}

		::EEOMEIAMNMB get_CurDiceStatus()
		{
			return ((::EEOMEIAMNMB(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESTATUS_OFFSET))(this);
		}

		::System::Void set_CurDiceStatus(::EEOMEIAMNMB a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEOMEIAMNMB))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CURDICESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCheatRollUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_ISCHEATROLLUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsCheatRollUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_ISCHEATROLLUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CheatRollLeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHEATROLLLEFTNUM_OFFSET))(this);
		}

		::System::Void set_CheatRollLeftNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHEATROLLLEFTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReRollLeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_REROLLLEFTNUM_OFFSET))(this);
		}

		::System::Void set_ReRollLeftNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_REROLLLEFTNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_CanReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CANREROLL_OFFSET))(this);
		}

		::System::Void set_CanReRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CANREROLL_OFFSET))(this, a1);
		}

		::System::UInt32 get_GiveUpObtainCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_GIVEUPOBTAINCOIN_OFFSET))(this);
		}

		::System::Void set_GiveUpObtainCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_GIVEUPOBTAINCOIN_OFFSET))(this, a1);
		}

		::System::Int32 get_PassiveAccumulateValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_PASSIVEACCUMULATEVALUE_OFFSET))(this);
		}

		::System::Void set_PassiveAccumulateValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_PASSIVEACCUMULATEVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurBranchID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURBRANCHID_OFFSET))(this);
		}

		::System::UInt32 get_CurSlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURSLOTID_OFFSET))(this);
		}

		::System::UInt32 get_CurDiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICEID_OFFSET))(this);
		}

		::System::UInt32 get_CurDiceSurfaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURDICESURFACEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurRolledOutSurfaceIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CURROLLEDOUTSURFACEIDS_OFFSET))(this);
		}

		::RPG::Client::ChessRogueDiceData* get_ChessRogueDiceData()
		{
			return ((::RPG::Client::ChessRogueDiceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_CHESSROGUEDICEDATA_OFFSET))(this);
		}

		::System::Void set_ChessRogueDiceData(::RPG::Client::ChessRogueDiceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueDiceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_CHESSROGUEDICEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceData* get_RogueNousDiceData()
		{
			return ((::RPG::Client::RogueNousDiceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_GET_ROGUENOUSDICEDATA_OFFSET))(this);
		}

		::System::Void set_RogueNousDiceData(::RPG::Client::RogueNousDiceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICEINFO_SET_ROGUENOUSDICEDATA_OFFSET))(this, a1);
		}

	};
}
