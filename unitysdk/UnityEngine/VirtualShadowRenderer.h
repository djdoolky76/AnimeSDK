#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class VirtualShadowMap; }

#define UNITYENGINE_VIRTUALSHADOWRENDERER_ABE1E01DF4FAD44B_OFFSET UNITYSDK_OFFSET(0x418DF90)
#define UNITYENGINE_VIRTUALSHADOWRENDERER_B8908D5F91793277_OFFSET UNITYSDK_OFFSET(0x418DFD0)
#define UNITYENGINE_VIRTUALSHADOWRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int VirtualShadowRenderer_TypeDefinitionIndex = 17706;

	class VirtualShadowRenderer : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::VirtualShadowMap* ABE1E01DF4FAD44B()
		{
			return ((::UnityEngine::VirtualShadowMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIRTUALSHADOWRENDERER_ABE1E01DF4FAD44B_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIRTUALSHADOWRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void B8908D5F91793277(::UnityEngine::VirtualShadowMap* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VirtualShadowMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIRTUALSHADOWRENDERER_B8908D5F91793277_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
