#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C39D0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B8C36B0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_BGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8C3770)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B8C3710)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1B8C37B0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B8C3750)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B8C36A0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8C36F0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1B8C37F0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1B8C37D0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0x1B8C3730)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_STANCEDAMAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B8C3810)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B8C36D0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UI3DACTIVEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B8C3870)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UI3DGLASSESACTIVEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B8C3920)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UIPANELPREFAB_OFFSET UNITYSDK_OFFSET(0x1B8C3790)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1B8C3830)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B8C3850)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B8C36C0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_BGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8C3780)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1B8C3720)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x1B8C37C0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B8C3760)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8C3700)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x1B8C3800)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0x1B8C37E0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0x1B8C3740)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_STANCEDAMAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B8C3820)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B8C36E0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_UIPANELPREFAB_OFFSET UNITYSDK_OFFSET(0x1B8C37A0)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_UNLOCKCOST_OFFSET UNITYSDK_OFFSET(0x1B8C3840)
#define RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B8C3860)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarExEidolon_TypeDefinitionIndex = 53063;

	class AvatarExEidolon : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x10
		::System::String* _UIPanelPrefab_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::String* _BGImagePath_k__BackingField; // 0x28
		::Il2CppArray<::System::String*>* _RankAbility_k__BackingField; // 0x30
		::RPG::GameCore::ItemConfig* _UnlockCost_k__BackingField; // 0x38
		::System::String* _IconPath_k__BackingField; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Param_k__BackingField; // 0x48
		::System::String* _Desc_k__BackingField; // 0x50
		::RPG::Client::TextID _SkillTag_k__BackingField; // 0x58
		::System::UInt32 _VideoID_k__BackingField; // 0x68
		::System::Int32 _StanceDamageDisplay_k__BackingField; // 0x6C
		::DGMNKINFKFH _Identifier_k__BackingField; // 0x70
		::RPG::GameCore::StringHash _Trigger_k__BackingField; // 0x74
		::System::UInt32 _AvatarID_k__BackingField; // 0x78
		::System::Void _ctor(::DGMNKINFKFH a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_CTOR_OFFSET))(this, a1);
		}

		::DGMNKINFKFH get_Identifier()
		{
			return ((::DGMNKINFKFH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_AVATARID_OFFSET))(this, a1);
		}

		::RPG::GameCore::StringHash get_Trigger()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_Trigger(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_TRIGGER_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_SKILLTAG_OFFSET))(this);
		}

		::System::Void set_SkillTag(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_SKILLTAG_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_BGImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_BGIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_BGImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_BGIMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_UIPanelPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UIPANELPREFAB_OFFSET))(this);
		}

		::System::Void set_UIPanelPrefab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_UIPANELPREFAB_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_EXTRAEFFECTIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_RankAbility()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_RANKABILITY_OFFSET))(this);
		}

		::System::Void set_RankAbility(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_RANKABILITY_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_Param()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_PARAM_OFFSET))(this, a1);
		}

		::System::Int32 get_StanceDamageDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_STANCEDAMAGEDISPLAY_OFFSET))(this);
		}

		::System::Void set_StanceDamageDisplay(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_STANCEDAMAGEDISPLAY_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemConfig* get_UnlockCost()
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UNLOCKCOST_OFFSET))(this);
		}

		::System::Void set_UnlockCost(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_UNLOCKCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_SET_VIDEOID_OFFSET))(this, a1);
		}

		::System::String* get_UI3DActivePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UI3DACTIVEPREFABPATH_OFFSET))(this);
		}

		::System::String* get_UI3DGlassesActivePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATAREXEIDOLON_GET_UI3DGLASSESACTIVEPREFABPATH_OFFSET))(this);
		}

	};
}
