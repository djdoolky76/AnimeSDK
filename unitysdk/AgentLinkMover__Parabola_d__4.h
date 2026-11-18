#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI { class NavMeshAgent; }

#define AGENTLINKMOVER__PARABOLA_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF783510)
#define AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF783780)
#define AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7837E0)
#define AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF783790)
#define AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF783500)
#define AGENTLINKMOVER__PARABOLA_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xF7834F0)

inline static constexpr unsigned int AgentLinkMover__Parabola_d__4_TypeDefinitionIndex = 79477;

template <typename T1, typename T2, typename T3, typename T4>
class AgentLinkMover__Parabola_d__4 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::UnityEngine::AI::NavMeshAgent* agent; // 0x18
	::System::Single duration; // 0x20
	::UnityEngine::Vector3 _startPos_5__2; // 0x24
	::UnityEngine::Vector3 _endPos_5__3; // 0x30
	::System::Single height; // 0x3C
	::System::Single _normalizedTime_5__4; // 0x40
	::System::Int32 __1__state; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__PARABOLA_D__4__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__PARABOLA_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__PARABOLA_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
