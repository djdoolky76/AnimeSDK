#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Nullable; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA93E0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS1_0__ASYNCINITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0xCFAA0F0)

namespace RPG::Client::FateRin::HouguMap
{
	class FateRinHouguMapViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::HouguMap::FateRinHouguMapViewModel* __4__this; // 0x10
		::System::Nullable* currentPassFightID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _AsyncInitialize_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS1_0__ASYNCINITIALIZE_B__0_OFFSET))(this);
		}

	};
}
