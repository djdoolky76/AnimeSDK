#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

class WeatherConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class OceanFloatObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET UNITYSDK_OFFSET(0x1D710940)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET UNITYSDK_OFFSET(0x1D70D380)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET UNITYSDK_OFFSET(0x1D710A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D712640)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapOceanManager_TypeDefinitionIndex = 27355;

	class NapOceanManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x238F0);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x238F8);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNear()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23900);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_offsetBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23908);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_normals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23910);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_inputPos()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23918);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_normalBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23920);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outNormals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23928);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23930);
		}
		static ::UnityEngine::Texture3D** StaticGet_defaultTexture3D()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23938);
		}
		static ::UnityEngine::Texture2D** StaticGet_CoastlineMap()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23940);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNormal()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23948);
		}
		static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet_inputRot()
		{
			return (::Il2CppArray<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23950);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_offsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23958);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_inputPosBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23960);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23968);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23970);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>** StaticGet_OceanFloatObjs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23978);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialFar()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23980);
		}
		static ::System::Int32* StaticGet__CoastlineParam6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B00);
		}
		static ::System::Int32* StaticGet__OceanDeepColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B04);
		}
		static ::System::Int32* StaticGet__OceanDisplacementMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B08);
		}
		static ::System::Int32* StaticGet__CoastlineParam0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B0C);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B10);
		}
		static ::System::Int32* StaticGet__CoastlineFoamColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B14);
		}
		static ::System::Int32* StaticGet__CoastlineParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B18);
		}
		static ::System::Int32* StaticGet__Offsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B1C);
		}
		static ::System::Int32* StaticGet__OceanParamsC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B20);
		}
		static ::System::Int32* StaticGet__CoastlineParam8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B24);
		}
		static ::System::Int32* StaticGet__OceanFoamNoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B28);
		}
		static ::System::Int32* StaticGet__OceanDisplacementNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B2C);
		}
		static ::System::Int32* StaticGet__MaskChannelWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B30);
		}
		static ::System::Int32* StaticGet__OceanShallowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B34);
		}
		static ::System::Int32* StaticGet__CoastlineParam9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B38);
		}
		static ::System::Int32* StaticGet__OceanDetailNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B3C);
		}
		static ::System::Int32* StaticGet__CoastlineParam7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B40);
		}
		static ::System::Int32* StaticGet__OceanParamsB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B44);
		}
		static ::System::Int32* StaticGet__OceanReflectionCube()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B48);
		}
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B4C);
		}
		static ::System::Int32* StaticGet__InputPositions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B50);
		}
		static ::System::Int32* StaticGet__CoastlineWaveProfileMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B54);
		}
		static ::System::Int32* StaticGet__UseCubemapArrayReflection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B58);
		}
		static ::System::Int32* StaticGet__CoastlineParam10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B5C);
		}
		static ::System::Int32* StaticGet__CoastlineFoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B60);
		}
		static ::System::Int32* StaticGet__CoastlineCausticsMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B64);
		}
		static ::System::Int32* StaticGet__OceanScatteringColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B68);
		}
		static ::System::Int32* StaticGet__CoastlineParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B6C);
		}
		static ::System::Int32* StaticGet__ReflectionProbeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B70);
		}
		static ::System::Single* StaticGet_OceanFrustumCullingFOVBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B74);
		}
		static ::System::Int32* StaticGet__OceanCausticsParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B78);
		}
		static ::System::Int32* StaticGet__OceanParamsA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B7C);
		}
		static ::System::Int32* StaticGet__CoastlineMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B80);
		}
		static ::System::Int32* StaticGet__CoastlineParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B84);
		}
		static ::UnityEngine::Vector3* StaticGet_OceanCenter()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B88);
		}
		static ::System::Int32* StaticGet__CoastlineParam5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B94);
		}
		static ::System::Int32* StaticGet_lastDisableOceanFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B98);
		}
		static ::System::Int32* StaticGet__OceanExtraVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B9C);
		}
		static ::System::Boolean* StaticGet_EnableCoastlineWave()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA0);
		}
		static ::System::Boolean* StaticGet_EnableStylizedFoam()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA1);
		}
		static ::System::Boolean* StaticGet_EnableOcean()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA2);
		}
		static ::System::Int32* StaticGet__CoastlineParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA4);
		}
		static ::System::Single* StaticGet_OceanDepthOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA8);
		}
		static ::System::Int32* StaticGet__WetnessMaskPositionScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BAC);
		}
		static ::System::Int32* StaticGet__WetnessMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BB0);
		}
		static ::System::Single* StaticGet_OceanMeshCullThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BB4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOceanParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig, ::System::Boolean hasWeatherWetness)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET))(cmd, weatherConfig, hasWeatherWetness);
		}

		static ::System::Void ReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET))(request);
		}

		static ::System::Void UpdateOceanFloatObjs(::UnityEngine::ComputeShader* getOceanDataCS, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET))(getOceanDataCS, cmd);
		}
	};
}
