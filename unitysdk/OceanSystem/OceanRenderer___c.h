#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
namespace OceanSystem { class OceanRenderer; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Camera; }

#define OCEANSYSTEM_OCEANRENDERER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFB8D20)
#define OCEANSYSTEM_OCEANRENDERER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB8D60)
#define OCEANSYSTEM_OCEANRENDERER___C__GET_ONBEGINCAMERARENDERING_B__58_0_OFFSET UNITYSDK_OFFSET(0xBFB8D70)

namespace OceanSystem
{
	inline static constexpr unsigned int OceanRenderer___c_TypeDefinitionIndex = 48978;

	class OceanRenderer___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::OceanSystem::OceanRenderer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>** StaticGet___9__58_0()
		{
			return (::System::Action_3<::OceanSystem::OceanRenderer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>**)UnitySDK::FromName("OceanSystem", "<>c")->GetStaticField(0x60310);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("OceanSystem", "<>c")->GetStaticField(0x60318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER___C_CTOR_OFFSET))(this);
		}

		::System::Void _get_OnBeginCameraRendering_b__58_0(::OceanSystem::OceanRenderer* a1, ::UnityEngine::Rendering::ScriptableRenderContext a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OceanSystem::OceanRenderer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER___C__GET_ONBEGINCAMERARENDERING_B__58_0_OFFSET))(this, a1, a2, a3);
		}

	};
}
