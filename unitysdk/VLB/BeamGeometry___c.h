#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Camera; }
namespace VLB { class BeamGeometry; }

#define VLB_BEAMGEOMETRY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9F3600)
#define VLB_BEAMGEOMETRY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F3630)
#define VLB_BEAMGEOMETRY___C__GET_ONBEGINCAMERARENDERINGHANDLER_B__29_0_OFFSET UNITYSDK_OFFSET(0xE9F3640)

namespace VLB
{
	inline static constexpr unsigned int BeamGeometry___c_TypeDefinitionIndex = 48984;

	class BeamGeometry___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("VLB", "<>c")->GetStaticField(0x14270);
		}

		static ::System::Action_3<::VLB::BeamGeometry*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>** StaticGet___9__29_0()
		{
			return (::System::Action_3<::VLB::BeamGeometry*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>**)UnitySDK::FromName("VLB", "<>c")->GetStaticField(0x14278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY___C_CTOR_OFFSET))(this);
		}

		::System::Void _get_OnBeginCameraRenderingHandler_b__29_0(::VLB::BeamGeometry* a1, ::UnityEngine::Rendering::ScriptableRenderContext a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::VLB::BeamGeometry*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY___C__GET_ONBEGINCAMERARENDERINGHANDLER_B__29_0_OFFSET))(this, a1, a2, a3);
		}

	};
}
