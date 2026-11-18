#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Physics.h"

namespace Spine { class Bone; }
namespace Spine { class IConstraint; }
namespace Spine { class Skeleton; }
namespace Spine { class SliderData; }

#define SPINE_SLIDER_COPY_OFFSET UNITYSDK_OFFSET(0x1FE0DF10)
#define SPINE_SLIDER_GET_BONE_OFFSET UNITYSDK_OFFSET(0x1FE0E9B0)
#define SPINE_SLIDER_SET_BONE_OFFSET UNITYSDK_OFFSET(0x1FE0E9C0)
#define SPINE_SLIDER_SORT_OFFSET UNITYSDK_OFFSET(0x1FE0E330)
#define SPINE_SLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FE0DFA0)
#define SPINE_SLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0E9D0)
#define SPINE_SLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0DDA0)

namespace Spine
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 33066;

	class Slider
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_offsets()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Slider_TypeDefinitionIndex)->GetStaticField(0x29C20);
		}
		::Spine::Bone* bone; // 0x38

		::System::Void _ctor(::Spine::SliderData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SliderData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SLIDER__CTOR_OFFSET))(this, data, skeleton);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SLIDER__CCTOR_OFFSET))();
		}

		::Spine::IConstraint* Copy(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SLIDER_COPY_OFFSET))(this, skeleton);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_SLIDER_UPDATE_OFFSET))(this, skeleton, physics);
		}

		::System::Void Sort(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SLIDER_SORT_OFFSET))(this, skeleton);
		}

		::Spine::Bone* get_Bone()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDER_GET_BONE_OFFSET))(this);
		}

		::System::Void set_Bone(::Spine::Bone* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SLIDER_SET_BONE_OFFSET))(this, value);
		}
	};
}
