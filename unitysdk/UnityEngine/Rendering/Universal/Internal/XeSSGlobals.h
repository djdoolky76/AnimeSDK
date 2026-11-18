#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F91CC50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int XeSSGlobals_TypeDefinitionIndex = 26778;

	class XeSSGlobals : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_FGFlipHandedness()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(XeSSGlobals_TypeDefinitionIndex)->GetStaticField(0x24400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALS__CCTOR_OFFSET))();
		}
	};
}
