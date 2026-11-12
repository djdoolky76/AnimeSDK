#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0x174FF460)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17506F90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x17506F10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CULL_OFFSET UNITYSDK_OFFSET(0x17506AC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x175025E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x17505F50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x17502C90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x17501510)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x174FB2B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x175016A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x175016B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x175024A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17502300)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x174FD860)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x17505200)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x174FF3F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPBAKEFALLBACK_OFFSET UNITYSDK_OFFSET(0x175030E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPDRAWFORCANVAS_OFFSET UNITYSDK_OFFSET(0x17502F70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET UNITYSDK_OFFSET(0x174FDE10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SHOULDUSEDRAWFORCANVAS_OFFSET UNITYSDK_OFFSET(0x17502C20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x175056B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x17506AB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17504F00)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHBAKEFALLBACK_OFFSET UNITYSDK_OFFSET(0x175032C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHDRAWFORCANVAS_OFFSET UNITYSDK_OFFSET(0x175031A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x174FF2A0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_TypeDefinitionIndex = 40873;

	class UIParticleRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Boolean _delay; // 0xF0
		::System::Byte _padding0[0x3];
		::System::Int32 _index; // 0xF4
		::System::Boolean _isPrevStored; // 0xF8
		::System::Boolean _isTrail; // 0xF9
		::System::Byte _padding1[0x2];
		::UnityEngine::Bounds _lastBounds; // 0xFC
		::System::Byte _padding2[0x4];
		::UnityEngine::Material* _materialForRendering; // 0x118
		::UnityEngine::Material* _modifiedMaterial; // 0x120
		::Coffee::UIExtensions::UIParticle* _parent; // 0x128
		::UnityEngine::ParticleSystem* _particleSystem; // 0x130
		::System::Single _prevCanvasScale; // 0x138
		::UnityEngine::Vector3 _prevPsPos; // 0x13C
		::UnityEngine::Vector3 _prevScale; // 0x148
		::UnityEngine::Vector2Int _prevScreenSize; // 0x154
		::System::Boolean _preWarm; // 0x15C
		::System::Byte _padding3[0x3];
		::UnityEngine::ParticleSystemRenderer* _renderer; // 0x160
		::UnityEngine::ParticleSystem* _mainEmitter; // 0x168
		::System::Boolean _useDrawForCanvas; // 0x170
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_Materials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)UnitySDK::FromName("Coffee.UIExtensions", "UIParticleRenderer")->GetStaticField(0xB50);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("Coffee.UIExtensions", "UIParticleRenderer")->GetStaticField(0xB58);
		}

		static ::Il2CppArray<::UnityEngine::CombineInstance>** StaticGet_s_CombineInstances()
		{
			return (::Il2CppArray<::UnityEngine::CombineInstance>**)UnitySDK::FromName("Coffee.UIExtensions", "UIParticleRenderer")->GetStaticField(0xB60);
		}

		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_Mpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("Coffee.UIExtensions", "UIParticleRenderer")->GetStaticField(0xB68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::UnityEngine::Rect get_rootCanvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void Reset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET))(this);
		}

		static ::Coffee::UIExtensions::UIParticleRenderer* AddRenderer(::Coffee::UIExtensions::UIParticle* a1, ::System::Int32 a2)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::Coffee::UIExtensions::UIParticle*, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET))(a1, a2);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Set(::Coffee::UIExtensions::UIParticle* a1, ::UnityEngine::ParticleSystem* a2, ::System::Boolean a3, ::UnityEngine::ParticleSystem* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ShouldUseDrawForCanvas(::Coffee::UIExtensions::UIParticle* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::Coffee::UIExtensions::UIParticle*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SHOULDUSEDRAWFORCANVAS_OFFSET))(a1, a2);
		}

		::System::Void SetupDrawForCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPDRAWFORCANVAS_OFFSET))(this);
		}

		::System::Void SetupBakeFallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPBAKEFALLBACK_OFFSET))(this);
		}

		::System::Void UpdateMesh(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET))(this, a1);
		}

		::System::Void UpdateMeshDrawForCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHDRAWFORCANVAS_OFFSET))(this);
		}

		::System::Void UpdateMeshBakeFallback(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHBAKEFALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CULL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetWorldScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldMatrix(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void ResolveResolutionChange(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Simulate(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET))(this);
		}

	};
}
