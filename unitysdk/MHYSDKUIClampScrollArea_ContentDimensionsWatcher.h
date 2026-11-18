#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MHYSDKUICLAMPSCROLLAREA_CONTENTDIMENSIONSWATCHER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1F8DFB00)
#define MHYSDKUICLAMPSCROLLAREA_CONTENTDIMENSIONSWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8DFB10)

inline static constexpr unsigned int MHYSDKUIClampScrollArea_ContentDimensionsWatcher_TypeDefinitionIndex = 35073;

class MHYSDKUIClampScrollArea_ContentDimensionsWatcher : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Action* onDimensionsChanged; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_CONTENTDIMENSIONSWATCHER__CTOR_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_CONTENTDIMENSIONSWATCHER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}
};
