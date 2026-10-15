#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_OPENWORLD_GRASSSTREAMINGITEMDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0xD9F3BB0)
#define RPG_CLIENT_OPENWORLD_GRASSSTREAMINGITEMDEBUG_DRAWBOUNDSGIZMO_OFFSET UNITYSDK_OFFSET(0xD9F3780)
#define RPG_CLIENT_OPENWORLD_GRASSSTREAMINGITEMDEBUG_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xD9F3630)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int GrassStreamingItemDebug_TypeDefinitionIndex = 73788;

	class GrassStreamingItemDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds Boundary; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_GRASSSTREAMINGITEMDEBUG_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_GRASSSTREAMINGITEMDEBUG_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		static ::System::Void DrawBoundsGizmo(::UnityEngine::Bounds a1, ::UnityEngine::Color a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_GRASSSTREAMINGITEMDEBUG_DRAWBOUNDSGIZMO_OFFSET))(a1, a2, a3);
		}

	};
}
