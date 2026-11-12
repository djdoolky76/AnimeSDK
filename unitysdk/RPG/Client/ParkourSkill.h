#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ParkourSkill; }
namespace RPG::GameCore { class ParkourRailBallSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURSKILL_CREATE_OFFSET UNITYSDK_OFFSET(0xE4D9FA0)
#define RPG_CLIENT_PARKOURSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0xE4DD490)
#define RPG_CLIENT_PARKOURSKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE4D9C30)
#define RPG_CLIENT_PARKOURSKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE4D9D50)
#define RPG_CLIENT_PARKOURSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xE4DA050)
#define RPG_CLIENT_PARKOURSKILL_GET_MINIICONBGPATH_OFFSET UNITYSDK_OFFSET(0xE4D9F50)
#define RPG_CLIENT_PARKOURSKILL_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xE4D9E50)
#define RPG_CLIENT_PARKOURSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE4D9AF0)
#define RPG_CLIENT_PARKOURSKILL_GET_TUTORIALID_OFFSET UNITYSDK_OFFSET(0xE4DD440)
#define RPG_CLIENT_PARKOURSKILL_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xE4DD3F0)
#define RPG_CLIENT_PARKOURSKILL_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0xE4DD3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSkill_TypeDefinitionIndex = 63269;

	class ParkourSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::ParkourRailBallSkillConfigRow* _Meta; // 0x10
		::System::Void _ctor(::RPG::GameCore::ParkourRailBallSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourRailBallSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_ID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconBGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_MINIICONBGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_DESC_OFFSET))(this);
		}

		::System::String* get_VideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_VIDEOPATH_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_VIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_TutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_TUTORIALID_OFFSET))(this);
		}

		static ::RPG::Client::ParkourSkill* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourSkill*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_CREATE_OFFSET))(a1);
		}

	};
}
