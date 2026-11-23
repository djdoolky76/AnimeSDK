#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define EFBA76D5E5508724_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x286E040)
#define EFBA76D5E5508724__CTOR_OFFSET UNITYSDK_OFFSET(0x286E180)

inline static constexpr unsigned int EFBA76D5E5508724_TypeDefinitionIndex = 16069;

class EFBA76D5E5508724 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::Texture2D* AC9ABB21C2B01FD3; // 0x18
	::UnityEngine::Vector2 B3AC5F1C60C42D7E; // 0x20
	::System::Single A9A1EF16074AD977; // 0x28
	::System::Single F11F1341D564147F; // 0x2C
	::UnityEngine::Vector2 F4A26D0D35908E00; // 0x30
	::System::Single A19E5911675431F0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBA76D5E5508724__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::EFBA76D5E5508724* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::EFBA76D5E5508724*))((::PBYTE)hIl2Cpp + EFBA76D5E5508724_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
