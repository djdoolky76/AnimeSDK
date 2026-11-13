#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/System/Object.h"
namespace Spine { class Attachment; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class SkeletonRendererInstruction; }

#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x191E4EA0)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x191ECC20)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19205D60)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_GEOMETRYNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x191F79E0)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SETWITHSUBSET_OFFSET UNITYSDK_OFFSET(0x192011F0)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SET_OFFSET UNITYSDK_OFFSET(0x191F7CD0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererInstruction_TypeDefinitionIndex = 46160;

	class SkeletonRendererInstruction : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* submeshInstructions; // 0x10
		::Spine::ExposedList_1<::Spine::Attachment*>* attachments; // 0x18
		::System::Int32 rawVertexCount; // 0x20
		::System::Boolean immutableTriangles; // 0x24
		::System::Boolean hasActiveClipping; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_DISPOSE_OFFSET))(this);
		}

		::System::Void SetWithSubset(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SETWITHSUBSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Set(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SET_OFFSET))(this, a1);
		}

		static ::System::Boolean GeometryNotEqual(::Spine::Unity::SkeletonRendererInstruction* a1, ::Spine::Unity::SkeletonRendererInstruction* a2)
		{
			return ((::System::Boolean(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_GEOMETRYNOTEQUAL_OFFSET))(a1, a2);
		}

	};
}
