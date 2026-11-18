#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class SlotData; }

#define SPINE_SLOT_GET_BONE_OFFSET UNITYSDK_OFFSET(0x1FF61DA0)
#define SPINE_SLOT_SETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1FF61A10)
#define SPINE_SLOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF61B90)
#define SPINE_SLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF61810)

namespace Spine
{
	inline static constexpr unsigned int Slot_TypeDefinitionIndex = 33069;

	class Slot
	{
	public:
		::Spine::Skeleton* skeleton; // 0x30
		::Spine::Bone* bone; // 0x38
		::System::Int32 attachmentState; // 0x40

		::System::Void _ctor(::Spine::SlotData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SlotData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SLOT__CTOR_OFFSET))(this, data, skeleton);
		}

		::System::Void _ctor_1(::Spine::Slot* slot, ::Spine::Bone* bone, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Spine::Bone*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SLOT__CTOR_1_OFFSET))(this, slot, bone, skeleton);
		}

		::Spine::Bone* get_Bone()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_BONE_OFFSET))(this);
		}

		::System::Void SetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SETUPPOSE_OFFSET))(this);
		}
	};
}
