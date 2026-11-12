#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMNEKOLMGEM.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace System { class String; }

#define RPG_AVATARSYSTEM_AVATARPATH_COMPARETO_OFFSET UNITYSDK_OFFSET(0xCCD4420)
#define RPG_AVATARSYSTEM_AVATARPATH_CTOR_OFFSET UNITYSDK_OFFSET(0xCCD43A0)
#define RPG_AVATARSYSTEM_AVATARPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xCCD43B0)
#define RPG_AVATARSYSTEM_AVATARPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCCD44C0)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0xCCD4300)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCCD4360)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0xCCD42C0)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xCCD42A0)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0xCCD4380)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD4240)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCCD4230)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCCD4320)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD4260)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCCD4340)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD4280)
#define RPG_AVATARSYSTEM_AVATARPATH_GET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD42E0)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_BGPATH_OFFSET UNITYSDK_OFFSET(0xCCD4310)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_DESC_OFFSET UNITYSDK_OFFSET(0xCCD4370)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0xCCD42D0)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xCCD42B0)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0xCCD4390)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD4250)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCCD4330)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD4270)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCCD4350)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD4290)
#define RPG_AVATARSYSTEM_AVATARPATH_SET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD42F0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarPath_TypeDefinitionIndex = 53067;

	class AvatarPath : public ::System::Object
	{
	public:
		::System::String* _BgPath_k__BackingField; // 0x10
		::System::String* _MiddleIconPath_k__BackingField; // 0x18
		::System::String* _EquipmentLightMaterialPath_k__BackingField; // 0x20
		::System::String* _TalkIconPath_k__BackingField; // 0x28
		::System::String* _SmallIconPath_k__BackingField; // 0x30
		::System::String* _Equipment3DTgaPath_k__BackingField; // 0x38
		::System::String* _FirstWordText_k__BackingField; // 0x40
		::System::String* _IconPath_k__BackingField; // 0x48
		::System::String* _LightConeCardBackImagePath_k__BackingField; // 0x50
		::RPG::Client::TextID _Desc_k__BackingField; // 0x58
		::LMNEKOLMGEM _Identifier_k__BackingField; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x70
		::System::Void _ctor(::LMNEKOLMGEM a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_CTOR_OFFSET))(this, a1);
		}

		::LMNEKOLMGEM get_Identifier()
		{
			return ((::LMNEKOLMGEM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiddleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_MIDDLEICONPATH_OFFSET))(this);
		}

		::System::Void set_MiddleIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_MIDDLEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_SMALLICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_EquipmentLightMaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this);
		}

		::System::Void set_EquipmentLightMaterialPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this, a1);
		}

		::System::String* get_Equipment3DTgaPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_EQUIPMENT3DTGAPATH_OFFSET))(this);
		}

		::System::Void set_Equipment3DTgaPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_EQUIPMENT3DTGAPATH_OFFSET))(this, a1);
		}

		::System::String* get_TalkIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_TALKICONPATH_OFFSET))(this);
		}

		::System::Void set_TalkIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_TALKICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_BgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_BGPATH_OFFSET))(this);
		}

		::System::Void set_BgPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_BGPATH_OFFSET))(this, a1);
		}

		::System::String* get_LightConeCardBackImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_LightConeCardBackImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_FirstWordText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GET_FIRSTWORDTEXT_OFFSET))(this);
		}

		::System::Void set_FirstWordText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_SET_FIRSTWORDTEXT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARPATH_GETHASHCODE_OFFSET))(this);
		}

	};
}
