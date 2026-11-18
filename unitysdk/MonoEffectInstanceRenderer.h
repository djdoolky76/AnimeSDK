#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class MonoEffectInstanceRenderer_RenderBatch;
class ParticleAnimationData;
class ParticlesData;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MONOEFFECTINSTANCERENDERER_ADDCOLORVAL_OFFSET UNITYSDK_OFFSET(0x1D8A9D40)
#define MONOEFFECTINSTANCERENDERER_ADDFLOATVAL_OFFSET UNITYSDK_OFFSET(0x1D8A9B90)
#define MONOEFFECTINSTANCERENDERER_ADDVEC4VAL_OFFSET UNITYSDK_OFFSET(0x1D8A9C60)
#define MONOEFFECTINSTANCERENDERER_CALCULATEFRAMEINDICES_OFFSET UNITYSDK_OFFSET(0x1D8A8920)
#define MONOEFFECTINSTANCERENDERER_CLEARBATCHES_OFFSET UNITYSDK_OFFSET(0x1D8A8820)
#define MONOEFFECTINSTANCERENDERER_CLEARVALMAP_OFFSET UNITYSDK_OFFSET(0x1D8A9A80)
#define MONOEFFECTINSTANCERENDERER_ENSUREBATCHCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D8A8A10)
#define MONOEFFECTINSTANCERENDERER_GETRENDERBATCHES_OFFSET UNITYSDK_OFFSET(0x1D8A9A40)
#define MONOEFFECTINSTANCERENDERER_GET_ANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1D8A7EC0)
#define MONOEFFECTINSTANCERENDERER_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1D8A7AA0)
#define MONOEFFECTINSTANCERENDERER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D8A7B40)
#define MONOEFFECTINSTANCERENDERER_GET_PARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D8A7A90)
#define MONOEFFECTINSTANCERENDERER_GET_PARTICLEMESH_OFFSET UNITYSDK_OFFSET(0x1D8A7A80)
#define MONOEFFECTINSTANCERENDERER_NEEDUPDATEMPB_OFFSET UNITYSDK_OFFSET(0x1D8A7B00)
#define MONOEFFECTINSTANCERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D8A8410)
#define MONOEFFECTINSTANCERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D8A7860)
#define MONOEFFECTINSTANCERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D8A7700)
#define MONOEFFECTINSTANCERENDERER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1D8A79C0)
#define MONOEFFECTINSTANCERENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1D8A7A20)
#define MONOEFFECTINSTANCERENDERER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1D8A7920)
#define MONOEFFECTINSTANCERENDERER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1D8A77C0)
#define MONOEFFECTINSTANCERENDERER_SETNEEDUPDATEMPB_OFFSET UNITYSDK_OFFSET(0x1D8A7AB0)
#define MONOEFFECTINSTANCERENDERER_UPDATEBATCHES_OFFSET UNITYSDK_OFFSET(0x1D8A84B0)
#define MONOEFFECTINSTANCERENDERER_UPDATEBATCHMATRICES_OFFSET UNITYSDK_OFFSET(0x1D8A8ED0)
#define MONOEFFECTINSTANCERENDERER_UPDATEBATCHPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D8A9520)
#define MONOEFFECTINSTANCERENDERER_UPDATESINGLEBATCH_OFFSET UNITYSDK_OFFSET(0x1D8A8CC0)
#define MONOEFFECTINSTANCERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A9DB0)

inline static constexpr unsigned int MonoEffectInstanceRenderer_TypeDefinitionIndex = 26910;

class MonoEffectInstanceRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean useInterpolation; // 0x18
	::System::Byte _padding0[0x7];
	::ParticleAnimationData* animationData; // 0x20
	::UnityEngine::Mesh* particleMesh; // 0x28
	::UnityEngine::Material* particleMaterial; // 0x30
	::System::Single currentFrame; // 0x38
	::System::Boolean needUpdateMpb; // 0x3C
	::System::Byte _padding1[0x3];
	::Il2CppArray<::System::Object*>* runtimeBatches; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* floatValMap; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* vec4ValMap; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::UnityEngine::Mesh* get_ParticleMesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_GET_PARTICLEMESH_OFFSET))(this);
	}

	::UnityEngine::Material* get_ParticleMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_GET_PARTICLEMATERIAL_OFFSET))(this);
	}

	::System::Single get_CurrentFrame()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_GET_CURRENTFRAME_OFFSET))(this);
	}

	::System::Void SetNeedUpdateMpb(::System::Boolean need)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_SETNEEDUPDATEMPB_OFFSET))(this, need);
	}

	::System::Boolean NeedUpdateMpb()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_NEEDUPDATEMPB_OFFSET))(this);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_GET_ISVALID_OFFSET))(this);
	}

	::ParticleAnimationData* get_AnimationData()
	{
		return ((::ParticleAnimationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_GET_ANIMATIONDATA_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ONDESTROY_OFFSET))(this);
	}

	::System::Void UpdateBatches()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_UPDATEBATCHES_OFFSET))(this);
	}

	::System::Void ClearBatches()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_CLEARBATCHES_OFFSET))(this);
	}

	::System::Void CalculateFrameIndices(::System::Int32& frame1Index, ::System::Int32& frame2Index, ::System::Single& blend)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_CALCULATEFRAMEINDICES_OFFSET))(this, frame1Index, frame2Index, blend);
	}

	::System::Void EnsureBatchCapacity(::System::Int32 requiredCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ENSUREBATCHCAPACITY_OFFSET))(this, requiredCount);
	}

	::System::Void UpdateSingleBatch(::System::Int32 batchIndex, ::ParticlesData* g1, ::Il2CppArray<::ParticlesData*>* g2Groups, ::System::Single blend, ::UnityEngine::Matrix4x4 controllerMatrix)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ParticlesData*, ::Il2CppArray<::ParticlesData*>*, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_UPDATESINGLEBATCH_OFFSET))(this, batchIndex, g1, g2Groups, blend, controllerMatrix);
	}

	::System::Void UpdateBatchMatrices(::MonoEffectInstanceRenderer_RenderBatch* batch, ::ParticlesData* g1, ::Il2CppArray<::ParticlesData*>* g2Groups, ::System::Single blend, ::UnityEngine::Matrix4x4 controllerMatrix, ::System::Int32 particleCount)
	{
		return ((::System::Void(*)(::PVOID, ::MonoEffectInstanceRenderer_RenderBatch*, ::ParticlesData*, ::Il2CppArray<::ParticlesData*>*, ::System::Single, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_UPDATEBATCHMATRICES_OFFSET))(this, batch, g1, g2Groups, blend, controllerMatrix, particleCount);
	}

	::System::Void UpdateBatchPropertyBlock(::MonoEffectInstanceRenderer_RenderBatch* batch, ::ParticlesData* g1, ::System::Int32 particleCount)
	{
		return ((::System::Void(*)(::PVOID, ::MonoEffectInstanceRenderer_RenderBatch*, ::ParticlesData*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_UPDATEBATCHPROPERTYBLOCK_OFFSET))(this, batch, g1, particleCount);
	}

	::Il2CppArray<::System::Object*>* GetRenderBatches()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_GETRENDERBATCHES_OFFSET))(this);
	}

	::System::Void ClearValMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_CLEARVALMAP_OFFSET))(this);
	}

	::System::Void AddFloatVal(::System::String* propName, ::System::Single val)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ADDFLOATVAL_OFFSET))(this, propName, val);
	}

	::System::Void AddVec4Val(::System::String* propName, ::UnityEngine::Vector4 val)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ADDVEC4VAL_OFFSET))(this, propName, val);
	}

	::System::Void AddColorVal(::System::String* propName, ::UnityEngine::Color val)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_ADDCOLORVAL_OFFSET))(this, propName, val);
	}
};
