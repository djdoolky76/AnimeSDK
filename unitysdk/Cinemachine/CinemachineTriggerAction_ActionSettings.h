#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineTriggerAction_ActionSettings_AE5F98548705B732.h"
#include "unitysdk/Cinemachine/CinemachineTriggerAction_ActionSettings_F2C66747C5AEE2D8.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineTriggerAction_ActionSettings_TriggerEvent; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS_INVOKE_OFFSET UNITYSDK_OFFSET(0x2A7D980)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2A7DEB0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_ActionSettings_TypeDefinitionIndex = 18472;

	struct alignas(8) CinemachineTriggerAction_ActionSettings
	{
		::Cinemachine::CinemachineTriggerAction_ActionSettings_F2C66747C5AEE2D8 m_Action; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Object* m_Target; // 0x18
		::System::Int32 m_BoostAmount; // 0x20
		::System::Single m_StartTime; // 0x24
		::Cinemachine::CinemachineTriggerAction_ActionSettings_AE5F98548705B732 m_Mode; // 0x28
		::System::Byte _padding1[0x4];
		::Cinemachine::CinemachineTriggerAction_ActionSettings_TriggerEvent* m_Event; // 0x30

		::System::Void _ctor(::Cinemachine::CinemachineTriggerAction_ActionSettings_F2C66747C5AEE2D8 BC288918C940C7A6)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineTriggerAction_ActionSettings_F2C66747C5AEE2D8))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET))(this, BC288918C940C7A6);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS_INVOKE_OFFSET))(this);
		}
	};
}
