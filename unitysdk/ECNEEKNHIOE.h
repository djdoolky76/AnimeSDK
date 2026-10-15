#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;
class ECNEEKNHIOE;
class JAACNICGMHN;
class MALMDHMLGDE;
class MIEMPAICKAI;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECNEEKNHIOE_BFDIJBJKBMJ_OFFSET UNITYSDK_OFFSET(0x12D148B0)
#define ECNEEKNHIOE_CTOR_OFFSET UNITYSDK_OFFSET(0x12D13920)
#define ECNEEKNHIOE_FGBMNAINCEB_OFFSET UNITYSDK_OFFSET(0x12D14060)
#define ECNEEKNHIOE_FHIBBCCFNKI_OFFSET UNITYSDK_OFFSET(0x12D14840)
#define ECNEEKNHIOE_GET_BATTLEEVENTMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x12D14AA0)
#define ECNEEKNHIOE_GET_CURHP_OFFSET UNITYSDK_OFFSET(0x12D14910)
#define ECNEEKNHIOE_GET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x12D149F0)
#define ECNEEKNHIOE_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x12D14970)
#define ECNEEKNHIOE_GET_ENERGEBARSTATE_OFFSET UNITYSDK_OFFSET(0x12D14A70)
#define ECNEEKNHIOE_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12D147C0)
#define ECNEEKNHIOE_GET_HEADROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x12D14A50)
#define ECNEEKNHIOE_GET_INTENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x12D147E0)
#define ECNEEKNHIOE_GET_INTENTTYPEUISTATELIST_OFFSET UNITYSDK_OFFSET(0x12D14800)
#define ECNEEKNHIOE_GET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x12D14820)
#define ECNEEKNHIOE_GET_ISHAVINGSUPERSHIELD_OFFSET UNITYSDK_OFFSET(0x12D149B0)
#define ECNEEKNHIOE_GET_ISSHORTHPBAR_OFFSET UNITYSDK_OFFSET(0x12D14B10)
#define ECNEEKNHIOE_GET_ISSHOWSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0x12D14AF0)
#define ECNEEKNHIOE_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x12D14930)
#define ECNEEKNHIOE_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x12D14A10)
#define ECNEEKNHIOE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x12D14A30)
#define ECNEEKNHIOE_GET_PREVIEWHP_OFFSET UNITYSDK_OFFSET(0x12D14950)
#define ECNEEKNHIOE_GET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x12D14990)
#define ECNEEKNHIOE_GET_RANK_OFFSET UNITYSDK_OFFSET(0x12D149D0)
#define ECNEEKNHIOE_GET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x12D14A80)
#define ECNEEKNHIOE_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0x12D14A90)
#define ECNEEKNHIOE_GET_SUMMONEDENEMYLIST_OFFSET UNITYSDK_OFFSET(0x12D14AD0)
#define ECNEEKNHIOE_GET_SUMMONERENEMY_OFFSET UNITYSDK_OFFSET(0x12D14AB0)
#define ECNEEKNHIOE_HGIBBACOEBH_OFFSET UNITYSDK_OFFSET(0x12D140D0)
#define ECNEEKNHIOE_HMDIEDFGNEI_OFFSET UNITYSDK_OFFSET(0x12D13A40)
#define ECNEEKNHIOE_KEDGCMAEJAN_OFFSET UNITYSDK_OFFSET(0x12D143A0)
#define ECNEEKNHIOE_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x12D14400)
#define ECNEEKNHIOE_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x12D14770)
#define ECNEEKNHIOE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x12D14010)
#define ECNEEKNHIOE_SET_CURHP_OFFSET UNITYSDK_OFFSET(0x12D14920)
#define ECNEEKNHIOE_SET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x12D14A00)
#define ECNEEKNHIOE_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0x12D14980)
#define ECNEEKNHIOE_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12D147D0)
#define ECNEEKNHIOE_SET_HEADROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x12D14A60)
#define ECNEEKNHIOE_SET_INTENTTYPELIST_OFFSET UNITYSDK_OFFSET(0x12D147F0)
#define ECNEEKNHIOE_SET_INTENTTYPEUISTATELIST_OFFSET UNITYSDK_OFFSET(0x12D14810)
#define ECNEEKNHIOE_SET_ISBOSS_OFFSET UNITYSDK_OFFSET(0x12D14830)
#define ECNEEKNHIOE_SET_ISHAVINGSUPERSHIELD_OFFSET UNITYSDK_OFFSET(0x12D149C0)
#define ECNEEKNHIOE_SET_ISSHORTHPBAR_OFFSET UNITYSDK_OFFSET(0x12D14B20)
#define ECNEEKNHIOE_SET_ISSHOWSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0x12D14B00)
#define ECNEEKNHIOE_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x12D14940)
#define ECNEEKNHIOE_SET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x12D14A20)
#define ECNEEKNHIOE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x12D14A40)
#define ECNEEKNHIOE_SET_PREVIEWHP_OFFSET UNITYSDK_OFFSET(0x12D14960)
#define ECNEEKNHIOE_SET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x12D149A0)
#define ECNEEKNHIOE_SET_RANK_OFFSET UNITYSDK_OFFSET(0x12D149E0)
#define ECNEEKNHIOE_SET_SUMMONEDENEMYLIST_OFFSET UNITYSDK_OFFSET(0x12D14AE0)
#define ECNEEKNHIOE_SET_SUMMONERENEMY_OFFSET UNITYSDK_OFFSET(0x12D14AC0)

inline static constexpr unsigned int ECNEEKNHIOE_TypeDefinitionIndex = 81007;

	class ECNEEKNHIOE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MALMDHMLGDE*>* _BattleEventModifierHintList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* _IntentTypeList_k__BackingField; // 0x18
		::ECNEEKNHIOE* _SummonerEnemy_k__BackingField; // 0x20
		::System::String* _HeadRoundIconPath_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* _StatusList_k__BackingField; // 0x30
		::MIEMPAICKAI* _SpecialMarkState_k__BackingField; // 0x38
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x40
		::JAACNICGMHN* _EnergeBarState_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::ECNEEKNHIOE*>* _SummonedEnemyList_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* _IntentTypeUIStateList_k__BackingField; // 0x58
		::RPG::GameCore::FixPoint _MaxHP_k__BackingField; // 0x60
		::RPG::GameCore::FixPoint _PreviewHP_k__BackingField; // 0x68
		::RPG::GameCore::FixPoint _PreviewShield_k__BackingField; // 0x70
		::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x78
		::RPG::GameCore::FixPoint _CurHP_k__BackingField; // 0x80
		::RPG::Client::TextID _Name_k__BackingField; // 0x88
		::System::UInt32 _CurPhase_k__BackingField; // 0x98
		::RPG::GameCore::MonsterRank _Rank_k__BackingField; // 0x9C
		::System::UInt32 _MaxPhase_k__BackingField; // 0xA0
		::System::Boolean _IsBoss_k__BackingField; // 0xA4
		::System::Boolean _IsHavingSuperShield_k__BackingField; // 0xA5
		::System::Boolean _IsShowStatusDetail_k__BackingField; // 0xA6
		::System::Boolean _IsShortHPBar_k__BackingField; // 0xA7
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void FGBMNAINCEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_FGBMNAINCEB_OFFSET))(this);
		}

		::System::Void HGIBBACOEBH(::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_HGIBBACOEBH_OFFSET))(this, a1);
		}

		::System::Void HMDIEDFGNEI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_HMDIEDFGNEI_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_LACAPACNEPI_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_MJGKNFEILLI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* get_IntentTypeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_INTENTTYPELIST_OFFSET))(this);
		}

		::System::Void set_IntentTypeList(::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_INTENTTYPELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_IntentTypeUIStateList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_INTENTTYPEUISTATELIST_OFFSET))(this);
		}

		::System::Void set_IntentTypeUIStateList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_INTENTTYPEUISTATELIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_ISBOSS_OFFSET))(this);
		}

		::System::Void set_IsBoss(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_ISBOSS_OFFSET))(this, a1);
		}

		::System::Boolean FHIBBCCFNKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_FHIBBCCFNKI_OFFSET))(this);
		}

		::RPG::GameCore::CharacterModelComponent* BFDIJBJKBMJ()
		{
			return ((::RPG::GameCore::CharacterModelComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_BFDIJBJKBMJ_OFFSET))(this);
		}

		::RPG::GameCore::CharacterDataComponent* KEDGCMAEJAN()
		{
			return ((::RPG::GameCore::CharacterDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_KEDGCMAEJAN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_CURHP_OFFSET))(this);
		}

		::System::Void set_CurHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_CURHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_MAXHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_PREVIEWHP_OFFSET))(this);
		}

		::System::Void set_PreviewHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_PREVIEWHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_CURSHIELD_OFFSET))(this);
		}

		::System::Void set_CurShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_CURSHIELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_PREVIEWSHIELD_OFFSET))(this);
		}

		::System::Void set_PreviewShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_PREVIEWSHIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHavingSuperShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_ISHAVINGSUPERSHIELD_OFFSET))(this);
		}

		::System::Void set_IsHavingSuperShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_ISHAVINGSUPERSHIELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterRank get_Rank()
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::RPG::GameCore::MonsterRank a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_CURPHASE_OFFSET))(this);
		}

		::System::Void set_CurPhase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_CURPHASE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_MAXPHASE_OFFSET))(this);
		}

		::System::Void set_MaxPhase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_MAXPHASE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_HeadRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_HEADROUNDICONPATH_OFFSET))(this);
		}

		::System::Void set_HeadRoundIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_HEADROUNDICONPATH_OFFSET))(this, a1);
		}

		::JAACNICGMHN* get_EnergeBarState()
		{
			return ((::JAACNICGMHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_ENERGEBARSTATE_OFFSET))(this);
		}

		::MIEMPAICKAI* get_SpecialMarkState()
		{
			return ((::MIEMPAICKAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_SPECIALMARKSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* get_StatusList()
		{
			return ((::System::Collections::Generic::List_1<::AOFHFKPKKJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_STATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MALMDHMLGDE*>* get_BattleEventModifierHintList()
		{
			return ((::System::Collections::Generic::List_1<::MALMDHMLGDE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_BATTLEEVENTMODIFIERHINTLIST_OFFSET))(this);
		}

		::ECNEEKNHIOE* get_SummonerEnemy()
		{
			return ((::ECNEEKNHIOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_SUMMONERENEMY_OFFSET))(this);
		}

		::System::Void set_SummonerEnemy(::ECNEEKNHIOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_SUMMONERENEMY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ECNEEKNHIOE*>* get_SummonedEnemyList()
		{
			return ((::System::Collections::Generic::List_1<::ECNEEKNHIOE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_SUMMONEDENEMYLIST_OFFSET))(this);
		}

		::System::Void set_SummonedEnemyList(::System::Collections::Generic::List_1<::ECNEEKNHIOE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ECNEEKNHIOE*>*))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_SUMMONEDENEMYLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowStatusDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_ISSHOWSTATUSDETAIL_OFFSET))(this);
		}

		::System::Void set_IsShowStatusDetail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_ISSHOWSTATUSDETAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShortHPBar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_GET_ISSHORTHPBAR_OFFSET))(this);
		}

		::System::Void set_IsShortHPBar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNEEKNHIOE_SET_ISSHORTHPBAR_OFFSET))(this, a1);
		}

	};
