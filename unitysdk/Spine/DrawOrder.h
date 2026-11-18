#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_DRAWORDER_CONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1EBF0470)
#define SPINE_DRAWORDER_GET_APPLIEDPOSE_OFFSET UNITYSDK_OFFSET(0x1EBF0450)
#define SPINE_DRAWORDER_GET_POSE_OFFSET UNITYSDK_OFFSET(0x1EBF0440)
#define SPINE_DRAWORDER_RESETCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1EBF0480)
#define SPINE_DRAWORDER_SETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1EBF0340)
#define SPINE_DRAWORDER_UNCONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1EBF0460)
#define SPINE_DRAWORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF02B0)

namespace Spine
{
	inline static constexpr unsigned int DrawOrder_TypeDefinitionIndex = 32991;

	class DrawOrder : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Slot*>* appliedPose; // 0x10
		::Spine::ExposedList_1<::Spine::Slot*>* pose; // 0x18
		::Spine::ExposedList_1<::Spine::Slot*>* setupPose; // 0x20
		::Spine::ExposedList_1<::Spine::Slot*>* constrainedPose; // 0x28

		::System::Void _ctor(::Spine::ExposedList_1<::Spine::Slot*>* setupPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Slot*>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER__CTOR_OFFSET))(this, setupPose);
		}

		::System::Void SetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER_SETUPPOSE_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Slot*>* get_Pose()
		{
			return ((::Spine::ExposedList_1<::Spine::Slot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER_GET_POSE_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Slot*>* get_AppliedPose()
		{
			return ((::Spine::ExposedList_1<::Spine::Slot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER_GET_APPLIEDPOSE_OFFSET))(this);
		}

		::System::Void Unconstrained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER_UNCONSTRAINED_OFFSET))(this);
		}

		::System::Void Constrained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER_CONSTRAINED_OFFSET))(this);
		}

		::System::Void ResetConstrained()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDER_RESETCONSTRAINED_OFFSET))(this);
		}
	};
}
