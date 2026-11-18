#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelTriggerAction_ActionSettings_JFABEHBAKNF.h"
#include "unitysdk/MoleMole/MonoLevelTriggerAction_ActionSettings_OOJENGGCNKM.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoLevelTriggerAction_ActionSettings_TriggerEvent; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x723FE0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x723F70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelTriggerAction_ActionSettings_TypeDefinitionIndex = 53626;

	struct alignas(8) MonoLevelTriggerAction_ActionSettings
	{
		::MoleMole::MonoLevelTriggerAction_ActionSettings_JFABEHBAKNF m_Action; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Object* m_Target; // 0x18
		::System::Int32 m_BoostAmount; // 0x20
		::System::Single m_StartTime; // 0x24
		::MoleMole::MonoLevelTriggerAction_ActionSettings_OOJENGGCNKM m_Mode; // 0x28
		::System::Byte _padding1[0x4];
		::MoleMole::MonoLevelTriggerAction_ActionSettings_TriggerEvent* m_Event; // 0x30

		::System::Void _ctor(::MoleMole::MonoLevelTriggerAction_ActionSettings_JFABEHBAKNF GJBHEJGENMI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelTriggerAction_ActionSettings_JFABEHBAKNF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS__CTOR_OFFSET))(this, GJBHEJGENMI);
		}

		::System::Void IGJIGJCLNKJ(::UnityEngine::GameObject* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS_IGJIGJCLNKJ_OFFSET))(this, LIBPKNHDIGP);
		}
	};
}
