#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/UnityEngine/A3B17C172EC49C40.h"
#include "unitysdk/UnityEngine/F0FD99F32D35D419.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x27BE820)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x27BEC20)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27BF5C0)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x27BF6E0)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27BF7A0)
#define ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x27BF990)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int MotionBlur_TypeDefinitionIndex = 16664;

	class MotionBlur : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::BE1E11B808A636AE** StaticGet_m_rt_MinMaxVelocitySetup()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::BE1E11B808A636AE** StaticGet_m_rt_EncodedVelocity()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::BE1E11B808A636AE** StaticGet_m_rt_recontractedRes()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::BE1E11B808A636AE** StaticGet_m_rt_minMaxNeighbourhood()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::BE1E11B808A636AE** StaticGet_m_Source()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::UnityEngine::ComputeShader** StaticGet_m_cs_MinMaxVelocitySetup()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::System::Int32* StaticGet_m_setupKernelMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Int32* StaticGet_m_neighbourhoodKernelMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x34);
		}
		static ::System::Int32* StaticGet_m_reconstructKernelMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::UnityEngine::A3B17C172EC49C40* StaticGet_m_minMaxTexSize()
		{
			return (::UnityEngine::A3B17C172EC49C40*)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x3C);
		}
		static ::UnityEngine::F0FD99F32D35D419* StaticGet_m_MinMaxRTDesc()
		{
			return (::UnityEngine::F0FD99F32D35D419*)Il2CppClass::FromTypeDefinitionIndex(MotionBlur_TypeDefinitionIndex)->GetStaticField(0x44);
		}
		::UnityEngine::Rendering::BoolParameter* isOpened; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* amount; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* maxScale; // 0x48

		static ::System::Void Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ISACTIVE_OFFSET))(this);
		}

		static ::System::Void Configure(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::FD13E078C250FD12* BBA37BE3F1DE1B88)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::FD13E078C250FD12*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_CONFIGURE_OFFSET))(AF56F86C59FD37AD, BBA37BE3F1DE1B88);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ONENABLE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR__CTOR_OFFSET))(this);
		}

		static ::System::Void OnCameraCleanup(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_MOTIONBLUR_ONCAMERACLEANUP_OFFSET))(AF56F86C59FD37AD);
		}
	};
}
