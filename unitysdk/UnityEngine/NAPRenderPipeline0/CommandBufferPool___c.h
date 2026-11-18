#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB62E70)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB62EB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EB62EC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CommandBufferPool___c_TypeDefinitionIndex = 6043;

	class CommandBufferPool___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool___c_TypeDefinitionIndex)->GetStaticField(0x4E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__7_0(::UnityEngine::Rendering::CommandBuffer* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C___CCTOR_B__7_0_OFFSET))(this, x);
		}
	};
}
