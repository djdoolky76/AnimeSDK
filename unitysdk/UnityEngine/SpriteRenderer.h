#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define UNITYENGINE_SPRITERENDERER_E25021D04D63B790_OFFSET UNITYSDK_OFFSET(0x411EB10)
#define UNITYENGINE_SPRITERENDERER_E789DD984F9509D0_OFFSET UNITYSDK_OFFSET(0x411EB90)
#define UNITYENGINE_SPRITERENDERER_EE159FB7B4E598F3_OFFSET UNITYSDK_OFFSET(0x411EC30)
#define UNITYENGINE_SPRITERENDERER_EFF14C31C5C7E769_OFFSET UNITYSDK_OFFSET(0x411EC80)
#define UNITYENGINE_SPRITERENDERER_FD4987BC3E5D912A_OFFSET UNITYSDK_OFFSET(0x411EBE0)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteRenderer_TypeDefinitionIndex = 17081;

	class SpriteRenderer : public ::UnityEngine::Renderer
	{
	public:
		::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>* E6B59EB72AC8E30F; // 0x18

		::System::Void EFF14C31C5C7E769(::UnityEngine::Vector2 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_EFF14C31C5C7E769_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Vector2 FD4987BC3E5D912A()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_FD4987BC3E5D912A_OFFSET))(this);
		}

		::System::Void E25021D04D63B790()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_E25021D04D63B790_OFFSET))(this);
		}

		::System::Void E789DD984F9509D0(::UnityEngine::Vector2& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_E789DD984F9509D0_OFFSET))(this, FEC8DC0392823C8D);
		}

		::System::Void EE159FB7B4E598F3(::UnityEngine::Vector2& E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_EE159FB7B4E598F3_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
