#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackExRankConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleSkillConfig; }
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace RPG::Client { class GridFightRoleSkillRemark; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D55F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1D4EF770)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4EF690)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEXRANKCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1D4EF510)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEXRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4EF4B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4EF1D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1D4EF3D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4EF370)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1D4EF630)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_1_OFFSET UNITYSDK_OFFSET(0x1D4EDD50)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_OFFSET UNITYSDK_OFFSET(0x1D4D9BB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_1_OFFSET UNITYSDK_OFFSET(0x1D4EEED0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_OFFSET UNITYSDK_OFFSET(0x1D4EEB90)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_BACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4EF250)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D4EF800)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D4EFA40)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1D4F0070)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_SKILLREMARKS_OFFSET UNITYSDK_OFFSET(0x1D4F00B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_GET_SKILLREMARK_OFFSET UNITYSDK_OFFSET(0x1D4EFBB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL_RESORTINACTIVEDETAIL_OFFSET UNITYSDK_OFFSET(0x1D4EE8F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__CONVERTSKILLIDTOCURRENTGENDERSKILLID_OFFSET UNITYSDK_OFFSET(0x1D4EFF00)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__GETAVATARSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1D4EE370)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__GETSERVANTSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1D4EE6A0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__GET_BACKRANKCONFIGS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D4F00C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILL__INITSKILLREMARKS_OFFSET UNITYSDK_OFFSET(0x1D4EDA30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkill_TypeDefinitionIndex = 66829;

	class GridFightRoleSkill : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillRemark*>* _SkillRemarks_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _Role; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>* GetSkillDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>* GetSkillDetails_1(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLDETAILS_1_OFFSET))(this, a1);
		}

		::System::Void ResortInactiveDetail(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_RESORTINACTIVEDETAIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetSkillTypeTextIDs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetSkillTypeTextIDs_1(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETSKILLTYPETEXTIDS_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* GetBackRankConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBackRankConfig*>* get_BackRankConfigs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_BACKRANKCONFIGS_OFFSET))(this);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig()
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig_1(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKRANKCONFIG_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBackExRankConfig* GetBackExRankConfig()
		{
			return ((::RPG::Client::GridFightBackExRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEXRANKCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightBackExRankConfig* GetBackExRankConfig_1(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightBackExRankConfig*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEXRANKCONFIG_1_OFFSET))(this, a1);
		}

		::RPG::Client::EquipmentItemData* GetEquipment()
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETEQUIPMENT_OFFSET))(this);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig_1()
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GETBACKEQUIPMENTCONFIG_1_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_Config()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ISACTIVATED_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillRemark* get_SkillRemark()
		{
			return ((::RPG::Client::GridFightRoleSkillRemark*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_SKILLREMARK_OFFSET))(this);
		}

		::System::UInt32 _GetAvatarSkillLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__GETAVATARSKILLLEVEL_OFFSET))(this, a1);
		}

		static ::System::UInt32 _ConvertSkillIDToCurrentGenderSkillID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__CONVERTSKILLIDTOCURRENTGENDERSKILLID_OFFSET))(a1);
		}

		::System::UInt32 _GetServantSkillLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__GETSERVANTSKILLLEVEL_OFFSET))(this, a1);
		}

		::System::Void _InitSkillRemarks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__INITSKILLREMARKS_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_ROLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillRemark*>* get_SkillRemarks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleSkillRemark*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL_GET_SKILLREMARKS_OFFSET))(this);
		}

		::System::Boolean _get_BackRankConfigs_b__8_0(::RPG::Client::GridFightBackRankConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL__GET_BACKRANKCONFIGS_B__8_0_OFFSET))(this, a1);
		}

	};
}
