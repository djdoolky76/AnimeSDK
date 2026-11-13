#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJIMDIILCBF.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_AVATARSYSTEM_AVATARSKIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B75D5F0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GETMAPPEDPATH_OFFSET UNITYSDK_OFFSET(0x1B75D610)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ACTIONHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D350)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVDEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D4D0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVPLAYERPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B75D4B0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AUDIOEVENTTAG_OFFSET UNITYSDK_OFFSET(0x1B75D570)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARDROPOFFSET_OFFSET UNITYSDK_OFFSET(0x1B75D430)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x1B8C3FF0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARSELFSHOWOFFSET_OFFSET UNITYSDK_OFFSET(0x1B75D530)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1B75D550)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B75D3F0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINFRONTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B75D410)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B75D3D0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTININTRODUCE_OFFSET UNITYSDK_OFFSET(0x1B75D450)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D330)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0x1B8C4010)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B8C3FD0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B75D490)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B8C3F70)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x1B75D590)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D510)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D4F0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D310)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8C3FB0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_PLAYERCARDID_OFFSET UNITYSDK_OFFSET(0x1B75D470)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D390)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D2F0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_SKINICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D5B0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8C3F90)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x1B8C4030)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B75D3B0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B75D5D0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_WAITINGHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D370)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ACTIONHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D360)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVDEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D4E0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVPLAYERPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B75D4C0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AUDIOEVENTTAG_OFFSET UNITYSDK_OFFSET(0x1B75D580)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARDROPOFFSET_OFFSET UNITYSDK_OFFSET(0x1B75D440)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x1B8C4000)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARSELFSHOWOFFSET_OFFSET UNITYSDK_OFFSET(0x1B75D540)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1B75D560)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B75D400)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINFRONTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B75D420)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B75D3E0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTININTRODUCE_OFFSET UNITYSDK_OFFSET(0x1B75D460)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D340)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0x1B8C4020)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1B8C3FE0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B75D4A0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x1B75D5A0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D520)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D500)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D320)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8C3FC0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_PLAYERCARDID_OFFSET UNITYSDK_OFFSET(0x1B75D480)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D3A0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D300)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_SKINICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D5C0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8C3FA0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x1B75D2E0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B75D3C0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B75D5E0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_WAITINGHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1B75D380)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarSkin_TypeDefinitionIndex = 53078;

	class AvatarSkin : public ::System::Object
	{
	public:
		::System::String* _UltraSkillCutInPrefabPath_k__BackingField; // 0x10
		::System::String* _MiniIconPath_k__BackingField; // 0x18
		::System::String* _DefaultHeadIconPath_k__BackingField; // 0x20
		::System::String* _UIModelPath_k__BackingField; // 0x28
		::System::String* _SideHeadIconPath_k__BackingField; // 0x30
		::System::String* _DefaultModelPath_k__BackingField; // 0x38
		::Il2CppArray<::System::Single>* _AvatarDropOffset_k__BackingField; // 0x40
		::System::String* _SideIconPath_k__BackingField; // 0x48
		::System::String* _CharacterSkinOverrideConfigPath_k__BackingField; // 0x50
		::System::String* _ManikinJsonPath_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _PathMap; // 0x60
		::System::String* _AdvDefaultHeadIconPath_k__BackingField; // 0x68
		::System::String* _AudioEventTag_k__BackingField; // 0x70
		::System::String* _ActionHeadIconPath_k__BackingField; // 0x78
		::System::String* _CutinBackgroundImagePath_k__BackingField; // 0x80
		::Il2CppArray<::System::Single>* _AvatarSelfShowOffset_k__BackingField; // 0x88
		::System::String* _CutinImagePath_k__BackingField; // 0x90
		::System::String* _AdvPlayerPrefabPath_k__BackingField; // 0x98
		::System::String* _CutinFrontImagePath_k__BackingField; // 0xA0
		::System::String* _SkinIconPath_k__BackingField; // 0xA8
		::System::String* _WaitingHeadIconPath_k__BackingField; // 0xB0
		::System::String* _ItemAvatarIconPath_k__BackingField; // 0xB8
		::System::String* _FreeStyleCharacterID_k__BackingField; // 0xC0
		::System::UInt32 _IntroduceID_k__BackingField; // 0xC8
		::RPG::GameCore::AvatarSkinType _Type_k__BackingField; // 0xCC
		::RPG::Client::TextID _AvatarName_k__BackingField; // 0xD0
		::RPG::Client::TextID _Name_k__BackingField; // 0xE0
		::RPG::Client::TextID _Desc_k__BackingField; // 0xF0
		::IJIMDIILCBF _Identifier_k__BackingField; // 0x100
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _CutinIntroduce_k__BackingField; // 0x110
		::System::UInt32 _PlayerCardID_k__BackingField; // 0x120
		::System::UInt32 _VideoID_k__BackingField; // 0x124
		::System::Void _ctor(::IJIMDIILCBF a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJIMDIILCBF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_CTOR_OFFSET))(this, a1, a2);
		}

		::IJIMDIILCBF get_Identifier()
		{
			return ((::IJIMDIILCBF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkinType get_Type()
		{
			return ((::RPG::GameCore::AvatarSkinType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::AvatarSkinType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_AvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARNAME_OFFSET))(this);
		}

		::System::Void set_AvatarName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARNAME_OFFSET))(this, a1);
		}

		::System::String* get_DefaultModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTMODELPATH_OFFSET))(this);
		}

		::System::Void set_DefaultModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTMODELPATH_OFFSET))(this, a1);
		}

		::System::String* get_UIModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_UIMODELPATH_OFFSET))(this);
		}

		::System::Void set_UIModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_UIMODELPATH_OFFSET))(this, a1);
		}

		::System::String* get_SideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEICONPATH_OFFSET))(this);
		}

		::System::Void set_SideIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_MINIICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_DefaultHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_DefaultHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ActionHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ACTIONHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_ActionHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ACTIONHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_WaitingHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_WAITINGHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_WaitingHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_WAITINGHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SideHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_SideHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_UltraSkillCutInPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this);
		}

		::System::Void set_UltraSkillCutInPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* get_CutinImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CutinImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINIMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_CutinBackgroundImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINBACKGROUNDIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CutinBackgroundImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINBACKGROUNDIMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_CutinFrontImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINFRONTIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CutinFrontImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINFRONTIMAGEPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_AvatarDropOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARDROPOFFSET_OFFSET))(this);
		}

		::System::Void set_AvatarDropOffset(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARDROPOFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CutinIntroduce()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTININTRODUCE_OFFSET))(this);
		}

		::System::Void set_CutinIntroduce(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTININTRODUCE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_PLAYERCARDID_OFFSET))(this);
		}

		::System::Void set_PlayerCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_PLAYERCARDID_OFFSET))(this, a1);
		}

		::System::String* get_FreeStyleCharacterID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_FREESTYLECHARACTERID_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_FREESTYLECHARACTERID_OFFSET))(this, a1);
		}

		::System::String* get_AdvPlayerPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVPLAYERPREFABPATH_OFFSET))(this);
		}

		::System::Void set_AdvPlayerPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVPLAYERPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* get_AdvDefaultHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVDEFAULTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_AdvDefaultHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVDEFAULTHEADICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_MANIKINJSONPATH_OFFSET))(this);
		}

		::System::Void set_ManikinJsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_MANIKINJSONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ItemAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ITEMAVATARICONPATH_OFFSET))(this);
		}

		::System::Void set_ItemAvatarIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ITEMAVATARICONPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_AvatarSelfShowOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARSELFSHOWOFFSET_OFFSET))(this);
		}

		::System::Void set_AvatarSelfShowOffset(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARSELFSHOWOFFSET_OFFSET))(this, a1);
		}

		::System::String* get_CharacterSkinOverrideConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET))(this);
		}

		::System::Void set_CharacterSkinOverrideConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET))(this, a1);
		}

		::System::String* get_AudioEventTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AUDIOEVENTTAG_OFFSET))(this);
		}

		::System::Void set_AudioEventTag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AUDIOEVENTTAG_OFFSET))(this, a1);
		}

		::System::UInt32 get_IntroduceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_INTRODUCEID_OFFSET))(this);
		}

		::System::Void set_IntroduceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_INTRODUCEID_OFFSET))(this, a1);
		}

		::System::String* get_SkinIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_SKINICONPATH_OFFSET))(this);
		}

		::System::Void set_SkinIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_SKINICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_VIDEOID_OFFSET))(this, a1);
		}

		::System::String* GetMappedPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GETMAPPEDPATH_OFFSET))(this, a1);
		}

	};
}
