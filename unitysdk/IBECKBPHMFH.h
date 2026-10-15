#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/System/Object.h"
class IBECKBPHMFH;
namespace System { class String; }

#define IBECKBPHMFH_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15E1F710)
#define IBECKBPHMFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E1F810)
#define IBECKBPHMFH_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15E1F960)
#define IBECKBPHMFH_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x15E1F900)
#define IBECKBPHMFH_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x15E1F8A0)
#define IBECKBPHMFH_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x15E1F8C0)
#define IBECKBPHMFH_GET_LOGICJSONPATH_OFFSET UNITYSDK_OFFSET(0x15E1F980)
#define IBECKBPHMFH_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x15E1F8E0)
#define IBECKBPHMFH_GET_RARE_OFFSET UNITYSDK_OFFSET(0x15E1F920)
#define IBECKBPHMFH_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x15E1F940)
#define IBECKBPHMFH_GET_VIEWJSONPATH_OFFSET UNITYSDK_OFFSET(0x15E1F9A0)
#define IBECKBPHMFH_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15E1F970)
#define IBECKBPHMFH_SET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x15E1F910)
#define IBECKBPHMFH_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x15E1F8B0)
#define IBECKBPHMFH_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x15E1F8D0)
#define IBECKBPHMFH_SET_LOGICJSONPATH_OFFSET UNITYSDK_OFFSET(0x15E1F990)
#define IBECKBPHMFH_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x15E1F8F0)
#define IBECKBPHMFH_SET_RARE_OFFSET UNITYSDK_OFFSET(0x15E1F930)
#define IBECKBPHMFH_SET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x15E1F950)
#define IBECKBPHMFH_SET_VIEWJSONPATH_OFFSET UNITYSDK_OFFSET(0x15E1F9B0)

inline static constexpr unsigned int IBECKBPHMFH_TypeDefinitionIndex = 81286;

	class IBECKBPHMFH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _TagList_k__BackingField; // 0x10
		::Il2CppArray<::System::Int32>* _ParamList_k__BackingField; // 0x18
		::System::String* _ViewJsonPath_k__BackingField; // 0x20
		::System::String* _LogicJsonPath_k__BackingField; // 0x28
		::System::String* _IconPath_k__BackingField; // 0x30
		::RPG::Client::TextID _ItemDesc_k__BackingField; // 0x38
		::RPG::Client::TextID _ItemName_k__BackingField; // 0x48
		::System::UInt32 _ItemID_k__BackingField; // 0x58
		::RPG::GameCore::ChenLingFesItemRare _Rare_k__BackingField; // 0x5C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBECKBPHMFH_CTOR_OFFSET))(this, a1);
		}

		static ::IBECKBPHMFH* ACMKLFOMPFC(::System::UInt32 a1)
		{
			return ((::IBECKBPHMFH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IBECKBPHMFH_ACMKLFOMPFC_OFFSET))(a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_ITEMID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_ITEMNAME_OFFSET))(this);
		}

		::System::Void set_ItemName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_ITEMNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_ITEMDESC_OFFSET))(this);
		}

		::System::Void set_ItemDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_ITEMDESC_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingFesItemRare get_Rare()
		{
			return ((::RPG::GameCore::ChenLingFesItemRare(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_RARE_OFFSET))(this);
		}

		::System::Void set_Rare(::RPG::GameCore::ChenLingFesItemRare a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemRare))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_RARE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_TagList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void set_TagList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_TAGLIST_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_LogicJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_LOGICJSONPATH_OFFSET))(this);
		}

		::System::Void set_LogicJsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_LOGICJSONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ViewJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECKBPHMFH_GET_VIEWJSONPATH_OFFSET))(this);
		}

		::System::Void set_ViewJsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBECKBPHMFH_SET_VIEWJSONPATH_OFFSET))(this, a1);
		}

	};
