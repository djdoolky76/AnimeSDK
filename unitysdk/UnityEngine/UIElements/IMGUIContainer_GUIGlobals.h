#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine::UIElements
{
	struct alignas(4) IMGUIContainer_GUIGlobals
	{
		::UnityEngine::Matrix4x4 matrix; // 0x10
		::UnityEngine::Color color; // 0x50
		::UnityEngine::Color contentColor; // 0x60
		::UnityEngine::Color backgroundColor; // 0x70
		::System::Boolean enabled; // 0x80
		::System::Boolean changed; // 0x81
		::System::Byte _padding0[0x2];
		::System::Int32 displayIndex; // 0x84
	};
}
