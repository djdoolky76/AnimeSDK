#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SealPoolManager; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_SEALPOOLMANAGER___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C09BB80)
#define RPG_CLIENT_SEALPOOLMANAGER___C__DISPLAYCLASS11_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1C09BDF0)
#define RPG_CLIENT_SEALPOOLMANAGER___C__DISPLAYCLASS11_0__UPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x1C09BFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SealPoolManager___c__DisplayClass11_0_TypeDefinitionIndex = 61715;

	class SealPoolManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* seal; // 0x10
		::RPG::Client::SealPoolManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER___C__DISPLAYCLASS11_0__UPDATE_B__0_OFFSET))(this);
		}

		::System::Void _Update_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEALPOOLMANAGER___C__DISPLAYCLASS11_0__UPDATE_B__1_OFFSET))(this);
		}

	};
}
