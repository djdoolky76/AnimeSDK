#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
namespace RPG::CustomRP { class MaterialLibrary; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x198F8040)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x198F8100)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x198F8340)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPCHROMATICABERRATIONPARAMS_OFFSET UNITYSDK_OFFSET(0x198F9FC0)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPDIRECTIONALBLUR_OFFSET UNITYSDK_OFFSET(0x198F93F0)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPOUTPUTRT_OFFSET UNITYSDK_OFFSET(0x198F80A0)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPRADIALBLUR_OFFSET UNITYSDK_OFFSET(0x198F83C0)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x198F8060)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGRadialBlurRenderer_TypeDefinitionIndex = 38769;

	class RPGRadialBlurRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _Uber; // 0x28
		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void SetupOutputRT(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPOUTPUTRT_OFFSET))(this, a1);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}

		::System::Void SetupChromaticAberrationParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPCHROMATICABERRATIONPARAMS_OFFSET))(this);
		}

		::System::Void SetupRadialBlur(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPRADIALBLUR_OFFSET))(this, a1);
		}

		::System::Void SetupDirectionalBlur(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPDIRECTIONALBLUR_OFFSET))(this, a1);
		}

	};
}
