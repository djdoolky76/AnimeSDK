#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMKIHKMBCF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define OADLFAMLGPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB57070)
#define OADLFAMLGPP_GET_BIGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AB56FD0)
#define OADLFAMLGPP_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1AB56F90)
#define OADLFAMLGPP_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AB56FB0)
#define OADLFAMLGPP_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1AB56F20)
#define OADLFAMLGPP_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AB56F30)
#define OADLFAMLGPP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AB56F70)
#define OADLFAMLGPP_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1AB57050)
#define OADLFAMLGPP_GET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1AB57010)
#define OADLFAMLGPP_GET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1AB56FF0)
#define OADLFAMLGPP_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1AB56F50)
#define OADLFAMLGPP_GET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1AB57030)
#define OADLFAMLGPP_SET_BIGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AB56FE0)
#define OADLFAMLGPP_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1AB56FA0)
#define OADLFAMLGPP_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AB56FC0)
#define OADLFAMLGPP_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AB56F40)
#define OADLFAMLGPP_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AB56F80)
#define OADLFAMLGPP_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x1AB57060)
#define OADLFAMLGPP_SET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1AB57020)
#define OADLFAMLGPP_SET_SKILLADDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1AB57000)
#define OADLFAMLGPP_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1AB56F60)
#define OADLFAMLGPP_SET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1AB57040)

inline static constexpr unsigned int OADLFAMLGPP_TypeDefinitionIndex = 53061;

	class OADLFAMLGPP : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _RankAbility_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _UnlockCost_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* _SkillAddLevelList_k__BackingField; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Param_k__BackingField; // 0x38
		::System::String* _BigImagePath_k__BackingField; // 0x40
		::System::String* _Desc_k__BackingField; // 0x48
		::DCMKIHKMBCF _Identifier_k__BackingField; // 0x50
		::RPG::GameCore::StringHash _Trigger_k__BackingField; // 0x54
		::System::UInt32 _Level_k__BackingField; // 0x58
		::System::Void _ctor(::DCMKIHKMBCF a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMKIHKMBCF))((::PBYTE)hIl2Cpp + OADLFAMLGPP_CTOR_OFFSET))(this, a1);
		}

		::DCMKIHKMBCF get_Identifier()
		{
			return ((::DCMKIHKMBCF(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::StringHash get_Trigger()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_Trigger(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_TRIGGER_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_BigImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_BIGIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_BigImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_BIGIMAGEPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* get_SkillAddLevelList()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_SKILLADDLEVELLIST_OFFSET))(this);
		}

		::System::Void set_SkillAddLevelList(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_SKILLADDLEVELLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_RankAbility()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_RANKABILITY_OFFSET))(this);
		}

		::System::Void set_RankAbility(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_RANKABILITY_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_UnlockCost()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_UNLOCKCOST_OFFSET))(this);
		}

		::System::Void set_UnlockCost(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_UNLOCKCOST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_Param()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLFAMLGPP_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + OADLFAMLGPP_SET_PARAM_OFFSET))(this, a1);
		}

	};
