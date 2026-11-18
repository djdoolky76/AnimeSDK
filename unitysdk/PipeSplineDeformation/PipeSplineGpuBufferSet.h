#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipeSplineDeformation/CurveSample.h"
#include "unitysdk/PipeSplineDeformation/PipeInstanceData.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_BIND_1_OFFSET UNITYSDK_OFFSET(0x1CF73720)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_BIND_OFFSET UNITYSDK_OFFSET(0x1CF73610)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF73BB0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF734B0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_CURVESAMPLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF72BD0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_CURVESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1CF72BF0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_PIPEINSTANCEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF72BE0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_PIPEINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1CF72C00)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF73B60)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CF73350)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_SETINSTANCEBASEINDEX_1_OFFSET UNITYSDK_OFFSET(0x1CF739C0)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_SETINSTANCEBASEINDEX_OFFSET UNITYSDK_OFFSET(0x1CF73910)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_UPLOAD_OFFSET UNITYSDK_OFFSET(0x1CF72C10)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF73C10)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF73C00)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineGpuBufferSet_TypeDefinitionIndex = 26906;

	class PipeSplineGpuBufferSet : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PipeInstancesId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineGpuBufferSet_TypeDefinitionIndex)->GetStaticField(0x6600);
		}
		static ::System::Int32* StaticGet_CurveSampleCountId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineGpuBufferSet_TypeDefinitionIndex)->GetStaticField(0x6604);
		}
		static ::System::Int32* StaticGet_PipeInstanceBaseIndexId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineGpuBufferSet_TypeDefinitionIndex)->GetStaticField(0x6608);
		}
		static ::System::Int32* StaticGet_CurveSampleSpacingId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineGpuBufferSet_TypeDefinitionIndex)->GetStaticField(0x660C);
		}
		static ::System::Int32* StaticGet_CurveSamplesId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PipeSplineGpuBufferSet_TypeDefinitionIndex)->GetStaticField(0x6610);
		}
		::UnityEngine::ComputeBuffer* pipeInstanceBuffer; // 0x10
		::UnityEngine::ComputeBuffer* curveSampleBuffer; // 0x18
		::System::Int32 pipeInstanceCount; // 0x20
		::System::Single curveSampleSpacing; // 0x24
		::System::Int32 curveSampleCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET__CCTOR_OFFSET))();
		}

		::UnityEngine::ComputeBuffer* get_CurveSampleBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_CURVESAMPLEBUFFER_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_PipeInstanceBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_PIPEINSTANCEBUFFER_OFFSET))(this);
		}

		::System::Int32 get_CurveSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_CURVESAMPLECOUNT_OFFSET))(this);
		}

		::System::Int32 get_PipeInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_GET_PIPEINSTANCECOUNT_OFFSET))(this);
		}

		::System::Void Upload(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* curveSamples, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances, ::System::Single actualSampleSpacing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_UPLOAD_OFFSET))(this, curveSamples, pipeInstances, actualSampleSpacing);
		}

		::System::Void Bind(::UnityEngine::MaterialPropertyBlock* propertyBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_BIND_OFFSET))(this, propertyBlock);
		}

		::System::Void Bind_1(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_BIND_1_OFFSET))(this, material);
		}

		static ::System::Void SetInstanceBaseIndex(::UnityEngine::MaterialPropertyBlock* propertyBlock, ::System::Int32 baseIndex)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_SETINSTANCEBASEINDEX_OFFSET))(propertyBlock, baseIndex);
		}

		static ::System::Void SetInstanceBaseIndex_1(::UnityEngine::Material* material, ::System::Int32 baseIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_SETINSTANCEBASEINDEX_1_OFFSET))(material, baseIndex);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_RELEASE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_DISPOSE_OFFSET))(this);
		}

		static ::System::Void EnsureBuffer(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 count, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_ENSUREBUFFER_OFFSET))(buffer, count, stride);
		}

		static ::System::Void ReleaseBuffer(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUFFERSET_RELEASEBUFFER_OFFSET))(buffer);
		}
	};
}
