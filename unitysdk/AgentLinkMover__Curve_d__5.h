#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AgentLinkMover;
namespace UnityEngine::AI { class NavMeshAgent; }

#define AGENTLINKMOVER__CURVE_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x143BE330)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x143BE5B0)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x143BE610)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x143BE5C0)
#define AGENTLINKMOVER__CURVE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143BE320)
#define AGENTLINKMOVER__CURVE_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x143BE310)

inline static constexpr unsigned int AgentLinkMover__Curve_d__5_TypeDefinitionIndex = 79478;

template <typename T1, typename T2, typename T3, typename T4, typename T5>
class AgentLinkMover__Curve_d__5 : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshAgent* agent; // 0x10
	::System::Object* __2__current; // 0x18
	::AgentLinkMover* __4__this; // 0x20
	::UnityEngine::Vector3 _endPos_5__3; // 0x28
	::UnityEngine::Vector3 _startPos_5__2; // 0x34
	::System::Int32 __1__state; // 0x40
	::System::Single _normalizedTime_5__4; // 0x44
	::System::Single duration; // 0x48

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENTLINKMOVER__CURVE_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
