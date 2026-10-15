#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2AEC30)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2AEC60)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F2AEC70)

namespace UnityEngine::Rendering
{
	class CommandBufferPool___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x46F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__5_0(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C___CCTOR_B__5_0_OFFSET))(this, a1);
		}

	};
}
