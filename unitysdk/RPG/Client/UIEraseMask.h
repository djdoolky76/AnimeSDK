#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class UIEraseMaskBehavior; }

#define RPG_CLIENT_UIERASEMASK_CTOR_OFFSET UNITYSDK_OFFSET(0xEE58350)
#define RPG_CLIENT_UIERASEMASK_ENDSTROKE_OFFSET UNITYSDK_OFFSET(0xEE58160)
#define RPG_CLIENT_UIERASEMASK_ERASEATUV_1_OFFSET UNITYSDK_OFFSET(0xEE57B70)
#define RPG_CLIENT_UIERASEMASK_ERASEATUV_OFFSET UNITYSDK_OFFSET(0xEE57B10)
#define RPG_CLIENT_UIERASEMASK_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xEE57A70)
#define RPG_CLIENT_UIERASEMASK_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xEE579C0)
#define RPG_CLIENT_UIERASEMASK_RESETCANVAS_OFFSET UNITYSDK_OFFSET(0xEE58250)

namespace RPG::Client
{
	inline static constexpr unsigned int UIEraseMask_TypeDefinitionIndex = 73035;

	class UIEraseMask
	{
	public:
		::System::Single ResolutionScale; // 0x30
		::System::Int32 MaxResolution; // 0x34
		::System::Single BrushRadius; // 0x38
		::System::Single StrokeStepRatio; // 0x3C
		::System::Int32 ProgressGridX; // 0x40
		::System::Int32 ProgressGridY; // 0x44
		::UnityEngine::Vector2 DebugEraseUV; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_CTOR_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void EraseAtUV(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_ERASEATUV_OFFSET))(this, a1);
		}

		::System::Void EraseAtUV_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_ERASEATUV_1_OFFSET))(this, a1, a2);
		}

		::System::Void EndStroke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_ENDSTROKE_OFFSET))(this);
		}

		::System::Void ResetCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_RESETCANVAS_OFFSET))(this);
		}

		::RPG::Client::UIEraseMaskBehavior* get_Behavior()
		{
			return ((::RPG::Client::UIEraseMaskBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASK_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
