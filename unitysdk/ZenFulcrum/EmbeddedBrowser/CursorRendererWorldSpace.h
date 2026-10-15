#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"
namespace UnityEngine { class GameObject; }
namespace ZenFulcrum::EmbeddedBrowser { class PointerUIBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F6584A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F658FB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1F658890)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F658CF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F658F80)

namespace ZenFulcrum::EmbeddedBrowser
{
	class CursorRendererWorldSpace : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Single zOffset; // 0x20
		::System::Single size; // 0x24
		::UnityEngine::GameObject* cursorHolder; // 0x28
		::UnityEngine::GameObject* cursorImage; // 0x30
		::ZenFulcrum::EmbeddedBrowser::PointerUIBase* pointerUI; // 0x38
		::System::Boolean cursorVisible; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AWAKE_OFFSET))(this);
		}

		::System::Void CursorChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CURSORCHANGE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_ONDESTROY_OFFSET))(this);
		}

	};
}
