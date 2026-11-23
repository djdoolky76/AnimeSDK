#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/B4E53FE9754442CB.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class F325E30BDA261900;
class FD13E078C250FD12;
namespace ABC::CustomRenderPipeline { class DOFDebugParameter; }
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ClampedIntParameter; }
namespace UnityEngine::Rendering { class MinFloatParameter; }

#define ABC_CUSTOMRENDERPIPELINE_DOF_AWAKE_OFFSET UNITYSDK_OFFSET(0x27E8FD0)
#define ABC_CUSTOMRENDERPIPELINE_DOF_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x27E9440)
#define ABC_CUSTOMRENDERPIPELINE_DOF_DEPTHTORESCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x27E9500)
#define ABC_CUSTOMRENDERPIPELINE_DOF_EXECUTELQDOF_OFFSET UNITYSDK_OFFSET(0x27E95B0)
#define ABC_CUSTOMRENDERPIPELINE_DOF_EXECUTEPHYSICALDOF_OFFSET UNITYSDK_OFFSET(0x27E9DC0)
#define ABC_CUSTOMRENDERPIPELINE_DOF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x27EB070)
#define ABC_CUSTOMRENDERPIPELINE_DOF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27EB190)
#define ABC_CUSTOMRENDERPIPELINE_DOF_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_DOF_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_DOF_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x27EB3D0)
#define ABC_CUSTOMRENDERPIPELINE_DOF_SETUPLQPARAMETERS_OFFSET UNITYSDK_OFFSET(0x27EB560)
#define ABC_CUSTOMRENDERPIPELINE_DOF_SETUPPHYSICALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x27EB8C0)
#define ABC_CUSTOMRENDERPIPELINE_DOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x27EBEC0)
#define ABC_CUSTOMRENDERPIPELINE_DOF__CTOR_OFFSET UNITYSDK_OFFSET(0x27EC140)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int DOF_TypeDefinitionIndex = 16770;

	class DOF : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::System::Single* StaticGet_m_InfinityBGCocRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Single* StaticGet_m_minFGCocRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Single* StaticGet_m_maxBGCocRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::BE1E11B808A636AE** StaticGet_m_phy_RTHalfColorCOC()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::BE1E11B808A636AE** StaticGet_m_phy_RTFlattenCOC()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::BE1E11B808A636AE** StaticGet_m_phy_RTDilateCOC()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::BE1E11B808A636AE** StaticGet_m_phy_RTForeground()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::BE1E11B808A636AE** StaticGet_m_phy_RTBackground()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::BE1E11B808A636AE** StaticGet_m_phy_RTCombine()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTMaskNear()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTMaskFar()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTNearBlur()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTFarBlur()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x58);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTRes()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x60);
		}
		static ::BE1E11B808A636AE** StaticGet_m_Source()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x68);
		}
		static ::UnityEngine::Material** StaticGet_m_mat_dofCombine()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x70);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_cs_dof()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x78);
		}
		static ::System::Int32* StaticGet_m_kernelMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x80);
		}
		static ::System::Int32* StaticGet_m_kernelSetup()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x84);
		}
		static ::System::Int32* StaticGet_m_kernelFaltten()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x88);
		}
		static ::System::Int32* StaticGet_m_kernelDilate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x8C);
		}
		static ::System::Int32* StaticGet_m_kernelGather()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x90);
		}
		static ::System::Int32* StaticGet_m_kernelCombine()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x94);
		}
		static ::System::Int32* StaticGet_m_halfWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x98);
		}
		static ::System::Int32* StaticGet_m_halfHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0x9C);
		}
		static ::System::Int32* StaticGet_m_flattenWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0xA0);
		}
		static ::System::Int32* StaticGet_m_flattenHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOF_TypeDefinitionIndex)->GetStaticField(0xA4);
		}
		::UnityEngine::Rendering::BoolParameter* isOpened; // 0x38
		::UnityEngine::Rendering::MinFloatParameter* focalDistance; // 0x40
		::UnityEngine::Rendering::MinFloatParameter* focalArea; // 0x48
		::UnityEngine::Rendering::MinFloatParameter* nearTransition; // 0x50
		::UnityEngine::Rendering::MinFloatParameter* farTransition; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* nearWeight; // 0x60
		::UnityEngine::Rendering::ClampedFloatParameter* farWeight; // 0x68
		::UnityEngine::Rendering::ClampedIntParameter* nearBlurSize; // 0x70
		::UnityEngine::Rendering::ClampedIntParameter* farBlurSize; // 0x78
		::UnityEngine::Rendering::ClampedFloatParameter* phyFStop; // 0x80
		::UnityEngine::Rendering::ClampedFloatParameter* phySensorWidthMM; // 0x88
		::UnityEngine::Rendering::ClampedFloatParameter* phyFocalRange; // 0x90
		::ABC::CustomRenderPipeline::DOFDebugParameter* debugState; // 0x98

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void SetupPhysicalParameters(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::B4E53FE9754442CB& A54A3EA67F655834)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::B4E53FE9754442CB&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_SETUPPHYSICALPARAMETERS_OFFSET))(AF56F86C59FD37AD, A54A3EA67F655834);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_ISACTIVE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF__CTOR_OFFSET))(this);
		}

		static ::System::Single DepthToResCocRadius(::System::Single FEDEEBC720444095, ::F325E30BDA261900* E6C89AC3F6DBC4E2)
		{
			return ((::System::Single(*)(::System::Single, ::F325E30BDA261900*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_DEPTHTORESCOCRADIUS_OFFSET))(FEDEEBC720444095, E6C89AC3F6DBC4E2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF__CCTOR_OFFSET))();
		}

		static ::System::Boolean Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Boolean(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_AWAKE_OFFSET))(this);
		}

		static ::System::Void OnCameraCleanup(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_ONCAMERACLEANUP_OFFSET))(AF56F86C59FD37AD);
		}

		static ::System::Void SetupLQParameters(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::B4E53FE9754442CB& A54A3EA67F655834)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::B4E53FE9754442CB&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_SETUPLQPARAMETERS_OFFSET))(AF56F86C59FD37AD, A54A3EA67F655834);
		}

		static ::System::Void Configure(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::FD13E078C250FD12* BBA37BE3F1DE1B88)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::FD13E078C250FD12*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_CONFIGURE_OFFSET))(AF56F86C59FD37AD, BBA37BE3F1DE1B88);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		static ::System::Void ExecutePhysicalDOF(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_EXECUTEPHYSICALDOF_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		static ::System::Void ExecuteLQDOF(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOF_EXECUTELQDOF_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}
	};
}
