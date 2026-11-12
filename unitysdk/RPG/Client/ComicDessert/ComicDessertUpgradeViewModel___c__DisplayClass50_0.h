#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTUPGRADEVIEWMODEL___C__DISPLAYCLASS50_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD50D9F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTUPGRADEVIEWMODEL___C__DISPLAYCLASS50_0__REQUESTUPGRADE_B__0_OFFSET UNITYSDK_OFFSET(0xD50F710)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertUpgradeViewModel___c__DisplayClass50_0_TypeDefinitionIndex = 77147;

	class ComicDessertUpgradeViewModel___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* deviceIds; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTUPGRADEVIEWMODEL___C__DISPLAYCLASS50_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestUpgrade_b__0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTUPGRADEVIEWMODEL___C__DISPLAYCLASS50_0__REQUESTUPGRADE_B__0_OFFSET))(this, a1);
		}

	};
}
