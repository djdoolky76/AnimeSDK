#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEIPLKMMIOI;
class GBDIKBFIMIM;
class LHOBHBJNMEL;
namespace RPG::Client::FateRin::Day { class SwitchDayTalkViewModel; }

#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATEBYDAY_OFFSET UNITYSDK_OFFSET(0xCFA0C10)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCFA0D50)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA0C00)

namespace RPG::Client::FateRin::Day
{
	class SwitchDayTalkViewModelFactory : public ::System::Object
	{
	public:
		::LHOBHBJNMEL* _Service; // 0x10
		::FEIPLKMMIOI* _AvatarService; // 0x18
		::System::Void _ctor(::LHOBHBJNMEL* a1, ::FEIPLKMMIOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LHOBHBJNMEL*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Day::SwitchDayTalkViewModel* CreateByDay(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateRin::Day::SwitchDayTalkViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATEBYDAY_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Day::SwitchDayTalkViewModel* Create(::GBDIKBFIMIM* a1)
		{
			return ((::RPG::Client::FateRin::Day::SwitchDayTalkViewModel*(*)(::PVOID, ::GBDIKBFIMIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODELFACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
