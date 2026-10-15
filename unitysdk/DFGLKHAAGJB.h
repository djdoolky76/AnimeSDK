#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DFGLKHAAGJB_CTOR_OFFSET UNITYSDK_OFFSET(0xE8226E0)
#define DFGLKHAAGJB_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE822820)
#define DFGLKHAAGJB_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE822800)
#define DFGLKHAAGJB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE8227E0)
#define DFGLKHAAGJB_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE822840)
#define DFGLKHAAGJB_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xE8227C0)
#define DFGLKHAAGJB_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xE822880)
#define DFGLKHAAGJB_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xE822860)
#define DFGLKHAAGJB_SET_DESC_OFFSET UNITYSDK_OFFSET(0xE822830)
#define DFGLKHAAGJB_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE822810)
#define DFGLKHAAGJB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE8227F0)
#define DFGLKHAAGJB_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE822850)
#define DFGLKHAAGJB_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xE8227D0)
#define DFGLKHAAGJB_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xE822890)
#define DFGLKHAAGJB_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xE822870)

inline static constexpr unsigned int DFGLKHAAGJB_TypeDefinitionIndex = 79032;

	class DFGLKHAAGJB : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x1C
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::RPG::GameCore::TeamTowersPlayerSkillType _SkillType_k__BackingField; // 0x40
		::System::UInt32 _VideoID_k__BackingField; // 0x44
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_VIDEOID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersPlayerSkillType get_SkillType()
		{
			return ((::RPG::GameCore::TeamTowersPlayerSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::TeamTowersPlayerSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerSkillType))((::PBYTE)hIl2Cpp + DFGLKHAAGJB_SET_SKILLTYPE_OFFSET))(this, a1);
		}

	};
