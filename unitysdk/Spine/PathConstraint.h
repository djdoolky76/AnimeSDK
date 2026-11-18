#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Physics.h"

namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class BonePose; }
namespace Spine { class IConstraint; }
namespace Spine { class PathAttachment; }
namespace Spine { class PathConstraintData; }
namespace Spine { class Skeleton; }
namespace Spine { class Skin; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1F778380)
#define SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET UNITYSDK_OFFSET(0x1F778170)
#define SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F778590)
#define SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET UNITYSDK_OFFSET(0x1F775930)
#define SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1F776AC0)
#define SPINE_PATHCONSTRAINT_COPY_OFFSET UNITYSDK_OFFSET(0x1F775890)
#define SPINE_PATHCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1F779150)
#define SPINE_PATHCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F779120)
#define SPINE_PATHCONSTRAINT_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x1F779160)
#define SPINE_PATHCONSTRAINT_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x1F779170)
#define SPINE_PATHCONSTRAINT_SORTPATHSLOT_OFFSET UNITYSDK_OFFSET(0x1F778B40)
#define SPINE_PATHCONSTRAINT_SORTPATH_OFFSET UNITYSDK_OFFSET(0x1F778EF0)
#define SPINE_PATHCONSTRAINT_SORT_OFFSET UNITYSDK_OFFSET(0x1F7788E0)
#define SPINE_PATHCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F775A10)
#define SPINE_PATHCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7752E0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraint_TypeDefinitionIndex = 33033;

	class PathConstraint
	{
	public:
		// static const ::System::Int32 NONE = -0x1; // 0x0
		// static const ::System::Int32 BEFORE = -0x2; // 0x0
		// static const ::System::Int32 AFTER = -0x3; // 0x0
		::Spine::ExposedList_1<::System::Single>* spaces; // 0x38
		::Spine::ExposedList_1<::System::Single>* positions; // 0x40
		::Spine::ExposedList_1<::System::Single>* world; // 0x48
		::Il2CppArray<::System::Single>* segments; // 0x50
		::Spine::ExposedList_1<::System::Single>* lengths; // 0x58
		::Spine::ExposedList_1<::Spine::BonePose*>* bones; // 0x60
		::Spine::Slot* slot; // 0x68
		::Spine::ExposedList_1<::System::Single>* curves; // 0x70

		::System::Void _ctor(::Spine::PathConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::Spine::IConstraint* Copy(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_COPY_OFFSET))(this, skeleton);
		}

		static ::System::Void ArraysFill(::Il2CppArray<::System::Single>* a, ::System::Int32 fromIndex, ::System::Int32 toIndex, ::System::Single val)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET))(a, fromIndex, toIndex, val);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_UPDATE_OFFSET))(this, skeleton, physics);
		}

		::Il2CppArray<::System::Single>* ComputeWorldPositions(::Spine::Skeleton* skeleton, ::Spine::PathAttachment* path, ::System::Int32 spacesCount, ::System::Boolean tangents)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Spine::Skeleton*, ::Spine::PathAttachment*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET))(this, skeleton, path, spacesCount, tangents);
		}

		static ::System::Void AddBeforePosition(::System::Single p, ::Il2CppArray<::System::Single>* temp, ::System::Int32 i, ::Il2CppArray<::System::Single>* output, ::System::Int32 o)
		{
			return ((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET))(p, temp, i, output, o);
		}

		static ::System::Void AddAfterPosition(::System::Single p, ::Il2CppArray<::System::Single>* temp, ::System::Int32 i, ::Il2CppArray<::System::Single>* output, ::System::Int32 o)
		{
			return ((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET))(p, temp, i, output, o);
		}

		static ::System::Void AddCurvePosition(::System::Single p, ::System::Single x1, ::System::Single y1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single x2, ::System::Single y2, ::Il2CppArray<::System::Single>* output, ::System::Int32 o, ::System::Boolean tangents)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET))(p, x1, y1, cx1, cy1, cx2, cy2, x2, y2, output, o, tangents);
		}

		::System::Void Sort(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SORT_OFFSET))(this, skeleton);
		}

		::System::Void SortPathSlot(::Spine::Skeleton* skeleton, ::Spine::Skin* skin, ::System::Int32 slotIndex, ::Spine::Bone* slotBone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Skin*, ::System::Int32, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SORTPATHSLOT_OFFSET))(this, skeleton, skin, slotIndex, slotBone);
		}

		::System::Void SortPath(::Spine::Skeleton* skeleton, ::Spine::Attachment* attachment, ::Spine::Bone* slotBone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Attachment*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SORTPATH_OFFSET))(this, skeleton, attachment, slotBone);
		}

		::System::Boolean get_IsSourceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::BonePose*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BonePose*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Slot* get_Slot()
		{
			return ((::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::Spine::Slot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_SLOT_OFFSET))(this, value);
		}
	};
}
