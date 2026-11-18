#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAnalogClockAnimation_HBCHOFIONGP.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIANALOGCLOCKANIMATION_KJICDJGJHFJ_OFFSET UNITYSDK_OFFSET(0x14C028B0)
#define MOLEMOLE_UIANALOGCLOCKANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14C026E0)
#define MOLEMOLE_UIANALOGCLOCKANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x14C02B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnalogClockAnimation_TypeDefinitionIndex = 82585;

	class UIAnalogClockAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* ModelHour; // 0x18
		::UnityEngine::Transform* ModelMinute; // 0x20
		::UnityEngine::Transform* ModelSecond; // 0x28
		::UnityEngine::Quaternion RotationAt12; // 0x30
		::UnityEngine::Quaternion RotationAt4; // 0x40
		::UnityEngine::Quaternion RotationAt8; // 0x50
		::MoleMole::UIAnalogClockAnimation_HBCHOFIONGP TimeSource; // 0x60
		::System::Single TickInterval; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANALOGCLOCKANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANALOGCLOCKANIMATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void KJICDJGJHFJ(::UnityEngine::Transform* IAONGDJHJOG, ::System::Single EJAOAGGJHHA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANALOGCLOCKANIMATION_KJICDJGJHFJ_OFFSET))(this, IAONGDJHJOG, EJAOAGGJHHA);
		}
	};
}
