#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"
namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class PointAttachment; }
namespace System { class String; }

#define SPINE_POINTATTACHMENT_COMPUTEWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF5C010)
#define SPINE_POINTATTACHMENT_COMPUTEWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x1FF5C070)
#define SPINE_POINTATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1FF5C140)
#define SPINE_POINTATTACHMENT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF5BFE0)
#define SPINE_POINTATTACHMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4EFD0)
#define SPINE_POINTATTACHMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1FF5BFC0)
#define SPINE_POINTATTACHMENT_GET_X_OFFSET UNITYSDK_OFFSET(0x1FF5BF80)
#define SPINE_POINTATTACHMENT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1FF5BFA0)
#define SPINE_POINTATTACHMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1FF5BFD0)
#define SPINE_POINTATTACHMENT_SET_X_OFFSET UNITYSDK_OFFSET(0x1FF5BF90)
#define SPINE_POINTATTACHMENT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1FF5BFB0)

namespace Spine
{
	inline static constexpr unsigned int PointAttachment_TypeDefinitionIndex = 40587;

	class PointAttachment : public ::Spine::Attachment
	{
	public:
		::System::Single x; // 0x18
		::System::Single y; // 0x1C
		::System::Single rotation; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::PointAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PointAttachment*))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_CTOR_1_OFFSET))(this, a1);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Void ComputeWorldPosition(::Spine::Bone* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COMPUTEWORLDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Single ComputeWorldRotation(::Spine::Bone* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COMPUTEWORLDROTATION_OFFSET))(this, a1);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COPY_OFFSET))(this);
		}

	};
}
