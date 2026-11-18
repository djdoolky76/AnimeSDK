#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EC97110)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_INNERREFRESH_OFFSET UNITYSDK_OFFSET(0x1EC96F90)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_ISNULLTEX_OFFSET UNITYSDK_OFFSET(0x1EC974E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC97310)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_SETTO_OFFSET UNITYSDK_OFFSET(0x1EC97440)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EC97120)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC96EF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TextureParameter_TypeDefinitionIndex = 6073;

	class TextureParameter
	{
	public:
		::UnityEngine::Vector2Int texSize; // 0x20

		::System::Void _ctor(::UnityEngine::Texture* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::UnityEngine::Texture* get_value()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void InnerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_INNERREFRESH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_ONENABLE_OFFSET))(this);
		}

		::System::Void SetTo(::UnityEngine::NAPRenderPipeline0::VolumeParameter* to)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeParameter*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_SETTO_OFFSET))(this, to);
		}

		::System::Boolean IsNullTex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTUREPARAMETER_ISNULLTEX_OFFSET))(this);
		}
	};
}
