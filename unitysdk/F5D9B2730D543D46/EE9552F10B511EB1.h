#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5D9B2730D543D46/A33C60DDFBEAF685.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define F5D9B2730D543D46_EE9552F10B511EB1_B5FD2705C564220D_OFFSET UNITYSDK_OFFSET(0x4394490)
#define F5D9B2730D543D46_EE9552F10B511EB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBBD0)

namespace F5D9B2730D543D46
{
	inline static constexpr unsigned int EE9552F10B511EB1_TypeDefinitionIndex = 18554;

	class EE9552F10B511EB1 : public ::F5D9B2730D543D46::A33C60DDFBEAF685
	{
	public:
		::UnityEngine::EventSystems::EventSystem* E49DE51D9C73EAB7; // 0x18

		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* BE2C08ABFD5A1419)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + F5D9B2730D543D46_EE9552F10B511EB1__CTOR_OFFSET))(this, BE2C08ABFD5A1419);
		}

		::System::Void B5FD2705C564220D(::UnityEngine::GameObject* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + F5D9B2730D543D46_EE9552F10B511EB1_B5FD2705C564220D_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
