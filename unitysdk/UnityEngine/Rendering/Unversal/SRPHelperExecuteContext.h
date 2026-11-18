#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ScriptableRenderPass; }

#define UNITYENGINE_RENDERING_UNVERSAL_SRPHELPEREXECUTECONTEXT_SETUP_OFFSET UNITYSDK_OFFSET(0x1C9CFDA0)
#define UNITYENGINE_RENDERING_UNVERSAL_SRPHELPEREXECUTECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CFDE0)

namespace UnityEngine::Rendering::Unversal
{
	inline static constexpr unsigned int SRPHelperExecuteContext_TypeDefinitionIndex = 26346;

	class SRPHelperExecuteContext : public ::System::Object
	{
	public:
		::UnityEngine::NAPRenderPipeline0::RenderingData RenderingData; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>* Passes; // 0x5B0
		::System::Boolean Quit; // 0x5B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPHELPEREXECUTECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPHELPEREXECUTECONTEXT_SETUP_OFFSET))(this);
		}
	};
}
