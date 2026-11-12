#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/AgentHandle.h"
#include "unitysdk/UnityEngine/AI/AsyncNavMeshAgent_MotionSnapshot.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_CREATEMOTIONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x20658DC0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_CTOR_OFFSET UNITYSDK_OFFSET(0x20658DA0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x20659030)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x20658E80)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x20658ED0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x20658F80)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x20659150)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x20658E30)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x20659270)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_RECORDSTATE_OFFSET UNITYSDK_OFFSET(0x20659390)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUMESTATE_OFFSET UNITYSDK_OFFSET(0x20659430)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUME_OFFSET UNITYSDK_OFFSET(0x20659630)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_AUTOBRAKING_OFFSET UNITYSDK_OFFSET(0x20658DD0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x206590E0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXACCELERATION_OFFSET UNITYSDK_OFFSET(0x20658F20)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x20658FD0)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_OVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x20659200)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x20659320)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x20659500)
#define UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_OFFSET UNITYSDK_OFFSET(0x206594B0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshAgent_TypeDefinitionIndex = 5674;

	class AsyncNavMeshAgent : public ::System::Object
	{
	public:
		::UnityEngine::AI::AgentHandle m_Handle; // 0x10
		::UnityEngine::AI::AsyncNavMeshSimulator* m_Owner; // 0x18
		::UnityEngine::AI::AsyncNavMeshAgent_MotionSnapshot m_MotionSnapshot; // 0x20
		::System::Void _ctor(::UnityEngine::AI::AgentHandle a1, ::UnityEngine::AI::AsyncNavMeshSimulator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AgentHandle, ::UnityEngine::AI::AsyncNavMeshSimulator*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CreateMotionSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_CREATEMOTIONSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_autoBraking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_AUTOBRAKING_OFFSET))(this, a1);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_maxAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXACCELERATION_OFFSET))(this);
		}

		::System::Void set_maxAcceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXACCELERATION_OFFSET))(this, a1);
		}

		::System::Single get_maxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_maxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_destination()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_DESTINATION_OFFSET))(this);
		}

		::System::Void set_destination(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_DESTINATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_overridePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_OVERRIDEPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_SET_VELOCITY_OFFSET))(this, a1);
		}

		::System::Void RecordState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_RECORDSTATE_OFFSET))(this);
		}

		::System::Void ResumeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUMESTATE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_OFFSET))(this);
		}

		::System::Void Stop_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_STOP_1_OFFSET))(this, a1, a2);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHAGENT_RESUME_OFFSET))(this);
		}

	};
}
