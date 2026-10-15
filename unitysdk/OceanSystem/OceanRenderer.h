#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFNPKBOEJJO_SizeSetting.h"
#include "unitysdk/OceanSystem/OceanRenderer_DebugMode.h"
#include "unitysdk/OceanSystem/OceanRenderer_RendererType.h"
#include "unitysdk/OceanSystem/OceanRenderer_WaveType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_2.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
class IFNPKBOEJJO;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Texture; }

#define OCEANSYSTEM_OCEANRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB8C00)
#define OCEANSYSTEM_OCEANRENDERER_GET_REALTIMEWAVE_OFFSET UNITYSDK_OFFSET(0xBFB7690)
#define OCEANSYSTEM_OCEANRENDERER_GET_RENDERERTYPE_OFFSET UNITYSDK_OFFSET(0xBFB7090)
#define OCEANSYSTEM_OCEANRENDERER_IKLFLLHAODA_OFFSET UNITYSDK_OFFSET(0xBFB70D0)
#define OCEANSYSTEM_OCEANRENDERER_LLINPDCGMMN_OFFSET UNITYSDK_OFFSET(0xBFB7710)
#define OCEANSYSTEM_OCEANRENDERER_ODCEGFBBJLH_OFFSET UNITYSDK_OFFSET(0xBFB8710)
#define OCEANSYSTEM_OCEANRENDERER_OELCBPOKKIP_OFFSET UNITYSDK_OFFSET(0xBFB7A40)
#define OCEANSYSTEM_OCEANRENDERER_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBFB7390)
#define OCEANSYSTEM_OCEANRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBFB7A30)
#define OCEANSYSTEM_OCEANRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBFB76F0)
#define OCEANSYSTEM_OCEANRENDERER_SET_RENDERERTYPE_OFFSET UNITYSDK_OFFSET(0xBFB70A0)
#define OCEANSYSTEM_OCEANRENDERER_UPDATEMATERIALPARAMETERS_OFFSET UNITYSDK_OFFSET(0xBFB7C10)
#define OCEANSYSTEM_OCEANRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFB7700)

namespace OceanSystem
{
	class OceanRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* m_OceanShader; // 0x18
		::UnityEngine::Shader* m_ComputeNormalShader; // 0x20
		::UnityEngine::Shader* m_BlurShader; // 0x28
		::OceanSystem::OceanRenderer_RendererType m_RendererType; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* m_WaterMesh; // 0x38
		::UnityEngine::Material* m_WaterMaterial; // 0x40
		::OceanSystem::OceanRenderer_WaveType m_WaveType; // 0x48
		::UnityEngine::Vector2 m_GlobalUVScaling; // 0x4C
		::System::Byte _padding1[0x4];
		::UnityEngine::Texture* m_StaticNormalMap; // 0x58
		::System::Single m_StaticNormalScale; // 0x60
		::System::Single m_NormalOffsetSpeed; // 0x64
		::System::Single m_NormalScale0; // 0x68
		::UnityEngine::Vector2 m_NormalOffsetDirection0; // 0x6C
		::System::Single m_NormalScale1; // 0x74
		::UnityEngine::Vector2 m_NormalOffsetDirection1; // 0x78
		::System::Single m_DomainSize; // 0x80
		::IFNPKBOEJJO_SizeSetting m_SimulationSize; // 0x84
		::System::Single m_WindSpeed; // 0x88
		::System::Single m_WindRotation; // 0x8C
		::System::Single m_WindTurbulence; // 0x90
		::System::Single m_TimeScale; // 0x94
		::System::Single m_jacobianRange; // 0x98
		::System::Single m_jacobianScaling; // 0x9C
		::System::Single m_jacobianBlur; // 0xA0
		::System::Byte _padding2[0x4];
		::IFNPKBOEJJO* NBPLPIIHBJL; // 0xA8
		::UnityEngine::Texture3D* m_BakedDispMap; // 0xB0
		::UnityEngine::Texture3D* m_BakedNormalMap; // 0xB8
		::System::Boolean m_loop; // 0xC0
		::System::Byte _padding3[0x3];
		::System::Single m_LoopTime; // 0xC4
		::System::Int32 m_FrameRate; // 0xC8
		::System::Single m_Transparent; // 0xCC
		::UnityEngine::Color m_WaterColor; // 0xD0
		::UnityEngine::Color m_TurbidityColor; // 0xE0
		::System::Single m_Turbidity; // 0xF0
		::UnityEngine::Color m_SubsurfaceScatteringColor; // 0xF4
		::System::Single m_SubsurfaceScatteringOffset; // 0x104
		::System::Single m_SubsurfaceScatteringFallOff; // 0x108
		::System::Single m_RefractionAproximatedDepth; // 0x10C
		::System::Boolean m_UseRefractionDispersion; // 0x110
		::System::Byte _padding4[0x3];
		::System::Single m_RefractionDispersionStrength; // 0x114
		::System::Boolean m_ReflectSun; // 0x118
		::System::Byte _padding5[0x3];
		::System::Single m_ReflectedSunStrength; // 0x11C
		::System::Boolean m_ScreenSpaceReflection; // 0x120
		::System::Byte _padding6[0x7];
		::UnityEngine::Texture* m_CustomReflectionTexture; // 0x128
		::UnityEngine::Texture* m_FoamTexture; // 0x130
		::System::Single m_FoamScale; // 0x138
		::System::Single m_FoamPowExp; // 0x13C
		::System::Single m_FoamRange; // 0x140
		::OceanSystem::OceanRenderer_DebugMode debugMode; // 0x144
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_CTOR_OFFSET))(this);
		}

		::OceanSystem::OceanRenderer_RendererType get_rendererType()
		{
			return ((::OceanSystem::OceanRenderer_RendererType(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_GET_RENDERERTYPE_OFFSET))(this);
		}

		::System::Void set_rendererType(::OceanSystem::OceanRenderer_RendererType a1)
		{
			return ((::System::Void(*)(::PVOID, ::OceanSystem::OceanRenderer_RendererType))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_SET_RENDERERTYPE_OFFSET))(this, a1);
		}

		::IFNPKBOEJJO* get_realtimeWave()
		{
			return ((::IFNPKBOEJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_GET_REALTIMEWAVE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::GCFreeClosure::ActionClosure_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*> OELCBPOKKIP()
		{
			return ((::UnityEngine::GCFreeClosure::ActionClosure_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_OELCBPOKKIP_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void IKLFLLHAODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_IKLFLLHAODA_OFFSET))(this);
		}

		::System::Void ODCEGFBBJLH(::UnityEngine::Rendering::ScriptableRenderContext a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_ODCEGFBBJLH_OFFSET))(this, a1, a2);
		}

		::System::Void LLINPDCGMMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_LLINPDCGMMN_OFFSET))(this);
		}

		::System::Void UpdateMaterialParameters(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER_UPDATEMATERIALPARAMETERS_OFFSET))(this, a1);
		}

	};
}
