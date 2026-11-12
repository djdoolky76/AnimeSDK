#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections { class IEnumerator; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x209071C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20907110)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_SETUP_OFFSET UNITYSDK_OFFSET(0x20907160)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererBase_TypeDefinitionIndex = 40396;

	class CursorRendererBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* cursor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_ONENABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Setup()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_SETUP_OFFSET))(this);
		}

	};
}
