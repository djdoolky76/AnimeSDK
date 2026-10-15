#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA6420)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0xCFA6430)

namespace RPG::Client::FateRin
{
	template <typename T>
	class FateRinHost___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::UInt32 expectedContentID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1_CTOR_OFFSET))(this);
		}

		::System::Void _TryBackToMainPageAndPlayEasterEggPerformance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__1_OFFSET))(this);
		}

	};
}
