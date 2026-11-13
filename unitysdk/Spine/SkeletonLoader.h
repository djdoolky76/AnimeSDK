#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Spine { class Atlas; }
namespace Spine { class AttachmentLoader; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_SKELETONLOADER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16CD3AA0)
#define SPINE_SKELETONLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0x16CD3B30)
#define SPINE_SKELETONLOADER_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x16D068D0)
#define SPINE_SKELETONLOADER_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x16D068E0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonLoader_TypeDefinitionIndex = 40623;

	class SkeletonLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* linkedMeshes; // 0x10
		::Spine::AttachmentLoader* attachmentLoader; // 0x18
		::System::Single scale; // 0x20
		::System::Void _ctor(::Il2CppArray<::Spine::Atlas*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::AttachmentLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_CTOR_1_OFFSET))(this, a1);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_SET_SCALE_OFFSET))(this, a1);
		}

	};
}
