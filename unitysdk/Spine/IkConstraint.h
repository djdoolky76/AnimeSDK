#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Physics.h"
#include "unitysdk/Spine/ScaleYMode.h"

namespace Spine { class Bone; }
namespace Spine { class BonePose; }
namespace Spine { class IConstraint; }
namespace Spine { class IkConstraintData; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_IKCONSTRAINT_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1FA18520)
#define SPINE_IKCONSTRAINT_APPLY_OFFSET UNITYSDK_OFFSET(0x1FA17EE0)
#define SPINE_IKCONSTRAINT_COPY_OFFSET UNITYSDK_OFFSET(0x1FA17C90)
#define SPINE_IKCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1FA19290)
#define SPINE_IKCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET UNITYSDK_OFFSET(0x1FA19270)
#define SPINE_IKCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FA192A0)
#define SPINE_IKCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FA192B0)
#define SPINE_IKCONSTRAINT_SORT_OFFSET UNITYSDK_OFFSET(0x1FA19110)
#define SPINE_IKCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FA17D30)
#define SPINE_IKCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA17950)

namespace Spine
{
	inline static constexpr unsigned int IkConstraint_TypeDefinitionIndex = 32998;

	class IkConstraint
	{
	public:
		::Spine::Bone* target; // 0x38
		::Spine::ExposedList_1<::Spine::BonePose*>* bones; // 0x40

		::System::Void _ctor(::Spine::IkConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IkConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::Spine::IConstraint* Copy(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_COPY_OFFSET))(this, skeleton);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_UPDATE_OFFSET))(this, skeleton, physics);
		}

		::System::Void Sort(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SORT_OFFSET))(this, skeleton);
		}

		::System::Boolean get_IsSourceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::BonePose*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BonePose*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Bone* get_Target()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::Bone* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_TARGET_OFFSET))(this, value);
		}

		static ::System::Void Apply(::Spine::Skeleton* skeleton, ::Spine::BonePose* bone, ::System::Single targetX, ::System::Single targetY, ::System::Boolean compress, ::System::Boolean stretch, ::Spine::ScaleYMode scaleY, ::System::Single mix)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::Spine::BonePose*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::Spine::ScaleYMode, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_APPLY_OFFSET))(skeleton, bone, targetX, targetY, compress, stretch, scaleY, mix);
		}

		static ::System::Void Apply_1(::Spine::Skeleton* skeleton, ::Spine::BonePose* parent, ::Spine::BonePose* child, ::System::Single targetX, ::System::Single targetY, ::System::Int32 bendDir, ::System::Boolean stretch, ::Spine::ScaleYMode scaleY, ::System::Single softness, ::System::Single mix)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::Spine::BonePose*, ::Spine::BonePose*, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::Spine::ScaleYMode, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_APPLY_1_OFFSET))(skeleton, parent, child, targetX, targetY, bendDir, stretch, scaleY, softness, mix);
		}
	};
}
