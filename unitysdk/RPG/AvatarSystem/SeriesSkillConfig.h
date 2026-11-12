#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ConditionParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEAFB0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_EQUALS_OFFSET UNITYSDK_OFFSET(0xEAE80)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0xEADE0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GETEXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xEAD80)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEAE70)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_BUFFEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEAD60)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_BUTTONPANELPREFAB_OFFSET UNITYSDK_OFFSET(0xEACC0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xEAC10)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xAD00)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_ICON_OFFSET UNITYSDK_OFFSET(0xEACA0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xEAD20)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEABF0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x2070)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xEAC40)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SIMPLEEXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xEAC60)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SIMPLEPARAMS_OFFSET UNITYSDK_OFFSET(0xEAC80)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SPECIALTAGPREFAB_OFFSET UNITYSDK_OFFSET(0xEACE0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SPECIALTAGTEXT_OFFSET UNITYSDK_OFFSET(0xEAD00)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_UNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xEAD40)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCCD5AA0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCCD5A40)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xEAE50)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_BUFFEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEAD70)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_BUTTONPANELPREFAB_OFFSET UNITYSDK_OFFSET(0xEACD0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0xEAC20)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xAD10)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_ICON_OFFSET UNITYSDK_OFFSET(0xEACB0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xEAD30)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xEAC00)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0xEAC30)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xEAC50)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SIMPLEEXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xEAC70)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SIMPLEPARAMS_OFFSET UNITYSDK_OFFSET(0xEAC90)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SPECIALTAGPREFAB_OFFSET UNITYSDK_OFFSET(0xEACF0)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SPECIALTAGTEXT_OFFSET UNITYSDK_OFFSET(0xEAD10)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_UNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xEAD50)
#define RPG_AVATARSYSTEM_SERIESSKILLCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEAE40)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int SeriesSkillConfig_TypeDefinitionIndex = 53025;

	struct alignas(8) SeriesSkillConfig
	{
		::RPG::Client::TextID _Name_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ExtraEffectIDs_k__BackingField; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _Params_k__BackingField; // 0x38
		::RPG::Client::TextID _SimpleDesc_k__BackingField; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _SimpleExtraEffectIDs_k__BackingField; // 0x50
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _SimpleParams_k__BackingField; // 0x58
		::System::String* _Icon_k__BackingField; // 0x60
		::System::String* _ButtonPanelPrefab_k__BackingField; // 0x68
		::System::String* _SpecialTagPrefab_k__BackingField; // 0x70
		::RPG::Client::TextID _SpecialTagText_k__BackingField; // 0x78
		::System::UInt32 _Level_k__BackingField; // 0x88
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ConditionParam* _UnlockCondition_k__BackingField; // 0x90
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BuffedAvatarIDs_k__BackingField; // 0x98
		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_DESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_EXTRAEFFECTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_Params()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_PARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SimpleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_SimpleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SIMPLEDESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_SimpleExtraEffectIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SIMPLEEXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Void set_SimpleExtraEffectIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SIMPLEEXTRAEFFECTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_SimpleParams()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SIMPLEPARAMS_OFFSET))(this);
		}

		::System::Void set_SimpleParams(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SIMPLEPARAMS_OFFSET))(this, a1);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_ICON_OFFSET))(this, a1);
		}

		::System::String* get_ButtonPanelPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_BUTTONPANELPREFAB_OFFSET))(this);
		}

		::System::Void set_ButtonPanelPrefab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_BUTTONPANELPREFAB_OFFSET))(this, a1);
		}

		::System::String* get_SpecialTagPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SPECIALTAGPREFAB_OFFSET))(this);
		}

		::System::Void set_SpecialTagPrefab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SPECIALTAGPREFAB_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SpecialTagText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_SPECIALTAGTEXT_OFFSET))(this);
		}

		::System::Void set_SpecialTagText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_SPECIALTAGTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConditionParam* get_UnlockCondition()
		{
			return ((::RPG::GameCore::ConditionParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_UNLOCKCONDITION_OFFSET))(this);
		}

		::System::Void set_UnlockCondition(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_UNLOCKCONDITION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BuffedAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GET_BUFFEDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_BuffedAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_SET_BUFFEDAVATARIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectIDs(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GETEXTRAEFFECTIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams(::System::Boolean a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GETDESCRIPTIONPARAMS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::RPG::AvatarSystem::SeriesSkillConfig a1, ::RPG::AvatarSystem::SeriesSkillConfig a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::SeriesSkillConfig, ::RPG::AvatarSystem::SeriesSkillConfig))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::AvatarSystem::SeriesSkillConfig a1, ::RPG::AvatarSystem::SeriesSkillConfig a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::SeriesSkillConfig, ::RPG::AvatarSystem::SeriesSkillConfig))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::AvatarSystem::SeriesSkillConfig a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillConfig))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLCONFIG_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
