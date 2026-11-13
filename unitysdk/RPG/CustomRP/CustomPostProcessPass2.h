#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CRPPostprocessSubPass2; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class CustomPostProcessSettings; }
namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class MotionBlurRenderer; }
namespace RPG::CustomRP { class RPGBloomRenderer; }
namespace RPG::CustomRP { class RPGDepthOfFieldRenderer; }
namespace RPG::CustomRP { class RPGFinalCompose; }
namespace RPG::CustomRP { class RPGGaussianBlurRenderer; }
namespace RPG::CustomRP { class RPGLensFlareRenderer; }
namespace RPG::CustomRP { class RPGLensGlitch2Renderer; }
namespace RPG::CustomRP { class RPGLensGlitchRenderer; }
namespace RPG::CustomRP { class RPGPPDownsampleRenderer; }
namespace RPG::CustomRP { class RPGPPPatternRenderer; }
namespace RPG::CustomRP { class RPGRadialBlurRenderer; }
namespace RPG::CustomRP { class RPGSkillRadialBlurRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1A1BE290)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B9870)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1A1C7350)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x1A1C6A20)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x1A1BEA70)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A1C68B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessPass2_TypeDefinitionIndex = 38707;

	class CustomPostProcessPass2 : public ::System::Object
	{
	public:
		::RPG::CustomRP::RPGLensFlareRenderer* _LensFlareRenderer; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPPostprocessSubPass2*>* _PassListC; // 0x18
		::RPG::CustomRP::RPGFinalCompose* _FinalCompose; // 0x20
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPPostprocessSubPass2*>* _PassListB; // 0x28
		::RPG::CustomRP::RPGRadialBlurRenderer* _RadialBlurRenderer; // 0x30
		::RPG::CustomRP::RPGLensGlitch2Renderer* _PPLensGlitch2Renderer; // 0x38
		::RPG::CustomRP::RPGSkillRadialBlurRenderer* _SkillRadialBlurRenderer; // 0x40
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPPostprocessSubPass2*>* _PassListA; // 0x48
		::UnityEngine::MaterialPropertyBlock* _UberProperty; // 0x50
		::UnityEngine::Rendering::VolumeStack* _StackRef; // 0x58
		::RPG::CustomRP::RPGPPDownsampleRenderer* _DownsampleRenderer; // 0x60
		::RPG::CustomRP::MaterialLibrary* _MaterialLib; // 0x68
		::RPG::CustomRP::CustomPostProcessSettings* _Settings; // 0x70
		::RPG::CustomRP::RPGDepthOfFieldRenderer* _DOFRenderer; // 0x78
		::RPG::CustomRP::RPGBloomRenderer* _BloomRenderer; // 0x80
		::RPG::CustomRP::RPGGaussianBlurRenderer* _GaussianBlurRenderer; // 0x88
		::RPG::CustomRP::MotionBlurRenderer* _MotionBlurRenderer; // 0x90
		::RPG::CustomRP::RPGLensGlitchRenderer* _PPLensGlitchRenderer; // 0x98
		::RPG::CustomRP::RPGPPPatternRenderer* _PPPatternRender; // 0xA0
		::System::Int32 _OutputRTTmpA; // 0xA8
		::System::Int32 _SrcRT; // 0xAC
		::System::Int32 _OutputRT; // 0xB0
		::System::Int32 _OutputRTTmpB; // 0xB4
		// static const ::System::String* _Tag; // 0x0
		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_CLEANUP_OFFSET))(this);
		}

		::System::Boolean Update(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void OnChangeEnv(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_ONCHANGEENV_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSPASS2_INNEREXECUTE_OFFSET))(this, a1);
		}

	};
}
