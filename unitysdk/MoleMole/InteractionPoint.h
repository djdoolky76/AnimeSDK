#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECMMFJGJDKL.h"
#include "unitysdk/GIDJDKCFICH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_INTERACTIONPOINT_DEGAODLIHOF_OFFSET UNITYSDK_OFFSET(0x146714A0)
#define MOLEMOLE_INTERACTIONPOINT_GETINTERACTDIRECTION_OFFSET UNITYSDK_OFFSET(0x146711B0)
#define MOLEMOLE_INTERACTIONPOINT_GETPOINTPOS_OFFSET UNITYSDK_OFFSET(0x14670FC0)
#define MOLEMOLE_INTERACTIONPOINT_GET_ACCURATE_OFFSET UNITYSDK_OFFSET(0x14671450)
#define MOLEMOLE_INTERACTIONPOINT_GET_MAXANGLE_OFFSET UNITYSDK_OFFSET(0x14671470)
#define MOLEMOLE_INTERACTIONPOINT_GET_MINANGLE_OFFSET UNITYSDK_OFFSET(0x14671460)
#define MOLEMOLE_INTERACTIONPOINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x14670F80)
#define MOLEMOLE_INTERACTIONPOINT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x14671490)
#define MOLEMOLE_INTERACTIONPOINT_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0x14671480)
#define MOLEMOLE_INTERACTIONPOINT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x14670F90)
#define MOLEMOLE_INTERACTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x14670FA0)

namespace MoleMole
{
	inline static constexpr unsigned int InteractionPoint_TypeDefinitionIndex = 66308;

	class InteractionPoint : public ::System::Object
	{
	public:
		::UnityEngine::Transform* pointTransform; // 0x10
		::System::Single range; // 0x18
		::System::Single minAngle; // 0x1C
		::System::Single maxAngle; // 0x20
		::GIDJDKCFICH DirectionType; // 0x24
		::System::Boolean useNavmesh; // 0x28
		::System::Byte _padding0[0x3];
		::ECMMFJGJDKL interactType; // 0x2C
		::System::Boolean accurate; // 0x30
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 pointTransformOffset; // 0x34
		::UnityEngine::Vector3 pointCalculatedPos; // 0x40
		::System::Boolean isDirty; // 0x4C
		::System::Byte _padding2[0x3];
		::System::String* _Name_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_SET_NAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector3 GetPointPos(::System::Boolean DMIPIMLDDEG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GETPOINTPOS_OFFSET))(this, DMIPIMLDDEG);
		}

		::UnityEngine::Vector3 GetInteractDirection(::UnityEngine::Vector3 AMDPLEJDOPK, ::UnityEngine::Vector3 HLJFAHOHOID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GETINTERACTDIRECTION_OFFSET))(this, AMDPLEJDOPK, HLJFAHOHOID);
		}

		::System::Boolean get_Accurate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_ACCURATE_OFFSET))(this);
		}

		::System::Single get_MinAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_MINANGLE_OFFSET))(this);
		}

		::System::Single get_MaxAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_MAXANGLE_OFFSET))(this);
		}

		::System::Boolean get_UseNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_USENAVMESH_OFFSET))(this);
		}

		::System::Single get_Range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_RANGE_OFFSET))(this);
		}

		::System::Void DEGAODLIHOF(::UnityEngine::Vector3 MOGOKNOGEFC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_DEGAODLIHOF_OFFSET))(this, MOGOKNOGEFC);
		}
	};
}
