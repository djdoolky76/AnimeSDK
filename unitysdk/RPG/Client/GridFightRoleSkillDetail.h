#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
class BAAMFMGDFGC;
class JCNKGOEFKKK;
class OLHPNPEHEON;
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace RPG::Client { class GridFightRoleSkillRemark; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace RPG::GameCore { class ElationSkillRow; }
namespace RPG::GameCore { class GridFightSkillDescModConfigRow; }
namespace RPG::GameCore { class GridFightSkillSubIconConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSERVANTSKILL_OFFSET UNITYSDK_OFFSET(0xDC5FF60)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSKILL_OFFSET UNITYSDK_OFFSET(0xDC5FCB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEBATTLEEVENTSKILL_OFFSET UNITYSDK_OFFSET(0xDC60070)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0xDC62760)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETBACKRANKMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC637E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETCYRENEMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC639F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xDC633B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDC4B5E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDC62EF0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ELATIONPRIORITY_OFFSET UNITYSDK_OFFSET(0xDC636C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDC63470)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDC63610)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISELATION_OFFSET UNITYSDK_OFFSET(0xDC63670)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xDC634F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0xDC63550)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISSUMMON_OFFSET UNITYSDK_OFFSET(0xDC635B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xDC63630)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_RELATIVEREMARK_OFFSET UNITYSDK_OFFSET(0xDC63710)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xDC63B80)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLECONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xDC63280)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDC62DE0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDC634B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLESKILLDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDC63730)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDC4B540)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xDC63650)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xDC4B590)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_HASCYRENEMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC63B30)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSERVANTSKILL_OFFSET UNITYSDK_OFFSET(0xDC62BE0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSKILL_OFFSET UNITYSDK_OFFSET(0xDC62770)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYBATTLEEVENTSKILL_OFFSET UNITYSDK_OFFSET(0xDC62970)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDC63620)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xDC63640)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_RELATIVEREMARK_OFFSET UNITYSDK_OFFSET(0xDC63720)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xDC63660)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__COMPILESKILLDESC_OFFSET UNITYSDK_OFFSET(0xDC62F60)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CREATEMODIFIERCOMPILER_OFFSET UNITYSDK_OFFSET(0xDC63770)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETBACKRANKMODIFIER_B__55_0_OFFSET UNITYSDK_OFFSET(0xDC63C80)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETCYRENEMODIFIER_B__57_0_OFFSET UNITYSDK_OFFSET(0xDC63D50)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDC62E30)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__INITBYAVATARSERVANTSKILL_B__6_0_OFFSET UNITYSDK_OFFSET(0xDC63C40)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__INITBYAVATARSKILL_B__4_0_OFFSET UNITYSDK_OFFSET(0xDC63BC0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__INITBYBATTLEEVENTSKILL_B__5_0_OFFSET UNITYSDK_OFFSET(0xDC63C00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillDetail_TypeDefinitionIndex = 66832;

	class GridFightRoleSkillDetail : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleConditionParamList; // 0x10
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList; // 0x18
		::RPG::Client::GridFightRoleSkillRemark* _RelativeRemark_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ConditionParamList; // 0x30
		::RPG::GameCore::ElationSkillRow* _ElationRow; // 0x38
		::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList; // 0x40
		::RPG::Client::GridFightRole* _Role; // 0x48
		::RPG::GameCore::GridFightSkillDescModConfigRow* _ModRow; // 0x50
		::System::String* _IconPath_k__BackingField; // 0x58
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleSkillDescParamList; // 0x60
		::RPG::GameCore::GridFightSkillSubIconConfigRow* _SubIconRow; // 0x68
		::RPG::Client::TextID _SkillTypeTextID_k__BackingField; // 0x70
		::RPG::Client::TextID _DescTextID; // 0x80
		::RPG::Client::TextID _NameTextID_k__BackingField; // 0x90
		::RPG::Client::TextID _SimpleSkillDescTextID; // 0xA0
		::RPG::Client::TextID _SimpleConditionTextID; // 0xB0
		::System::UInt32 _SkillID; // 0xC0
		::RPG::GameCore::GridFightSkillType _SkillType; // 0xC4
		::RPG::Client::TextID _ConditionTextID; // 0xC8
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateAvatarSKill(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSKILL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateBattleEventSkill(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEBATTLEEVENTSKILL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightRoleSkillDetail* CreateAvatarServantSkill(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightRoleSkillDetail*(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_CREATEAVATARSERVANTSKILL_OFFSET))(a1, a2, a3);
		}

		::System::Void InitByAvatarSkill(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSKILL_OFFSET))(this, a1);
		}

		::System::Void InitByBattleEventSkill(::RPG::GameCore::BattleEventSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYBATTLEEVENTSKILL_OFFSET))(this, a1);
		}

		::System::Void InitByAvatarServantSkill(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_INITBYAVATARSERVANTSKILL_OFFSET))(this, a1);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SimpleConditionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLECONDITIONDESC_OFFSET))(this);
		}

		::System::String* get_ConditionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_CONDITIONDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_IsReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISREPLACE_OFFSET))(this);
		}

		::System::Boolean get_IsSummon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISSUMMON_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::Void set_NameTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_NAMETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPETEXTID_OFFSET))(this);
		}

		::System::Void set_SkillTypeTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_SKILLTYPETEXTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsElation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ISELATION_OFFSET))(this);
		}

		::System::Int32 get_ElationPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ELATIONPRIORITY_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSkillType get_SkillType()
		{
			return ((::RPG::GameCore::GridFightSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SKILLTYPE_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillRemark* get_RelativeRemark()
		{
			return ((::RPG::Client::GridFightRoleSkillRemark*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_RELATIVEREMARK_OFFSET))(this);
		}

		::System::Void set_RelativeRemark(::RPG::Client::GridFightRoleSkillRemark* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillRemark*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_SET_RELATIVEREMARK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleSkillDescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_SIMPLESKILLDESCPARAMLIST_OFFSET))(this);
		}

		::JCNKGOEFKKK* _CreateModifierCompiler()
		{
			return ((::JCNKGOEFKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__CREATEMODIFIERCOMPILER_OFFSET))(this);
		}

		::System::String* _CompileSkillDesc(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__COMPILESKILLDESC_OFFSET))(this, a1, a2);
		}

		::OLHPNPEHEON* GetBackRankModifier()
		{
			return ((::OLHPNPEHEON*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETBACKRANKMODIFIER_OFFSET))(this);
		}

		::System::String* _GetSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETSIMPLEDESC_OFFSET))(this);
		}

		::BAAMFMGDFGC* GetCyreneModifier()
		{
			return ((::BAAMFMGDFGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GETCYRENEMODIFIER_OFFSET))(this);
		}

		::System::Boolean HasCyreneModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_HASCYRENEMODIFIER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL_GET_ROLE_OFFSET))(this);
		}

		::System::Boolean _InitByAvatarSkill_b__4_0(::RPG::Client::GridFightRoleSkillRemark* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillRemark*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__INITBYAVATARSKILL_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _InitByBattleEventSkill_b__5_0(::RPG::Client::GridFightRoleSkillRemark* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillRemark*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__INITBYBATTLEEVENTSKILL_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _InitByAvatarServantSkill_b__6_0(::RPG::Client::GridFightRoleSkillRemark* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillRemark*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__INITBYAVATARSERVANTSKILL_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBackRankModifier_b__55_0(::RPG::Client::GridFightBackRankConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETBACKRANKMODIFIER_B__55_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCyreneModifier_b__57_0(::RPG::Client::GridFightCyreneModifyConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightCyreneModifyConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDETAIL__GETCYRENEMODIFIER_B__57_0_OFFSET))(this, a1);
		}

	};
}
