#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/GridFightSpecialModifyCondition.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightSpecialModifyConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15D9B0)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E15DA80)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_DEPENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0x1E15DAA0)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYOPS_OFFSET UNITYSDK_OFFSET(0x1E15DA40)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYROLEID_OFFSET UNITYSDK_OFFSET(0x1E15DA10)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYSKILLID_OFFSET UNITYSDK_OFFSET(0x1E15DA20)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYSKILLINDEXS_OFFSET UNITYSDK_OFFSET(0x1E15DA50)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1E15DA30)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYVALUES_OFFSET UNITYSDK_OFFSET(0x1E15DA60)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MULTIPLEVALUEKEY_OFFSET UNITYSDK_OFFSET(0x1E15DA70)
#define RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1E15DA90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpecialModifyConfig_TypeDefinitionIndex = 66812;

	class GridFightSpecialModifyConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* _ModifyOps_k__BackingField; // 0x10
		::System::String* _MultipleValueKey_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _ParamList_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _DependRoleIDList_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _ModifySkillIndexs_k__BackingField; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ModifyValues_k__BackingField; // 0x38
		::System::UInt32 _ModifySkillID_k__BackingField; // 0x40
		::System::UInt32 _ModifyRoleID_k__BackingField; // 0x44
		::RPG::GameCore::GridFightSpecialModifyCondition _ConditionType_k__BackingField; // 0x48
		::RPG::GameCore::GridFightSkillType _ModifySkillType_k__BackingField; // 0x4C
		::System::Void _ctor(::RPG::GameCore::GridFightSpecialModifyConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSpecialModifyConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ModifyRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYROLEID_OFFSET))(this);
		}

		::System::UInt32 get_ModifySkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYSKILLID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSkillType get_ModifySkillType()
		{
			return ((::RPG::GameCore::GridFightSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYSKILLTYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* get_ModifyOps()
		{
			return ((::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYOPS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ModifySkillIndexs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYSKILLINDEXS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ModifyValues()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MODIFYVALUES_OFFSET))(this);
		}

		::System::String* get_MultipleValueKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_MULTIPLEVALUEKEY_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSpecialModifyCondition get_ConditionType()
		{
			return ((::RPG::GameCore::GridFightSpecialModifyCondition(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_CONDITIONTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_PARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DependRoleIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALMODIFYCONFIG_GET_DEPENDROLEIDLIST_OFFSET))(this);
		}

	};
}
