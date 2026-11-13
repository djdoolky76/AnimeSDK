#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CapturePostProcessPass_EPostProcess.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CapturePostProcessPass; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BA3A0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1BE350)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ENDFILTER_OFFSET UNITYSDK_OFFSET(0x1A1D4170)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GETFILTERRT_OFFSET UNITYSDK_OFFSET(0x1A1D4100)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_CAPTUREFILTERENABLE_OFFSET UNITYSDK_OFFSET(0x1A1D5460)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_WATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x1A1D5480)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET__CAPTUREFEATUREENABLE_OFFSET UNITYSDK_OFFSET(0x1A1D42E0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x1A1C7470)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ISFILTERING_OFFSET UNITYSDK_OFFSET(0x1A1D42C0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RELEASEFILTERRT_OFFSET UNITYSDK_OFFSET(0x1A1D41B0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_STARTFILTER_OFFSET UNITYSDK_OFFSET(0x1A1D3D60)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A1C7460)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLMOBILE_OFFSET UNITYSDK_OFFSET(0x1A1D4D50)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLPC_OFFSET UNITYSDK_OFFSET(0x1A1D42F0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__STARTFILTER_OFFSET UNITYSDK_OFFSET(0x1A1D3D90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapturePostProcessPass_TypeDefinitionIndex = 38691;

	class CapturePostProcessPass : public ::System::Object
	{
	public:
		::UnityEngine::Material* _PPMat; // 0x10
		::UnityEngine::RenderTexture* _SrcTex; // 0x18
		::Il2CppArray<::System::String*>* _Keywords; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _RTHandles; // 0x28
		::System::Int32 _RTBlur4; // 0x30
		::System::Int32 _TempRT1; // 0x34
		::System::Int32 _BoxBlurParams; // 0x38
		::System::Int32 _TempRT2; // 0x3C
		::RPG::CustomRP::CapturePostProcessPass_EPostProcess _PPFeature; // 0x40
		::System::Int32 _RTBlur3; // 0x44
		::System::Int32 _RTBlur2; // 0x48
		::System::Int32 _RTBlur1; // 0x4C
		static ::RPG::CustomRP::CapturePostProcessPass** StaticGet_s_Instance()
		{
			return (::RPG::CustomRP::CapturePostProcessPass**)UnitySDK::FromName("RPG.CustomRP", "CapturePostProcessPass")->GetStaticField(0x22280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_DISPOSE_OFFSET))(this);
		}

		static ::System::Void StartFilter(::UnityEngine::RenderTexture* a1, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_STARTFILTER_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::RenderTexture* GetFilterRT()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GETFILTERRT_OFFSET))();
		}

		static ::System::Void EndFilter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ENDFILTER_OFFSET))();
		}

		static ::System::Void ReleaseFilterRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RELEASEFILTERRT_OFFSET))();
		}

		static ::System::Boolean IsFiltering()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ISFILTERING_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_UPDATE_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_INNEREXECUTE_OFFSET))(this, a1);
		}

		static ::System::Boolean get_CaptureFilterEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_CAPTUREFILTERENABLE_OFFSET))();
		}

		static ::System::Boolean get_WaterMarkEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_WATERMARKENABLE_OFFSET))();
		}

		::System::Void _StartFilter(::UnityEngine::RenderTexture* a1, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__STARTFILTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _BlurFullPC(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLPC_OFFSET))(this, a1);
		}

		::System::Void _BlurFullMobile(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLMOBILE_OFFSET))(this, a1);
		}

		::System::Boolean get__CaptureFeatureEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET__CAPTUREFEATUREENABLE_OFFSET))(this);
		}

	};
}
