#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MINFEAKALGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB95F890)
#define MINFEAKALGE_GET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xB95F850)
#define MINFEAKALGE_GET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB95F830)
#define MINFEAKALGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB95F810)
#define MINFEAKALGE_GET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xB95F870)
#define MINFEAKALGE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB95F7D0)
#define MINFEAKALGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB95F7F0)
#define MINFEAKALGE_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB95F7B0)
#define MINFEAKALGE_SET_DESCASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xB95F860)
#define MINFEAKALGE_SET_DESCASPRELEVEL_OFFSET UNITYSDK_OFFSET(0xB95F840)
#define MINFEAKALGE_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB95F820)
#define MINFEAKALGE_SET_ICON128PATH_OFFSET UNITYSDK_OFFSET(0xB95F880)
#define MINFEAKALGE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB95F7E0)
#define MINFEAKALGE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB95F800)
#define MINFEAKALGE_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB95F7C0)

inline static constexpr unsigned int MINFEAKALGE_TypeDefinitionIndex = 81696;

	class MINFEAKALGE : public ::System::Object
	{
	public:
		::System::String* _Icon128Path_k__BackingField; // 0x10
		::RPG::Client::TextID _DescAsPreLevel_k__BackingField; // 0x18
		::RPG::Client::TextID _DescAsNextLevel_k__BackingField; // 0x28
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x48
		::System::UInt32 _SkillID_k__BackingField; // 0x4C
		::RPG::Client::TextID _Desc_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DescAsPreLevel()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_DESCASPRELEVEL_OFFSET))(this);
		}

		::System::Void set_DescAsPreLevel(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_DESCASPRELEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DescAsNextLevel()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_DESCASNEXTLEVEL_OFFSET))(this);
		}

		::System::Void set_DescAsNextLevel(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_DESCASNEXTLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_Icon128Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFEAKALGE_GET_ICON128PATH_OFFSET))(this);
		}

		::System::Void set_Icon128Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MINFEAKALGE_SET_ICON128PATH_OFFSET))(this, a1);
		}

	};
