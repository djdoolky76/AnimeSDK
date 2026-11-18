#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/XeSSContext.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALSTATE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C84D720)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C87D2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87D2A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int XeSSGlobalState_TypeDefinitionIndex = 26875;

	class XeSSGlobalState : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::XeSSContext* StaticGet_s_Context()
		{
			return (::UnityEngine::Rendering::XeSSContext*)Il2CppClass::FromTypeDefinitionIndex(XeSSGlobalState_TypeDefinitionIndex)->GetStaticField(0x7790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALSTATE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::XeSSContext& get_Context()
		{
			return ((::UnityEngine::Rendering::XeSSContext&(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_XESSGLOBALSTATE_GET_CONTEXT_OFFSET))();
		}
	};
}
