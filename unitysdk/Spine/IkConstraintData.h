#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ScaleYMode.h"

namespace Spine { class BoneData; }
namespace Spine { class IConstraint; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_IKCONSTRAINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x20018ED0)
#define SPINE_IKCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x20018F30)
#define SPINE_IKCONSTRAINTDATA_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x20018F60)
#define SPINE_IKCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x20018F40)
#define SPINE_IKCONSTRAINTDATA_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x20018F70)
#define SPINE_IKCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x20018F50)
#define SPINE_IKCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x20018D80)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintData_TypeDefinitionIndex = 32999;

	class IkConstraintData
	{
	public:
		::Spine::BoneData* target; // 0x28
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x30
		::Spine::ScaleYMode scaleY; // 0x38

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::IConstraint* Create(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_CREATE_OFFSET))(this, skeleton);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::BoneData* get_Target()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::BoneData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_TARGET_OFFSET))(this, value);
		}

		::Spine::ScaleYMode get_ScaleY()
		{
			return ((::Spine::ScaleYMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::Spine::ScaleYMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ScaleYMode))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_SCALEY_OFFSET))(this, value);
		}
	};
}
