#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class FEIPLKMMIOI;
class PMOJJIAKPPG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA04E0)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TALKERICONPATH_OFFSET UNITYSDK_OFFSET(0xCFA0530)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xCFA05B0)

namespace RPG::Client::FateRin::Day
{
	class SwitchDayTalkEntryViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::AvatarSystem::IAvatar* _TalkerAvatarModel; // 0x20
		::PMOJJIAKPPG* _Model; // 0x28
		::System::Void _ctor(::PMOJJIAKPPG* a1, ::FEIPLKMMIOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PMOJJIAKPPG*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_TalkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TALKERICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKENTRYVIEWMODEL_GET_TEXT_OFFSET))(this);
		}

	};
}
