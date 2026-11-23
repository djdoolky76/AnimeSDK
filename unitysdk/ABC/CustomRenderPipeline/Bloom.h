#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/A3DC045E469F4CC7.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/UnityEngine/BEA6A8BEDD2CDDA6.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/F0FD99F32D35D419.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class MinFloatParameter; }
namespace UnityEngine::Rendering { class Vector4Parameter; }

#define ABC_CUSTOMRENDERPIPELINE_BLOOM_DOWNSAMPLETOBLOOMTEXSIZE_OFFSET UNITYSDK_OFFSET(0x2812250)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2812C40)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_GETCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2814BF0)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_HK4EBLITSUBRECT_OFFSET UNITYSDK_OFFSET(0x2814C70)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2814E90)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x2814F40)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x2814F80)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x2815300)
#define ABC_CUSTOMRENDERPIPELINE_BLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x28155E0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int Bloom_TypeDefinitionIndex = 16881;

	class Bloom : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::System::Int32* StaticGet_k_BlurLevelCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_k_MaxDownsampleTimesToBloomTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Int32* StaticGet_k_MaxBlurSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_k_MaxBloomTexWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		static ::System::Int32* StaticGet_k_PrevBlurSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_RelGaussRaidus()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_k_BloomTexScaler()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_m_Pyramid()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::BE1E11B808A636AE** StaticGet_m_PackedDownsampledBuffer()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::BE1E11B808A636AE** StaticGet_m_PackedBlurredBuffer()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::BE1E11B808A636AE** StaticGet_m_HK4EDownsampleSourceUtil()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::BE1E11B808A636AE** StaticGet_m_HK4EBloomTex()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::BE1E11B808A636AE** StaticGet_m_CandidateRT()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::Il2CppArray<::BE1E11B808A636AE*>** StaticGet_m_DownsampleTempBuffers()
		{
			return (::Il2CppArray<::BE1E11B808A636AE*>**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x58);
		}
		static ::UnityEngine::Material** StaticGet__bloomMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x60);
		}
		static ::UnityEngine::Material** StaticGet__gaussMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Bloom_TypeDefinitionIndex)->GetStaticField(0x68);
		}
		::UnityEngine::Rendering::MinFloatParameter* threshold; // 0x38
		::UnityEngine::Rendering::MinFloatParameter* thresholdCut; // 0x40
		::UnityEngine::Rendering::MinFloatParameter* scalar; // 0x48
		::UnityEngine::Rendering::Vector4Parameter* HK4EBlurComposeWeights; // 0x50
		::UnityEngine::Rendering::Vector4Parameter* HK4EBlurLevelHeights; // 0x58
		::UnityEngine::Rendering::MinFloatParameter* intensity; // 0x60

		static ::UnityEngine::F0FD99F32D35D419 GetCompatibleDescriptor(::UnityEngine::F0FD99F32D35D419 E7F13465F7E064E1, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::UnityEngine::BEA6A8BEDD2CDDA6 F1B74DA73881CF9B, ::BDC595893C6EE433::A3DC045E469F4CC7 FF205F001F5521E3)
		{
			return ((::UnityEngine::F0FD99F32D35D419(*)(::UnityEngine::F0FD99F32D35D419, ::System::Int32, ::System::Int32, ::UnityEngine::BEA6A8BEDD2CDDA6, ::BDC595893C6EE433::A3DC045E469F4CC7))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_GETCOMPATIBLEDESCRIPTOR_OFFSET))(E7F13465F7E064E1, F5EF7E29767E03BF, F0961C93719F7B0D, F1B74DA73881CF9B, FF205F001F5521E3);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM__CTOR_OFFSET))(this);
		}

		static ::System::Void HK4EBlitSubRect(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::BE1E11B808A636AE* AFE8F10692F5139F, ::UnityEngine::E8984F4E44AE20E5 AF356AD5F20FD339, ::UnityEngine::E8984F4E44AE20E5 F86CE2D72038EEAF, ::UnityEngine::Material* A54EF53C742D300D, ::System::Int32 E1C99B2BBA9EC29E, ::System::Boolean E7FDFF0EA973ECB0)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::BE1E11B808A636AE*, ::UnityEngine::E8984F4E44AE20E5, ::UnityEngine::E8984F4E44AE20E5, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_HK4EBLITSUBRECT_OFFSET))(AF56F86C59FD37AD, AFE8F10692F5139F, AF356AD5F20FD339, F86CE2D72038EEAF, A54EF53C742D300D, E1C99B2BBA9EC29E, E7FDFF0EA973ECB0);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_ISACTIVE_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM__CCTOR_OFFSET))();
		}

		static ::System::Void OnCameraCleanup(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_ONCAMERACLEANUP_OFFSET))(AF56F86C59FD37AD);
		}

		static ::System::Void Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		static ::BE1E11B808A636AE* DownsampleToBloomTexSize(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::BE1E11B808A636AE* AFE8F10692F5139F, ::System::Int32 B9BE82ACB99D09C5, ::System::Int32 FDA8A87531ECBF90, ::UnityEngine::Material* A54EF53C742D300D, ::System::Single A5255B7A424BEC9B, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::System::Int32& F4E82C9EC2FC8177, ::System::Int32& FB0AEEDE6715CCF6)
		{
			return ((::BE1E11B808A636AE*(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::BE1E11B808A636AE*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::Single, ::FD13E078C250FD12*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_BLOOM_DOWNSAMPLETOBLOOMTEXSIZE_OFFSET))(AF56F86C59FD37AD, AFE8F10692F5139F, B9BE82ACB99D09C5, FDA8A87531ECBF90, A54EF53C742D300D, A5255B7A424BEC9B, BBA37BE3F1DE1B88, F4E82C9EC2FC8177, FB0AEEDE6715CCF6);
		}
	};
}
