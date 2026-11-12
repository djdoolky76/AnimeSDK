#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EquipmentSkillData; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class EquipmentSkillRow; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }

#define RPG_CLIENT_EQUIPMENTSKILLDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7DCB80)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD7DC880)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xD7DAEA0)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xD7DCB50)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_ABILITYPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7DCB70)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD7DCB40)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xD7DCB60)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xD7DCB30)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xD7DCB10)
#define RPG_CLIENT_EQUIPMENTSKILLDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xD7DCB20)
#define RPG_CLIENT_EQUIPMENTSKILLDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xD7DCA90)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentSkillData_TypeDefinitionIndex = 67602;

	class EquipmentSkillData : public ::System::Object
	{
	public:
		::System::String* _AbilityName_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _AbilityProperty_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x2C
		::RPG::Client::TextID _SkillName_k__BackingField; // 0x30
		::RPG::Client::TextID _SkillDesc_k__BackingField; // 0x40
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::RPG::GameCore::EquipmentSkillRow*, ::RPG::Client::EquipmentSkillData*>** StaticGet__Cache()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::RPG::GameCore::EquipmentSkillRow*, ::RPG::Client::EquipmentSkillData*>**)UnitySDK::FromName("RPG.Client", "EquipmentSkillData")->GetStaticField(0x4D0A0);
		}

		::System::Void _ctor(::RPG::GameCore::EquipmentSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EquipmentSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::EquipmentSkillData* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::EquipmentSkillData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GETDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::EquipmentSkillData* _CreateData(::RPG::GameCore::EquipmentSkillRow* a1)
		{
			return ((::RPG::Client::EquipmentSkillData*(*)(::RPG::GameCore::EquipmentSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_SKILLID_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_SKILLDESC_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_ABILITYNAME_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AbilityProperty()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTSKILLDATA_GET_ABILITYPROPERTY_OFFSET))(this);
		}

	};
}
