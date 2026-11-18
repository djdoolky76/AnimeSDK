#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class ClippingAttachment; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { class Triangulator; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SKELETONCLIPPING_CLIPEND_1_OFFSET UNITYSDK_OFFSET(0x1FAB82B0)
#define SPINE_SKELETONCLIPPING_CLIPEND_OFFSET UNITYSDK_OFFSET(0x1FAB8240)
#define SPINE_SKELETONCLIPPING_CLIPINVERSE_OFFSET UNITYSDK_OFFSET(0x1FAB8F90)
#define SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET UNITYSDK_OFFSET(0x1FAB7450)
#define SPINE_SKELETONCLIPPING_CLIPTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x1FABAE30)
#define SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1FAB8300)
#define SPINE_SKELETONCLIPPING_CLIP_OFFSET UNITYSDK_OFFSET(0x1FABA190)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1FAB7420)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET UNITYSDK_OFFSET(0x1FAB7430)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1FAB7410)
#define SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET UNITYSDK_OFFSET(0x1FAB7440)
#define SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1FAB7780)
#define SPINE_SKELETONCLIPPING_MAKECONVEX_OFFSET UNITYSDK_OFFSET(0x1FAB7AA0)
#define SPINE_SKELETONCLIPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FABC400)

namespace Spine
{
	inline static constexpr unsigned int SkeletonClipping_TypeDefinitionIndex = 33057;

	class SkeletonClipping : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Single>* clippingPolygon; // 0x10
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* clippingPolygons; // 0x18
		::Spine::ExposedList_1<::System::Single>* inverseVertices; // 0x20
		::Spine::ClippingAttachment* clipAttachment; // 0x28
		::Spine::ExposedList_1<::System::Single>* clipOutput; // 0x30
		::Spine::ExposedList_1<::System::Single>* clippedVertices; // 0x38
		::Spine::ExposedList_1<::System::Int32>* clippedTriangles; // 0x40
		::Spine::ExposedList_1<::System::Single>* clippedUVs; // 0x48
		::Spine::Triangulator* triangulator; // 0x50
		::Spine::ExposedList_1<::System::Single>* scratch; // 0x58
		::System::Boolean inverse; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING__CTOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Single>* get_ClippedVertices()
		{
			return ((::Spine::ExposedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Int32>* get_ClippedTriangles()
		{
			return ((::Spine::ExposedList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Single>* get_ClippedUVs()
		{
			return ((::Spine::ExposedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET))(this);
		}

		::System::Boolean get_IsClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET))(this);
		}

		::System::Int32 ClipStart(::Spine::Skeleton* skeleton, ::Spine::Slot* slot, ::Spine::ClippingAttachment* clip)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Slot*, ::Spine::ClippingAttachment*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET))(this, skeleton, slot, clip);
		}

		::System::Void ClipEnd(::Spine::Slot* slot)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_OFFSET))(this, slot);
		}

		::System::Void ClipEnd_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_1_OFFSET))(this);
		}

		::System::Boolean ClipTriangles(::Il2CppArray<::System::Single>* vertices, ::Il2CppArray<::System::Int32>* triangles, ::System::Int32 trianglesLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET))(this, vertices, triangles, trianglesLength);
		}

		::System::Boolean ClipTriangles_1(::Il2CppArray<::System::Single>* vertices, ::Il2CppArray<::System::Int32>* triangles, ::System::Int32 trianglesLength, ::Il2CppArray<::System::Single>* uvs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPTRIANGLES_1_OFFSET))(this, vertices, triangles, trianglesLength, uvs);
		}

		::System::Boolean Clip(::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2, ::System::Single x3, ::System::Single y3, ::Spine::ExposedList_1<::System::Single>* polygon)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIP_OFFSET))(this, x1, y1, x2, y2, x3, y3, polygon);
		}

		::System::Void ClipInverse(::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2, ::System::Single x3, ::System::Single y3, ::Spine::ExposedList_1<::System::Single>* polygon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPINVERSE_OFFSET))(this, x1, y1, x2, y2, x3, y3, polygon);
		}

		static ::System::Boolean MakeClockwise(::Spine::ExposedList_1<::System::Single>* polygon)
		{
			return ((::System::Boolean(*)(::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET))(polygon);
		}

		::System::Void MakeConvex(::Spine::ExposedList_1<::System::Single>* polygon)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_MAKECONVEX_OFFSET))(this, polygon);
		}
	};
}
