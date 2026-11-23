#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_B376123D45B44D21_OFFSET UNITYSDK_OFFSET(0x3ACBD80)
#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_FE53CA86682C43A4_OFFSET UNITYSDK_OFFSET(0x3ACBD50)
#define MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BubbleTooltipHost_TypeDefinitionIndex = 12169;

	class BubbleTooltipHost : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Tips; // 0x20

		::System::Void FE53CA86682C43A4(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_FE53CA86682C43A4_OFFSET))(this, E7336521BA8945EE);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST__CTOR_OFFSET))(this);
		}

		::System::Void B376123D45B44D21(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BUBBLETOOLTIPHOST_B376123D45B44D21_OFFSET))(this, E7336521BA8945EE);
		}
	};
}
