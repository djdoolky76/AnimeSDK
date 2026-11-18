#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Constraint.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET_GET_ROTATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1F505180)
#define ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET_UPDATECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1F504F70)
#define ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F505200)
#define ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5051F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int ConstraintRotationOffset_TypeDefinitionIndex = 36885;

	class ConstraintRotationOffset : public ::RootMotion::FinalIK::Constraint
	{
	public:
		::UnityEngine::Quaternion offset; // 0x20
		::UnityEngine::Quaternion defaultRotation; // 0x30
		::UnityEngine::Quaternion defaultLocalRotation; // 0x40
		::UnityEngine::Quaternion lastLocalRotation; // 0x50
		::UnityEngine::Quaternion defaultTargetLocalRotation; // 0x60
		::System::Boolean initiated; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void UpdateConstraint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET_UPDATECONSTRAINT_OFFSET))(this);
		}

		::System::Boolean get_rotationChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATIONOFFSET_GET_ROTATIONCHANGED_OFFSET))(this);
		}
	};
}
