#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define OABPNCCHNKH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1B2A0)
#define OABPNCCHNKH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBD1B220)
#define OABPNCCHNKH_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBD1B230)

	class OABPNCCHNKH
	{
	public:
		::System::Single ENMIPOPKOOL; // 0x18
		::System::Single PJKFLONMKED; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OABPNCCHNKH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + OABPNCCHNKH_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OABPNCCHNKH_SET_VALUE_OFFSET))(this, a1);
		}

	};
