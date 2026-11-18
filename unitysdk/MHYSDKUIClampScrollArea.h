#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MHYSDKUIClampScrollArea_ContentDimensionsWatcher;
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Scrollbar; }

#define MHYSDKUICLAMPSCROLLAREA_APPLY_OFFSET UNITYSDK_OFFSET(0x1F54EC80)
#define MHYSDKUICLAMPSCROLLAREA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F54F430)
#define MHYSDKUICLAMPSCROLLAREA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F54E840)
#define MHYSDKUICLAMPSCROLLAREA_RESET_OFFSET UNITYSDK_OFFSET(0x1F54E7B0)
#define MHYSDKUICLAMPSCROLLAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F54F580)

inline static constexpr unsigned int MHYSDKUIClampScrollArea_TypeDefinitionIndex = 35072;

class MHYSDKUIClampScrollArea : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::ScrollRect* scrollRect; // 0x18
	::UnityEngine::UI::LayoutElement* layoutElement; // 0x20
	::UnityEngine::UI::Scrollbar* verticalScrollbar; // 0x28
	::System::Single minHeight; // 0x30
	::System::Single maxHeight; // 0x34
	::System::Single threshold; // 0x38
	::System::Byte _padding0[0x4];
	::MHYSDKUIClampScrollArea_ContentDimensionsWatcher* _watcher; // 0x40
	::System::Boolean _isApplying; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA__CTOR_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_RESET_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_ONDISABLE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_APPLY_OFFSET))(this);
	}
};
