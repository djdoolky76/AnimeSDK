#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine { class BoneData; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_BONE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1FFA6E70)
#define SPINE_BONE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1FFA6E60)
#define SPINE_BONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFA6D80)
#define SPINE_BONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA6C30)

namespace Spine
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 32980;

	class Bone
	{
	public:
		static ::System::Boolean* StaticGet_yDown()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Bone_TypeDefinitionIndex)->GetStaticField(0x8520);
		}
		::Spine::ExposedList_1<::Spine::Bone*>* children; // 0x38
		::Spine::Bone* parent; // 0x40
		::System::Boolean sorted; // 0x48

		::System::Void _ctor(::Spine::BoneData* data, ::Spine::Bone* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONE__CTOR_OFFSET))(this, data, parent);
		}

		::System::Void _ctor_1(::Spine::Bone* bone, ::Spine::Bone* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONE__CTOR_1_OFFSET))(this, bone, parent);
		}

		::Spine::Bone* get_Parent()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_PARENT_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Children()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_CHILDREN_OFFSET))(this);
		}
	};
}
