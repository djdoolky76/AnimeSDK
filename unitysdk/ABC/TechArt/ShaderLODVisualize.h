#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/ShaderLODVisualize_A1D13E206F502CC9.h"
#include "unitysdk/ABC/TechArt/ShaderLODVisualize_BFFC3C6684896ABC.h"
#include "unitysdk/ABC/TechArt/ShaderLODVisualize_FC81861B9E2E0E7E.h"
#include "unitysdk/BDC595893C6EE433/E62B6E53F892264C.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_TECHART_SHADERLODVISUALIZE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x28F03D0)
#define ABC_TECHART_SHADERLODVISUALIZE_START_OFFSET UNITYSDK_OFFSET(0x28F0580)
#define ABC_TECHART_SHADERLODVISUALIZE_UPDATE_OFFSET UNITYSDK_OFFSET(0x28F08C0)
#define ABC_TECHART_SHADERLODVISUALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::TechArt
{
	inline static constexpr unsigned int ShaderLODVisualize_TypeDefinitionIndex = 16447;

	class ShaderLODVisualize : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::BDC595893C6EE433::E62B6E53F892264C* StaticGet_ShaderLOD0()
		{
			return (::BDC595893C6EE433::E62B6E53F892264C*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::BDC595893C6EE433::E62B6E53F892264C* StaticGet_ShaderLOD1()
		{
			return (::BDC595893C6EE433::E62B6E53F892264C*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::BDC595893C6EE433::E62B6E53F892264C* StaticGet_ShaderLOD2()
		{
			return (::BDC595893C6EE433::E62B6E53F892264C*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Int32* StaticGet_GION()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Int32* StaticGet_RPON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x34);
		}
		static ::System::Int32* StaticGet_GGXON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::System::Int32* StaticGet_POMON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x3C);
		}
		static ::System::Int32* StaticGet_TerrainBlendON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::System::Int32* StaticGet_NormalON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x44);
		}
		static ::System::Int32* StaticGet_EmissionON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::System::Int32* StaticGet_MeshBlendingON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x4C);
		}
		static ::System::Int32* StaticGet_ShaderLODFeatureDebugMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::BDC595893C6EE433::E62B6E53F892264C* StaticGet_TrilinearSampleON()
		{
			return (::BDC595893C6EE433::E62B6E53F892264C*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x58);
		}
		static ::BDC595893C6EE433::E62B6E53F892264C* StaticGet_ShaderLODFeatureVisualize()
		{
			return (::BDC595893C6EE433::E62B6E53F892264C*)Il2CppClass::FromTypeDefinitionIndex(ShaderLODVisualize_TypeDefinitionIndex)->GetStaticField(0x68);
		}
		::ABC::TechArt::ShaderLODVisualize_A1D13E206F502CC9 currentLODLevel; // 0x20
		::ABC::TechArt::ShaderLODVisualize_A1D13E206F502CC9 cachedLODLevel; // 0x24
		::ABC::TechArt::ShaderLODVisualize_BFFC3C6684896ABC visualizationMode; // 0x28
		::ABC::TechArt::ShaderLODVisualize_BFFC3C6684896ABC cachevisualizationMode; // 0x2C
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E giFeatureVisLOD; // 0x30
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E giIgoreLODCache; // 0x34
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E probeFeatureVisLOD; // 0x38
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E probeIgoreLODCache; // 0x3C
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E ggxFeatureVisLOD; // 0x40
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E ggxIgoreLODCache; // 0x44
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E pomFeatureVisLOD; // 0x48
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E pomFeatureLODCache; // 0x4C
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E TerrainBlendFeatureVisLOD; // 0x50
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E TerrainBlendFeatureLODCache; // 0x54
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E NormalFeatureVisLOD; // 0x58
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E NormalFeatureLODCache; // 0x5C
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E EmissionFeatureVisLOD; // 0x60
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E EmissionFeatureLODCache; // 0x64
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E MeshBlendingFeatureVisLOD; // 0x68
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E MeshBlendingFeatureLODCache; // 0x6C
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E TrilinearSampleFeatureVisLOD; // 0x70
		::ABC::TechArt::ShaderLODVisualize_FC81861B9E2E0E7E TrilinearSamplFeatureLODCache; // 0x74
		::System::Boolean needUpdate; // 0x78
		::System::Boolean needUpdatevisualizationMode; // 0x79

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_SHADERLODVISUALIZE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_SHADERLODVISUALIZE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_SHADERLODVISUALIZE_ONDISABLE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_SHADERLODVISUALIZE__CTOR_OFFSET))(this);
		}
	};
}
