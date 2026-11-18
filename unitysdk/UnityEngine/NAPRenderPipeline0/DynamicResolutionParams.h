#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableBool; }
namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableFloat; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTIONPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E543D90)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E543D80)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DynamicResolutionParams_TypeDefinitionIndex = 6038;

	class DynamicResolutionParams : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_debugRadomResolutionScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionParams_TypeDefinitionIndex)->GetStaticField(0x4E80);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat** StaticGet_dscale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat**)Il2CppClass::FromTypeDefinitionIndex(DynamicResolutionParams_TypeDefinitionIndex)->GetStaticField(0x4E88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTIONPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTIONPARAMS__CCTOR_OFFSET))();
		}
	};
}
