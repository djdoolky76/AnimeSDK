#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHGMEDDCHLH.h"
#include "unitysdk/MPHOONLPCGA.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GHPFNOBNMAJ;
class PMOFCNKNJCA;
namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }
namespace RPG::GameCore { class SkillConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARSKILLROWDATA_ADDPARAMMODIFY_OFFSET UNITYSDK_OFFSET(0xF033B40)
#define RPG_GAMECORE_AVATARSKILLROWDATA_APPLYPARAMMODIFY_OFFSET UNITYSDK_OFFSET(0xF033CC0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF037E80)
#define RPG_GAMECORE_AVATARSKILLROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF033580)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_ATTACKDAMAGETYPEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xF035E20)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xF035E70)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_BPADD_OFFSET UNITYSDK_OFFSET(0xF0354B0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0xF0351E0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xF033E10)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xF034780)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0xF035780)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_DISPLAYATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xF036E50)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xF036FB0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0xF036D00)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_INITCOOLDOWN_OFFSET UNITYSDK_OFFSET(0xF034540)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xF037E60)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVELUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0xF037970)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVELUPLEVELCOND_OFFSET UNITYSDK_OFFSET(0xF037710)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVELUPRANKCOND_OFFSET UNITYSDK_OFFSET(0xF037840)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF0374B0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xF0375E0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xF035A60)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_PREADDMODIFIERLIST_OFFSET UNITYSDK_OFFSET(0xF037AA0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_PRECALEQUALSPLITTARGET_OFFSET UNITYSDK_OFFSET(0xF036200)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_RATEDEXRANKIDS_OFFSET UNITYSDK_OFFSET(0xF037D10)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_RATEDRANKID_OFFSET UNITYSDK_OFFSET(0xF037BE0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_RATEDSKILLTREEID_OFFSET UNITYSDK_OFFSET(0xF037AB0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xF033A30)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWDAMAGELIST_OFFSET UNITYSDK_OFFSET(0xF0342E0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWEXRANKTAG_OFFSET UNITYSDK_OFFSET(0xF037E40)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWHEALLIST_OFFSET UNITYSDK_OFFSET(0xF034410)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0xF0341B0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xF0370E0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xF035BA0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SIMPLESKILLDESC_OFFSET UNITYSDK_OFFSET(0xF036B60)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0xF0360D0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xF0369C0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xF035FA0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLICON_OFFSET UNITYSDK_OFFSET(0xF036740)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xF033E20)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xF036260)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLNEED_OFFSET UNITYSDK_OFFSET(0xF036E60)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xF036400)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xF033F50)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLTYPEDESC_OFFSET UNITYSDK_OFFSET(0xF0365A0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPADD_OFFSET UNITYSDK_OFFSET(0xF0349C0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0xF034C90)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0xF0350A0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xF034DD0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_STANCEDAMAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xF037210)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xF035CE0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_GET_ULTRASKILLICON_OFFSET UNITYSDK_OFFSET(0xF036880)
#define RPG_GAMECORE_AVATARSKILLROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xF037340)
#define RPG_GAMECORE_AVATARSKILLROWDATA_SETSHOWEXRANKTAG_OFFSET UNITYSDK_OFFSET(0xF033DC0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xF037E70)
#define RPG_GAMECORE_AVATARSKILLROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xF033AC0)
#define RPG_GAMECORE_AVATARSKILLROWDATA_SET_SHOWEXRANKTAG_OFFSET UNITYSDK_OFFSET(0xF037E50)
#define RPG_GAMECORE_AVATARSKILLROWDATA__REFRESHDISPLAYATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xF0337A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillRowData_TypeDefinitionIndex = 58907;

	class AvatarSkillRowData : public ::System::Object
	{
	public:
		::EHGMEDDCHLH _DefaultOverrideData; // 0x10
		::System::Collections::Generic::List_1<::MPHOONLPCGA>* _ParamModifyList; // 0x108
		::RPG::GameCore::IAvatarSkillCommonRowWrap* _Row; // 0x110
		::EHGMEDDCHLH _OverrideData; // 0x118
		::RPG::GameCore::SkillConfig* _Config; // 0x210
		::System::Boolean _IsUnlocked_k__BackingField; // 0x218
		::System::Boolean _ShowExRankTag_k__BackingField; // 0x219
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AttackType _DisplayAttackType; // 0x21C
		static ::RPG::GameCore::SkillConfig** StaticGet__EmptyConfig()
		{
			return (::RPG::GameCore::SkillConfig**)UnitySDK::FromName("RPG.GameCore", "AvatarSkillRowData")->GetStaticField(0x67040);
		}

		static ::RPG::GameCore::IAvatarSkillCommonRowWrap** StaticGet__EmptyRow()
		{
			return (::RPG::GameCore::IAvatarSkillCommonRowWrap**)UnitySDK::FromName("RPG.GameCore", "AvatarSkillRowData")->GetStaticField(0x67048);
		}

		::System::Void _ctor(::RPG::GameCore::IAvatarSkillCommonRowWrap* a1, ::RPG::GameCore::SkillConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarSkillCommonRowWrap*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_CCTOR_OFFSET))();
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Void AddParamModify(::MPHOONLPCGA a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPHOONLPCGA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_ADDPARAMMODIFY_OFFSET))(this, a1);
		}

		::System::Void ApplyParamModify(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_APPLYPARAMMODIFY_OFFSET))(this, a1, a2);
		}

		::System::Void SetShowExRankTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_SETSHOWEXRANKTAG_OFFSET))(this, a1);
		}

		::System::Void _RefreshDisplayAttackType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA__REFRESHDISPLAYATTACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::SkillConfig* get_Config()
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::String* get_SkillTriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLTRIGGERKEY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWSTANCELIST_OFFSET))(this);
		}

		::Il2CppArray<::PMOFCNKNJCA*>* get_ShowDamageList()
		{
			return ((::Il2CppArray<::PMOFCNKNJCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWDAMAGELIST_OFFSET))(this);
		}

		::Il2CppArray<::GHPFNOBNMAJ*>* get_ShowHealList()
		{
			return ((::Il2CppArray<::GHPFNOBNMAJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWHEALLIST_OFFSET))(this);
		}

		::System::Int32 get_InitCoolDown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_INITCOOLDOWN_OFFSET))(this);
		}

		::System::Int32 get_CoolDown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_COOLDOWN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPADD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPMultipleRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SPMULTIPLERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_BPNEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_BPADD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_DELAYRATIO_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SIMPLEPARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_StanceDamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_STANCEDAMAGETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_AttackDamageTypeOverride()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_ATTACKDAMAGETYPEOVERRIDE_OFFSET))(this);
		}

		::RPG::GameCore::AttackType get_AttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_ATTACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::SkillEffect get_SkillEffect()
		{
			return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLEFFECT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SkillComboValueDelta()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
		}

		::System::Boolean get_PreCalEqualSplitTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_PRECALEQUALSPLITTARGET_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLTAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTypeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLTYPEDESC_OFFSET))(this);
		}

		::System::String* get_SkillIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLICON_OFFSET))(this);
		}

		::System::String* get_UltraSkillIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_ULTRASKILLICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SimpleSkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SIMPLESKILLDESC_OFFSET))(this);
		}

		::System::Boolean get_HideInUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_HIDEINUI_OFFSET))(this);
		}

		::RPG::GameCore::AttackType get_DisplayAttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_DISPLAYATTACKTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillNeed()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SKILLNEED_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Int32 get_StanceDamageDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_STANCEDAMAGEDISPLAY_OFFSET))(this);
		}

		::System::Void OverrideData(::EHGMEDDCHLH a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHGMEDDCHLH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpLevelCond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVELUPLEVELCOND_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpRankCond()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVELUPRANKCOND_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_LevelUpCostList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_LEVELUPCOSTLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_PreAddModifierList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_PREADDMODIFIERLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RatedSkillTreeID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_RATEDSKILLTREEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RatedRankID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_RATEDRANKID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RatedExRankIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_RATEDEXRANKIDS_OFFSET))(this);
		}

		::System::Boolean get_ShowExRankTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_SHOWEXRANKTAG_OFFSET))(this);
		}

		::System::Void set_ShowExRankTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_SET_SHOWEXRANKTAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROWDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

	};
}
