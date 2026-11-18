#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GETINTERACTDIRECTION_OFFSET UNITYSDK_OFFSET(0xB2FD7D0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GETPOINTPOS_OFFSET UNITYSDK_OFFSET(0xB2FD760)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_ACCURATE_OFFSET UNITYSDK_OFFSET(0xB2FD870)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_MAXANGLE_OFFSET UNITYSDK_OFFSET(0xB2FD8B0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_MINANGLE_OFFSET UNITYSDK_OFFSET(0xB2FD890)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0xB2FD8F0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0xB2FD8D0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_ACCURATE_OFFSET UNITYSDK_OFFSET(0xB2FD880)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_MAXANGLE_OFFSET UNITYSDK_OFFSET(0xB2FD8C0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_MINANGLE_OFFSET UNITYSDK_OFFSET(0xB2FD8A0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_RANGE_OFFSET UNITYSDK_OFFSET(0xB2FD900)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0xB2FD8E0)
#define NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FD910)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SimpleInteractionPoint_TypeDefinitionIndex = 49463;

	class SimpleInteractionPoint : public ::System::Object
	{
	public:
		::System::Single _MinAngle_k__BackingField; // 0x10
		::UnityEngine::Vector3 pos; // 0x14
		::System::Boolean _UseNavMesh_k__BackingField; // 0x20
		::System::Boolean _Accurate_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single _MaxAngle_k__BackingField; // 0x24
		::System::Single _Range_k__BackingField; // 0x28
		::UnityEngine::Vector3 direction; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPointPos(::System::Boolean isStaticPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GETPOINTPOS_OFFSET))(this, isStaticPos);
		}

		::UnityEngine::Vector3 GetInteractDirection(::UnityEngine::Vector3 avatarPosition, ::UnityEngine::Vector3 interactionNPCPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GETINTERACTDIRECTION_OFFSET))(this, avatarPosition, interactionNPCPosition);
		}

		::System::Boolean get_Accurate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_ACCURATE_OFFSET))(this);
		}

		::System::Void set_Accurate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_ACCURATE_OFFSET))(this, value);
		}

		::System::Single get_MinAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_MINANGLE_OFFSET))(this);
		}

		::System::Void set_MinAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_MINANGLE_OFFSET))(this, value);
		}

		::System::Single get_MaxAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_MAXANGLE_OFFSET))(this);
		}

		::System::Void set_MaxAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_MAXANGLE_OFFSET))(this, value);
		}

		::System::Boolean get_UseNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_USENAVMESH_OFFSET))(this);
		}

		::System::Void set_UseNavMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_USENAVMESH_OFFSET))(this, value);
		}

		::System::Single get_Range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_GET_RANGE_OFFSET))(this);
		}

		::System::Void set_Range(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SIMPLEINTERACTIONPOINT_SET_RANGE_OFFSET))(this, value);
		}
	};
}
