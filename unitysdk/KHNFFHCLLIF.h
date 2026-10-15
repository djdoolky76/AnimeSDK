#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEPCKFHMMHD.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
class GHPFNOBNMAJ;
class PMOFCNKNJCA;
namespace System { class String; }

#define KHNFFHCLLIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB406490)
#define KHNFFHCLLIF_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xB406430)
#define KHNFFHCLLIF_GET_BPADD_OFFSET UNITYSDK_OFFSET(0xB406390)
#define KHNFFHCLLIF_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0xB406370)
#define KHNFFHCLLIF_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xB4062D0)
#define KHNFFHCLLIF_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0xB4063B0)
#define KHNFFHCLLIF_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xB406230)
#define KHNFFHCLLIF_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB406180)
#define KHNFFHCLLIF_GET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0xB4062B0)
#define KHNFFHCLLIF_GET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB406210)
#define KHNFFHCLLIF_GET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0xB4061D0)
#define KHNFFHCLLIF_GET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0xB4061F0)
#define KHNFFHCLLIF_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB406190)
#define KHNFFHCLLIF_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xB4063D0)
#define KHNFFHCLLIF_GET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0xB406270)
#define KHNFFHCLLIF_GET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0xB406290)
#define KHNFFHCLLIF_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0xB406250)
#define KHNFFHCLLIF_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB4063F0)
#define KHNFFHCLLIF_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0xB406470)
#define KHNFFHCLLIF_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xB406450)
#define KHNFFHCLLIF_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xB4061B0)
#define KHNFFHCLLIF_GET_SPADD_OFFSET UNITYSDK_OFFSET(0xB4062F0)
#define KHNFFHCLLIF_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0xB406310)
#define KHNFFHCLLIF_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0xB406350)
#define KHNFFHCLLIF_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xB406330)
#define KHNFFHCLLIF_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB406410)
#define KHNFFHCLLIF_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xB406440)
#define KHNFFHCLLIF_SET_BPADD_OFFSET UNITYSDK_OFFSET(0xB4063A0)
#define KHNFFHCLLIF_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0xB406380)
#define KHNFFHCLLIF_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xB4062E0)
#define KHNFFHCLLIF_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0xB4063C0)
#define KHNFFHCLLIF_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xB406240)
#define KHNFFHCLLIF_SET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0xB4062C0)
#define KHNFFHCLLIF_SET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0xB406220)
#define KHNFFHCLLIF_SET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0xB4061E0)
#define KHNFFHCLLIF_SET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0xB406200)
#define KHNFFHCLLIF_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB4061A0)
#define KHNFFHCLLIF_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xB4063E0)
#define KHNFFHCLLIF_SET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0xB406280)
#define KHNFFHCLLIF_SET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0xB4062A0)
#define KHNFFHCLLIF_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0xB406260)
#define KHNFFHCLLIF_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB406400)
#define KHNFFHCLLIF_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0xB406480)
#define KHNFFHCLLIF_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xB406460)
#define KHNFFHCLLIF_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xB4061C0)
#define KHNFFHCLLIF_SET_SPADD_OFFSET UNITYSDK_OFFSET(0xB406300)
#define KHNFFHCLLIF_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0xB406320)
#define KHNFFHCLLIF_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0xB406360)
#define KHNFFHCLLIF_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0xB406340)
#define KHNFFHCLLIF_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB406420)

inline static constexpr unsigned int KHNFFHCLLIF_TypeDefinitionIndex = 51938;

	class KHNFFHCLLIF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x20
		::Il2CppArray<::GHPFNOBNMAJ*>* _ShowHealList_k__BackingField; // 0x28
		::Il2CppArray<::PMOFCNKNJCA*>* _ShowDamageList_k__BackingField; // 0x30
		::Il2CppArray<::System::String*>* _LevelUpCostList_k__BackingField; // 0x38
		::System::String* _SkillTriggerKey_k__BackingField; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x50
		::System::Int32 _CoolDown_k__BackingField; // 0x58
		::System::Int32 _InitCoolDown_k__BackingField; // 0x5C
		::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x60
		::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x68
		::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0x70
		::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x78
		::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x80
		::DEPCKFHMMHD _Identifier_k__BackingField; // 0x88
		::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x90
		::System::UInt32 _LevelUpLevelCond_k__BackingField; // 0x94
		::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x98
		::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x9C
		::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0xA0
		::System::UInt32 _LevelUpRankCond_k__BackingField; // 0xA8
		::System::UInt32 _MaxLevel_k__BackingField; // 0xAC
		::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0xB0
		::System::Void _ctor(::DEPCKFHMMHD a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_CTOR_OFFSET))(this, a1);
		}

		::DEPCKFHMMHD get_Identifier()
		{
			return ((::DEPCKFHMMHD(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_SkillTriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SKILLTRIGGERKEY_OFFSET))(this);
		}

		::System::Void set_SkillTriggerKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SKILLTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelUpLevelCond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_LEVELUPLEVELCOND_OFFSET))(this);
		}

		::System::Void set_LevelUpLevelCond(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_LEVELUPLEVELCOND_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelUpRankCond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_LEVELUPRANKCOND_OFFSET))(this);
		}

		::System::Void set_LevelUpRankCond(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_LEVELUPRANKCOND_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_LevelUpCostList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_LEVELUPCOSTLIST_OFFSET))(this);
		}

		::System::Void set_LevelUpCostList(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_LEVELUPCOSTLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SHOWSTANCELIST_OFFSET))(this);
		}

		::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SHOWSTANCELIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::PMOFCNKNJCA*>* get_ShowDamageList()
		{
			return ((::Il2CppArray<::PMOFCNKNJCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SHOWDAMAGELIST_OFFSET))(this);
		}

		::System::Void set_ShowDamageList(::Il2CppArray<::PMOFCNKNJCA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PMOFCNKNJCA*>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SHOWDAMAGELIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::GHPFNOBNMAJ*>* get_ShowHealList()
		{
			return ((::Il2CppArray<::GHPFNOBNMAJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SHOWHEALLIST_OFFSET))(this);
		}

		::System::Void set_ShowHealList(::Il2CppArray<::GHPFNOBNMAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GHPFNOBNMAJ*>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SHOWHEALLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_InitCoolDown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_INITCOOLDOWN_OFFSET))(this);
		}

		::System::Void set_InitCoolDown(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_INITCOOLDOWN_OFFSET))(this, a1);
		}

		::System::Int32 get_CoolDown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_COOLDOWN_OFFSET))(this);
		}

		::System::Void set_CoolDown(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_COOLDOWN_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SPADD_OFFSET))(this);
		}

		::System::Void set_SPAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SPADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SPBASE_OFFSET))(this);
		}

		::System::Void set_SPBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SPBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SPNEED_OFFSET))(this);
		}

		::System::Void set_SPNeed(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SPNEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPMultipleRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SPMULTIPLERATIO_OFFSET))(this);
		}

		::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SPMULTIPLERATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_BPNEED_OFFSET))(this);
		}

		::System::Void set_BPNeed(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_BPNEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_BPADD_OFFSET))(this);
		}

		::System::Void set_BPAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_BPADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_DELAYRATIO_OFFSET))(this);
		}

		::System::Void set_DelayRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_DELAYRATIO_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SIMPLEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SIMPLEPARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType get_StanceDamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_STANCEDAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_STANCEDAMAGETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackType get_AttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_ATTACKTYPE_OFFSET))(this);
		}

		::System::Void set_AttackType(::RPG::GameCore::AttackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_ATTACKTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillEffect get_SkillEffect()
		{
			return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SKILLEFFECT_OFFSET))(this);
		}

		::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SKILLEFFECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SkillComboValueDelta()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
		}

		::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHNFFHCLLIF_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, a1);
		}

	};
