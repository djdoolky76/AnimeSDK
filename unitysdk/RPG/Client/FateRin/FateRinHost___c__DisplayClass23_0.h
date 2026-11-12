#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD925970)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0xD9278F0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass23_0_TypeDefinitionIndex = 83308;

	class FateRinHost___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 performanceID; // 0x10
		::System::UInt32 entranceID; // 0x14
		::System::UInt32 contentID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryBackToMainPageAndPlayEasterEggPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__0_OFFSET))(this);
		}

	};
}
