#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class MeshAttachment; }
namespace System { class String; }

#define SPINE_SKELETONJSON_LINKEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0DD70)

namespace Spine
{
	inline static constexpr unsigned int SkeletonJson_LinkedMesh_TypeDefinitionIndex = 33060;

	class SkeletonJson_LinkedMesh : public ::System::Object
	{
	public:
		::Spine::MeshAttachment* mesh; // 0x10
		::System::String* skin; // 0x18
		::System::String* source; // 0x20
		::System::Boolean inheritTimelines; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 sourceIndex; // 0x2C
		::System::Int32 slotIndex; // 0x30

		::System::Void _ctor(::Spine::MeshAttachment* mesh, ::System::String* skin, ::System::Int32 slotIndex, ::System::Int32 sourceIndex, ::System::String* source, ::System::Boolean inheritTimelines)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_LINKEDMESH__CTOR_OFFSET))(this, mesh, skin, slotIndex, sourceIndex, source, inheritTimelines);
		}
	};
}
