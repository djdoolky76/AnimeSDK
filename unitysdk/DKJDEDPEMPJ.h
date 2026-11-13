#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DKJDEDPEMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18C208A0)
#define DKJDEDPEMPJ_GET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x18C20840)
#define DKJDEDPEMPJ_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x18C20760)
#define DKJDEDPEMPJ_GET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0x18C20780)
#define DKJDEDPEMPJ_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18C20820)
#define DKJDEDPEMPJ_GET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0x18C20800)
#define DKJDEDPEMPJ_GET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x18C20860)
#define DKJDEDPEMPJ_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x18C207E0)
#define DKJDEDPEMPJ_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x18C207C0)
#define DKJDEDPEMPJ_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x18C20880)
#define DKJDEDPEMPJ_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x18C207A0)
#define DKJDEDPEMPJ_SET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x18C20850)
#define DKJDEDPEMPJ_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x18C20770)
#define DKJDEDPEMPJ_SET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0x18C20790)
#define DKJDEDPEMPJ_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18C20830)
#define DKJDEDPEMPJ_SET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0x18C20810)
#define DKJDEDPEMPJ_SET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x18C20870)
#define DKJDEDPEMPJ_SET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x18C207F0)
#define DKJDEDPEMPJ_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x18C207D0)
#define DKJDEDPEMPJ_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x18C20890)
#define DKJDEDPEMPJ_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x18C207B0)

inline static constexpr unsigned int DKJDEDPEMPJ_TypeDefinitionIndex = 63917;

	class DKJDEDPEMPJ : public ::System::Object
	{
	public:
		::System::String* _ItemCurrencyIconPath_k__BackingField; // 0x10
		::System::String* _FigureIconPath_k__BackingField; // 0x18
		::System::String* _JsonPath_k__BackingField; // 0x20
		::System::String* _IconPath_k__BackingField; // 0x28
		::System::Boolean _HasItemDisplay_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ItemRarity _Rarity_k__BackingField; // 0x34
		::RPG::Client::TextID _ItemName_k__BackingField; // 0x38
		::RPG::Client::TextID _ItemBGDesc_k__BackingField; // 0x48
		::RPG::GameCore::TargetGenderType _Gender_k__BackingField; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _ItemDesc_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TargetGenderType get_Gender()
		{
			return ((::RPG::GameCore::TargetGenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::RPG::GameCore::TargetGenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_GENDER_OFFSET))(this, a1);
		}

		::System::Boolean get_HasItemDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_HASITEMDISPLAY_OFFSET))(this);
		}

		::System::Void set_HasItemDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_HASITEMDISPLAY_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemRarity get_Rarity()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::GameCore::ItemRarity a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_RARITY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_ITEMNAME_OFFSET))(this);
		}

		::System::Void set_ItemName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_ITEMNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_ITEMDESC_OFFSET))(this);
		}

		::System::Void set_ItemDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_ITEMDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_ITEMBGDESC_OFFSET))(this);
		}

		::System::Void set_ItemBGDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_ITEMBGDESC_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_FigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_FIGUREICONPATH_OFFSET))(this);
		}

		::System::Void set_FigureIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_FIGUREICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ItemCurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_ITEMCURRENCYICONPATH_OFFSET))(this);
		}

		::System::Void set_ItemCurrencyIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_ITEMCURRENCYICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_GET_JSONPATH_OFFSET))(this);
		}

		::System::Void set_JsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKJDEDPEMPJ_SET_JSONPATH_OFFSET))(this, a1);
		}

	};
