#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGCJIEGAOLH.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KHDJLEELKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x19789250)
#define KHDJLEELKHD_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x197891F0)
#define KHDJLEELKHD_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x19789150)
#define KHDJLEELKHD_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x19789130)
#define KHDJLEELKHD_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x19789170)
#define KHDJLEELKHD_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x19789070)
#define KHDJLEELKHD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19789020)
#define KHDJLEELKHD_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x19789030)
#define KHDJLEELKHD_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x19789190)
#define KHDJLEELKHD_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x19789090)
#define KHDJLEELKHD_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x197891B0)
#define KHDJLEELKHD_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x19789230)
#define KHDJLEELKHD_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x19789210)
#define KHDJLEELKHD_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x19789050)
#define KHDJLEELKHD_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x197890B0)
#define KHDJLEELKHD_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x197890D0)
#define KHDJLEELKHD_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x19789110)
#define KHDJLEELKHD_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x197890F0)
#define KHDJLEELKHD_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x197891D0)
#define KHDJLEELKHD_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x19789200)
#define KHDJLEELKHD_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x19789160)
#define KHDJLEELKHD_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x19789140)
#define KHDJLEELKHD_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x19789180)
#define KHDJLEELKHD_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x19789080)
#define KHDJLEELKHD_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x19789040)
#define KHDJLEELKHD_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x197891A0)
#define KHDJLEELKHD_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x197890A0)
#define KHDJLEELKHD_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x197891C0)
#define KHDJLEELKHD_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x19789240)
#define KHDJLEELKHD_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x19789220)
#define KHDJLEELKHD_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x19789060)
#define KHDJLEELKHD_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x197890C0)
#define KHDJLEELKHD_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x197890E0)
#define KHDJLEELKHD_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x19789120)
#define KHDJLEELKHD_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x19789100)
#define KHDJLEELKHD_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x197891E0)

inline static constexpr unsigned int KHDJLEELKHD_TypeDefinitionIndex = 53037;

	class KHDJLEELKHD : public ::System::Object
	{
	public:
		::System::String* _SkillTriggerKey_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x50
		::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x58
		::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x5C
		::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x60
		::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0x68
		::IGCJIEGAOLH _Identifier_k__BackingField; // 0x70
		::System::UInt32 _MaxLevel_k__BackingField; // 0x78
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x80
		::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x88
		::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x90
		::System::Void _ctor(::IGCJIEGAOLH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + KHDJLEELKHD_CTOR_OFFSET))(this, a1);
		}

		::IGCJIEGAOLH get_Identifier()
		{
			return ((::IGCJIEGAOLH(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_SkillTriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SKILLTRIGGERKEY_OFFSET))(this);
		}

		::System::Void set_SkillTriggerKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SKILLTRIGGERKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SHOWSTANCELIST_OFFSET))(this);
		}

		::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SHOWSTANCELIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SPADD_OFFSET))(this);
		}

		::System::Void set_SPAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SPADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SPBASE_OFFSET))(this);
		}

		::System::Void set_SPBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SPBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SPNEED_OFFSET))(this);
		}

		::System::Void set_SPNeed(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SPNEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SPMultipleRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SPMULTIPLERATIO_OFFSET))(this);
		}

		::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SPMULTIPLERATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_BPNEED_OFFSET))(this);
		}

		::System::Void set_BPNeed(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_BPNEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_BPADD_OFFSET))(this);
		}

		::System::Void set_BPAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_BPADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_DELAYRATIO_OFFSET))(this);
		}

		::System::Void set_DelayRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_DELAYRATIO_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SIMPLEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SIMPLEPARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType get_StanceDamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_STANCEDAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_STANCEDAMAGETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackType get_AttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_ATTACKTYPE_OFFSET))(this);
		}

		::System::Void set_AttackType(::RPG::GameCore::AttackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_ATTACKTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillEffect get_SkillEffect()
		{
			return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SKILLEFFECT_OFFSET))(this);
		}

		::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SKILLEFFECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SkillComboValueDelta()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDJLEELKHD_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
		}

		::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHDJLEELKHD_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, a1);
		}

	};
