#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMNEKOLMGEM.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GBDODOMIMIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1594B8E0)
#define GBDODOMIMIF_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1594B840)
#define GBDODOMIMIF_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1594B8A0)
#define GBDODOMIMIF_GET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0x1594B800)
#define GBDODOMIMIF_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x1594B7E0)
#define GBDODOMIMIF_GET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0x1594B8C0)
#define GBDODOMIMIF_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B780)
#define GBDODOMIMIF_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1594B770)
#define GBDODOMIMIF_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1594B860)
#define GBDODOMIMIF_GET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B7A0)
#define GBDODOMIMIF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1594B880)
#define GBDODOMIMIF_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B7C0)
#define GBDODOMIMIF_GET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B820)
#define GBDODOMIMIF_SET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1594B850)
#define GBDODOMIMIF_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1594B8B0)
#define GBDODOMIMIF_SET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0x1594B810)
#define GBDODOMIMIF_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x1594B7F0)
#define GBDODOMIMIF_SET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0x1594B8D0)
#define GBDODOMIMIF_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B790)
#define GBDODOMIMIF_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1594B870)
#define GBDODOMIMIF_SET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B7B0)
#define GBDODOMIMIF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1594B890)
#define GBDODOMIMIF_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B7D0)
#define GBDODOMIMIF_SET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0x1594B830)

	class GBDODOMIMIF : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _Equipment3DTgaPath_k__BackingField; // 0x18
		::System::String* _SmallIconPath_k__BackingField; // 0x20
		::System::String* _TalkIconPath_k__BackingField; // 0x28
		::System::String* _LightConeCardBackImagePath_k__BackingField; // 0x30
		::System::String* _MiddleIconPath_k__BackingField; // 0x38
		::System::String* _EquipmentLightMaterialPath_k__BackingField; // 0x40
		::System::String* _BgPath_k__BackingField; // 0x48
		::System::String* _FirstWordText_k__BackingField; // 0x50
		::LMNEKOLMGEM _Identifier_k__BackingField; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x60
		::RPG::Client::TextID _Desc_k__BackingField; // 0x70
		::System::Void _ctor(::LMNEKOLMGEM a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + GBDODOMIMIF_CTOR_OFFSET))(this, a1);
		}

		::LMNEKOLMGEM get_Identifier()
		{
			return ((::LMNEKOLMGEM(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiddleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_MIDDLEICONPATH_OFFSET))(this);
		}

		::System::Void set_MiddleIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_MIDDLEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_SMALLICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_EquipmentLightMaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this);
		}

		::System::Void set_EquipmentLightMaterialPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this, a1);
		}

		::System::String* get_Equipment3DTgaPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_EQUIPMENT3DTGAPATH_OFFSET))(this);
		}

		::System::Void set_Equipment3DTgaPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_EQUIPMENT3DTGAPATH_OFFSET))(this, a1);
		}

		::System::String* get_TalkIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_TALKICONPATH_OFFSET))(this);
		}

		::System::Void set_TalkIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_TALKICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_BgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_BGPATH_OFFSET))(this);
		}

		::System::Void set_BgPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_BGPATH_OFFSET))(this, a1);
		}

		::System::String* get_LightConeCardBackImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_LightConeCardBackImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_FirstWordText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDODOMIMIF_GET_FIRSTWORDTEXT_OFFSET))(this);
		}

		::System::Void set_FirstWordText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBDODOMIMIF_SET_FIRSTWORDTEXT_OFFSET))(this, a1);
		}

	};
