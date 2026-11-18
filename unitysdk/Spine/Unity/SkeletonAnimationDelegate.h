#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class ISkeletonAnimation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONANIMATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FBF6670)
#define SPINE_UNITY_SKELETONANIMATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FBF66A0)
#define SPINE_UNITY_SKELETONANIMATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FBF6150)
#define SPINE_UNITY_SKELETONANIMATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF6140)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimationDelegate_TypeDefinitionIndex = 38172;

	class SkeletonAnimationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::ISkeletonAnimation* animated)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONDELEGATE_INVOKE_OFFSET))(this, animated);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::ISkeletonAnimation* animated, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONDELEGATE_BEGININVOKE_OFFSET))(this, animated, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
