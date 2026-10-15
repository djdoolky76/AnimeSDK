#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_SCALABLERENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xE092EF0)
#define RPG_CLIENT_SCALABLERENDERER_GET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0xE092E70)
#define RPG_CLIENT_SCALABLERENDERER_SET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0xE092EE0)

namespace RPG::Client
{
	class ScalableRenderer
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererPackages; // 0x30
		::UnityEngine::Bounds Bounds; // 0x38
		::UnityEngine::Rendering::ShadowCastingMode CastShadows; // 0x50
		::System::Boolean ReceiveShadows; // 0x54
		::System::Byte _padding0[0x3];
		::UnityEngine::Camera* Camera; // 0x58
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERER_CTOR_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get_MaterialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERER_GET_MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void set_MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERER_SET_MATERIALPROPERTYBLOCK_OFFSET))(this, a1);
		}

	};
}
