#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFAMLCKCBAD.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/System/Object.h"
class CBBCJLFBKEG;
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class BadgeConfigRow; }
namespace System { class String; }

#define CBBCJLFBKEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC49D750)
#define CBBCJLFBKEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC49D980)
#define CBBCJLFBKEG_GET_BADGELEVEL_OFFSET UNITYSDK_OFFSET(0xC49DAD0)
#define CBBCJLFBKEG_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0xC49DA90)
#define CBBCJLFBKEG_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0xC49DA70)
#define CBBCJLFBKEG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC49DA50)
#define CBBCJLFBKEG_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC49DAB0)
#define CBBCJLFBKEG_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC49DA10)
#define CBBCJLFBKEG_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0xC49D9F0)
#define CBBCJLFBKEG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC49DAF0)
#define CBBCJLFBKEG_GET_ID_OFFSET UNITYSDK_OFFSET(0xC49D990)
#define CBBCJLFBKEG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC49D9D0)
#define CBBCJLFBKEG_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC49DA30)
#define CBBCJLFBKEG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC49D9B0)
#define CBBCJLFBKEG_SET_BADGELEVEL_OFFSET UNITYSDK_OFFSET(0xC49DAE0)
#define CBBCJLFBKEG_SET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0xC49DAA0)
#define CBBCJLFBKEG_SET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0xC49DA80)
#define CBBCJLFBKEG_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC49DA60)
#define CBBCJLFBKEG_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC49DAC0)
#define CBBCJLFBKEG_SET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC49DA20)
#define CBBCJLFBKEG_SET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0xC49DA00)
#define CBBCJLFBKEG_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC49DB10)
#define CBBCJLFBKEG_SET_ID_OFFSET UNITYSDK_OFFSET(0xC49D9A0)
#define CBBCJLFBKEG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC49D9E0)
#define CBBCJLFBKEG_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC49DA40)
#define CBBCJLFBKEG_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC49D9C0)

inline static constexpr unsigned int CBBCJLFBKEG_TypeDefinitionIndex = 74992;

	class CBBCJLFBKEG : public ::System::Object
	{
	public:
		::System::String* _IconFigurePath_k__BackingField; // 0x10
		::System::String* _PrefabPath_k__BackingField; // 0x18
		::System::String* _IconMiddlePath_k__BackingField; // 0x20
		::RPG::Client::TextID _ComeFromText_k__BackingField; // 0x28
		::RPG::GameCore::BadgePlayType _Type_k__BackingField; // 0x38
		::System::UInt32 _GroupID_k__BackingField; // 0x3C
		::RPG::Client::TextID _Name_k__BackingField; // 0x40
		::RPG::GameCore::BadgeLevel _BadgeLevel_k__BackingField; // 0x50
		::System::UInt32 _ComeFromGoto_k__BackingField; // 0x54
		::RPG::Client::TextID _Desc_k__BackingField; // 0x58
		::System::UInt32 _ID_k__BackingField; // 0x68
		::IFAMLCKCBAD _Identifier_k__BackingField; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_CTOR_OFFSET))(this);
		}

		static ::CBBCJLFBKEG* BPLPBPMEODA(::RPG::GameCore::BadgeConfigRow* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::CBBCJLFBKEG*(*)(::RPG::GameCore::BadgeConfigRow*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BadgePlayType get_Type()
		{
			return ((::RPG::GameCore::BadgePlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::BadgePlayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgePlayType))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_IconMiddlePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_ICONMIDDLEPATH_OFFSET))(this);
		}

		::System::Void set_IconMiddlePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_ICONMIDDLEPATH_OFFSET))(this, a1);
		}

		::System::String* get_IconFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_ICONFIGUREPATH_OFFSET))(this);
		}

		::System::Void set_IconFigurePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_ICONFIGUREPATH_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_PREFABPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ComeFromText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_COMEFROMTEXT_OFFSET))(this);
		}

		::System::Void set_ComeFromText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_COMEFROMTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ComeFromGoto()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_COMEFROMGOTO_OFFSET))(this);
		}

		::System::Void set_ComeFromGoto(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_COMEFROMGOTO_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BadgeLevel get_BadgeLevel()
		{
			return ((::RPG::GameCore::BadgeLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_BADGELEVEL_OFFSET))(this);
		}

		::System::Void set_BadgeLevel(::RPG::GameCore::BadgeLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgeLevel))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_BADGELEVEL_OFFSET))(this, a1);
		}

		::IFAMLCKCBAD get_Identifier()
		{
			return ((::IFAMLCKCBAD(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::IFAMLCKCBAD a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFAMLCKCBAD))((::PBYTE)hIl2Cpp + CBBCJLFBKEG_SET_IDENTIFIER_OFFSET))(this, a1);
		}

	};
