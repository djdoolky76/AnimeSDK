#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class ISkeletonRenderer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x20065C00)
#define SPINE_UNITY_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x20065C30)
#define SPINE_UNITY_SKELETONRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x200656E0)
#define SPINE_UNITY_SKELETONRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x200656D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererDelegate_TypeDefinitionIndex = 38173;

	class SkeletonRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::ISkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERDELEGATE_INVOKE_OFFSET))(this, skeletonRenderer);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::ISkeletonRenderer* skeletonRenderer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, skeletonRenderer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
