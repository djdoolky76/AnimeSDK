#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define ABC_UI_MONOTIPHIGHTCONTROLLER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2207A80)
#define ABC_UI_MONOTIPHIGHTCONTROLLER_BA56E8D8520EEA87_OFFSET UNITYSDK_OFFSET(0x2207BD0)
#define ABC_UI_MONOTIPHIGHTCONTROLLER_ED198FD3FF23AC20_OFFSET UNITYSDK_OFFSET(0x2207EB0)
#define ABC_UI_MONOTIPHIGHTCONTROLLER_F09E8F58CFDFC869_OFFSET UNITYSDK_OFFSET(0x2207D80)
#define ABC_UI_MONOTIPHIGHTCONTROLLER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x22078F0)
#define ABC_UI_MONOTIPHIGHTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoTipHightController_TypeDefinitionIndex = 9020;

	class MonoTipHightController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MaxHeight; // 0x20
		::System::Single Offset; // 0x24
		::UnityEngine::RectTransform* RefContent; // 0x28
		::System::Boolean UseParentSize; // 0x30
		::System::Boolean UseFixedHeight; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single FixedHeight; // 0x34
		::UnityEngine::RectTransform* E39642D7A92A8367; // 0x38

		::System::Void BA56E8D8520EEA87(::System::Single F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_UI_MONOTIPHIGHTCONTROLLER_BA56E8D8520EEA87_OFFSET))(this, F54AF627638DE3C9);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTIPHIGHTCONTROLLER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F09E8F58CFDFC869()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTIPHIGHTCONTROLLER_F09E8F58CFDFC869_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTIPHIGHTCONTROLLER_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void ED198FD3FF23AC20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTIPHIGHTCONTROLLER_ED198FD3FF23AC20_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTIPHIGHTCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
