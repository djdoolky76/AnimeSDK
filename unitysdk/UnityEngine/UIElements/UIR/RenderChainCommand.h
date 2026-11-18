#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/UIR/PoolItem.h"

#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5220)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainCommand_TypeDefinitionIndex = 27638;

	class RenderChainCommand : public ::UnityEngine::UIElements::UIR::PoolItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND__CTOR_OFFSET))(this);
		}
	};
}
