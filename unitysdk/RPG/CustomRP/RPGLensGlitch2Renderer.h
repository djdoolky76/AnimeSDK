#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x198F3220)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x198F3290)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x198F3990)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x198F32C0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERSOURCE_OFFSET UNITYSDK_OFFSET(0x198F32B0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x198F32A0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x198F3250)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitch2Renderer_TypeDefinitionIndex = 38756;

	class RPGLensGlitch2Renderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::RPG::CustomRP::RPGLensGlitch2* settings; // 0x28
		::UnityEngine::Material* _GlitchMat; // 0x30
		::System::Int32 _RenderTarget; // 0x38
		::System::Int32 _RenderSource; // 0x3C
		::UnityEngine::RenderTextureDescriptor glitch2CopyDesc; // 0x40
		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void setRenderTarget(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERTARGET_OFFSET))(this, a1);
		}

		::System::Void setRenderSource(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERSOURCE_OFFSET))(this, a1);
		}

		::System::Void setParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETPARAM_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}

	};
}
