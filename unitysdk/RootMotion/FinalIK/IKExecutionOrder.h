#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class IK; }
namespace UnityEngine { class Animator; }

#define ROOTMOTION_FINALIK_IKEXECUTIONORDER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6FD9A0)
#define ROOTMOTION_FINALIK_IKEXECUTIONORDER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F6FD900)
#define ROOTMOTION_FINALIK_IKEXECUTIONORDER_GET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x1F6FD5E0)
#define ROOTMOTION_FINALIK_IKEXECUTIONORDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6FDB00)
#define ROOTMOTION_FINALIK_IKEXECUTIONORDER_START_OFFSET UNITYSDK_OFFSET(0x1F6FD730)
#define ROOTMOTION_FINALIK_IKEXECUTIONORDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6FD7A0)
#define ROOTMOTION_FINALIK_IKEXECUTIONORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FDD10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKExecutionOrder_TypeDefinitionIndex = 36994;

	class IKExecutionOrder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::IK*>* IKComponents; // 0x18
		::UnityEngine::Animator* animator; // 0x20
		::System::Boolean fixedFrame; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_animatePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER_GET_ANIMATEPHYSICS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEXECUTIONORDER_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
