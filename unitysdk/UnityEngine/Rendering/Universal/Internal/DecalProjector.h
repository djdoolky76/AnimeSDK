#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/DecalProjector_UVMirrorType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_DecalHandle; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ADD_ONMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0x1D44CDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1D44CDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D44D040)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVANIMATION_OFFSET UNITYSDK_OFFSET(0x1D44A790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVOFFSET_OFFSET UNITYSDK_OFFSET(0x1D44A280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVSCALEANDBIAS_OFFSET UNITYSDK_OFFSET(0x1D44A7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETMATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1D44D5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALOFFSET_OFFSET UNITYSDK_OFFSET(0x1D44AA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALSIZE_OFFSET UNITYSDK_OFFSET(0x1D44AA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D449A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1D449420)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_EMISSIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D449BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_FADEFACTOR_OFFSET UNITYSDK_OFFSET(0x1D44A510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D44AB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D449940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MIRRORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D4499A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x1D44A640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_NORMALBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D449B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D449ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D44A9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATESPEED_OFFSET UNITYSDK_OFFSET(0x1D44A0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1D44A860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D44A000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_S_WATERPROXYPREVIEW_OFFSET UNITYSDK_OFFSET(0x1D449300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVBIAS_OFFSET UNITYSDK_OFFSET(0x1D449AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALEBIAS_OFFSET UNITYSDK_OFFSET(0x1D44AB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALE_OFFSET UNITYSDK_OFFSET(0x1D449A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_HASANIMATION_OFFSET UNITYSDK_OFFSET(0x1D44CBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_INTERSECTTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1D44DC70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D44CEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDBAKEDECALMESH_OFFSET UNITYSDK_OFFSET(0x1D4493C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDWATERPOOLBAKE_OFFSET UNITYSDK_OFFSET(0x1D449360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D44C800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D44CA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D44ABA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x1D449480)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D449FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_PREPAREFORQUADMESHDECAL_OFFSET UNITYSDK_OFFSET(0x1D44B510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHDECALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D44D0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHMESHDECALVALUE_OFFSET UNITYSDK_OFFSET(0x1D44BAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REMOVE_ONMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0x1D44CE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1D44A300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D449CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D449A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1D449430)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_EMISSIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D449BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_FADEFACTOR_OFFSET UNITYSDK_OFFSET(0x1D44A520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D44AB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D449950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MIRRORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D4499B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x1D44A650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_NORMALBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D449B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D449EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_ROTATESPEED_OFFSET UNITYSDK_OFFSET(0x1D44A0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D44A020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVBIAS_OFFSET UNITYSDK_OFFSET(0x1D449AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVSCALE_OFFSET UNITYSDK_OFFSET(0x1D449A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TESTTRIANGLEHIT_OFFSET UNITYSDK_OFFSET(0x1D44D6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D44E130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D44E040)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalProjector_TypeDefinitionIndex = 27188;

	class DecalProjector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_GlobalQuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x24A50);
		}
		static ::UnityEngine::Quaternion* StaticGet_k_MinusYtoZRotation()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7450);
		}
		static ::System::Int32* StaticGet__QuadMeshSizeScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7460);
		}
		static ::System::Int32* StaticGet__NormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7464);
		}
		static ::System::Int32* StaticGet__MaskMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7468);
		}
		static ::System::Int32* StaticGet__ParallaxMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x746C);
		}
		static ::System::Int32* StaticGet__QuadMeshUVScaleBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		static ::System::Int32* StaticGet__QuadMeshNormalToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7474);
		}
		static ::System::Int32* StaticGet__NewDrawOrder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x7478);
		}
		::System::Boolean hasOverlapNotMergeMesh; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::DecalProjector*>* m_CombinedProjector; // 0x20
		::System::Boolean m_IsWaterProxy; // 0x28
		::System::Boolean m_IsMeshDecal; // 0x29
		::System::Boolean m_IsCombinedDecal; // 0x2A
		::System::Byte _padding1[0x1];
		::System::Int32 m_BakeMeshOffset; // 0x2C
		::System::Int32 m_DrawOrder; // 0x30
		::System::Int32 m_MeshDecalOrder; // 0x34
		::System::Int32 m_Importance; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Material* m_Material; // 0x40
		::System::Single m_DrawDistance; // 0x48
		::UnityEngine::Vector2 m_UVScale; // 0x4C
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType m_MirrorTexture; // 0x54
		::UnityEngine::Vector2 m_UVBias; // 0x58
		::System::Single m_NormalBlendIntensity; // 0x60
		::System::Single m_EmissionIntensity; // 0x64
		::UnityEngine::Vector3 m_Offset; // 0x68
		::UnityEngine::Vector3 m_Size; // 0x74
		::System::Single m_FadeFactor; // 0x80
		::System::Single m_RotateSpeed; // 0x84
		::System::Single m_MoveSpeed; // 0x88
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* tempTriangles; // 0x90
		::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* m_Handle; // 0x98
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0xA0
		::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0xA8
		::System::Boolean needDestroyMaterial; // 0xB0
		::System::Byte _padding4[0x7];
		::System::Action* OnMaterialChange; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_s_WaterProxyPreview()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_S_WATERPROXYPREVIEW_OFFSET))();
		}

		::System::Boolean NeedWaterPoolBake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDWATERPOOLBAKE_OFFSET))(this);
		}

		::System::Boolean NeedBakeDecalMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDBAKEDECALMESH_OFFSET))(this);
		}

		::System::Int32 get_DrawOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWORDER_OFFSET))(this);
		}

		::System::Void set_DrawOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWORDER_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType get_mirrorTexture()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MIRRORTEXTURE_OFFSET))(this);
		}

		::System::Void set_mirrorTexture(::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MIRRORTEXTURE_OFFSET))(this, value);
		}

		::System::Single get_drawDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWDISTANCE_OFFSET))(this);
		}

		::System::Void set_drawDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvScale()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALE_OFFSET))(this);
		}

		::System::Void set_uvScale(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvBias()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVBIAS_OFFSET))(this);
		}

		::System::Void set_uvBias(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVBIAS_OFFSET))(this, value);
		}

		::System::Single get_normalBlendIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_NORMALBLENDINTENSITY_OFFSET))(this);
		}

		::System::Void set_normalBlendIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_NORMALBLENDINTENSITY_OFFSET))(this, value);
		}

		::System::Single get_emissionIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_EMISSIONINTENSITY_OFFSET))(this);
		}

		::System::Void set_emissionIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_EMISSIONINTENSITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_offset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_offset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_SIZE_OFFSET))(this, value);
		}

		::System::Single get_rotateSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATESPEED_OFFSET))(this);
		}

		::System::Void set_rotateSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_ROTATESPEED_OFFSET))(this, value);
		}

		::System::Single get_fadeFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_FADEFACTOR_OFFSET))(this);
		}

		::System::Void set_fadeFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_FADEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_moveSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MOVESPEED_OFFSET))(this);
		}

		::System::Void set_moveSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MOVESPEED_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 GetDecalUVOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetDecalUVAnimation()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVANIMATION_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetDecalUVScaleAndBias()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVSCALEANDBIAS_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_decalSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_decalOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_uvScaleBias()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALEBIAS_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* get_Handle()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_HANDLE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshMeshDecalValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHMESHDECALVALUE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean HasAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_HASANIMATION_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* AnimationCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ANIMATIONCURVE_OFFSET))(this);
		}

		::System::Void PrepareForQuadMeshDecal(::System::Boolean forceReCreate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_PREPAREFORQUADMESHDECAL_OFFSET))(this, forceReCreate);
		}

		::System::Void add_OnMaterialChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ADD_ONMATERIALCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_OnMaterialChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REMOVE_ONMATERIALCHANGE_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ISVALID_OFFSET))(this);
		}

		::System::Void SetProperty(::System::Int32 id, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_OFFSET))(this, id, value);
		}

		::System::Void SetProperty_1(::System::Int32 id, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_1_OFFSET))(this, id, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshDecalTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHDECALTRANSFORM_OFFSET))(this);
		}

		::System::Boolean GetMatchIndex(::UnityEngine::Vector3 sourceP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::System::Int32& matchIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETMATCHINDEX_OFFSET))(this, sourceP, vertices, matchIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* TestTriangleHit(::UnityEngine::Vector3 realCubeSize, ::System::Collections::Generic::List_1<::System::Object*>* validTriangleListStage0)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TESTTRIANGLEHIT_OFFSET))(this, realCubeSize, validTriangleListStage0);
		}

		static ::System::Boolean IntersectTriangle(::UnityEngine::Vector3 orig, ::UnityEngine::Vector3 dir, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3& hitPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_INTERSECTTRIANGLE_OFFSET))(orig, dir, v0, v1, v2, hitPoint);
		}
	};
}
