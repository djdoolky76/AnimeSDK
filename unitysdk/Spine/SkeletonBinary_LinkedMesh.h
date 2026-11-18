#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class MeshAttachment; }
namespace System { class String; }

#define SPINE_SKELETONBINARY_LINKEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BB7A0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBinary_LinkedMesh_TypeDefinitionIndex = 33054;

	class SkeletonBinary_LinkedMesh : public ::System::Object
	{
	public:
		::Spine::MeshAttachment* mesh; // 0x10
		::System::String* source; // 0x18
		::System::Int32 sourceIndex; // 0x20
		::System::Int32 slotIndex; // 0x24
		::System::Boolean inheritTimelines; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 skinIndex; // 0x2C

		::System::Void _ctor(::Spine::MeshAttachment* mesh, ::System::Int32 skinIndex, ::System::Int32 slotIndex, ::System::Int32 sourceIndex, ::System::String* source, ::System::Boolean inheritTimelines)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_LINKEDMESH__CTOR_OFFSET))(this, mesh, skinIndex, slotIndex, sourceIndex, source, inheritTimelines);
		}
	};
}
