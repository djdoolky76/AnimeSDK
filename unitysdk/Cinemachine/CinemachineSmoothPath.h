#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachinePathBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define CINEMACHINE_CINEMACHINESMOOTHPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x19C687D0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x19C682D0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x19C67C40)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATETANGENT_OFFSET UNITYSDK_OFFSET(0x19C67EF0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GETBOUNDINGINDICES_OFFSET UNITYSDK_OFFSET(0x19C67B90)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x19C67810)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_LOOPED_OFFSET UNITYSDK_OFFSET(0x19C67800)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MAXPOS_OFFSET UNITYSDK_OFFSET(0x19C677C0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MINPOS_OFFSET UNITYSDK_OFFSET(0x19C677B0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x19C67840)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x19C67820)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_RESET_OFFSET UNITYSDK_OFFSET(0x19C67860)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_ROLLAROUNDFORWARD_OFFSET UNITYSDK_OFFSET(0x19C68770)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_UPDATECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x19C67940)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSmoothPath_TypeDefinitionIndex = 40677;

	class CinemachineSmoothPath : public ::Cinemachine::CinemachinePathBase
	{
	public:
		::System::Boolean m_Looped; // 0x48
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* m_Waypoints; // 0x50
		::Il2CppArray<::System::Object*>* m_ControlPoints1; // 0x58
		::Il2CppArray<::System::Object*>* m_ControlPoints2; // 0x60
		::System::Boolean m_IsLoopedCache; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_CTOR_OFFSET))(this);
		}

		::System::Single get_MinPos()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MINPOS_OFFSET))(this);
		}

		::System::Single get_MaxPos()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MAXPOS_OFFSET))(this);
		}

		::System::Boolean get_Looped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_LOOPED_OFFSET))(this);
		}

		::System::Int32 get_DistanceCacheSampleStepsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_RESET_OFFSET))(this);
		}

		::System::Void InvalidateDistanceCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_INVALIDATEDISTANCECACHE_OFFSET))(this);
		}

		::System::Void UpdateControlPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_UPDATECONTROLPOINTS_OFFSET))(this);
		}

		::System::Single GetBoundingIndices(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GETBOUNDINGINDICES_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 EvaluatePosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EvaluateTangent(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATETANGENT_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion EvaluateOrientation(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEORIENTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion RollAroundForward(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_ROLLAROUNDFORWARD_OFFSET))(this, a1);
		}

	};
}
