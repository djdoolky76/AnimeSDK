#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DPDEPLLPIKC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFA7E0)
#define DPDEPLLPIKC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x11FFA760)
#define DPDEPLLPIKC_INTERP_OFFSET UNITYSDK_OFFSET(0x11FFA870)
#define DPDEPLLPIKC_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x11FFA770)

	class DPDEPLLPIKC
	{
	public:
		::System::Single ENMIPOPKOOL; // 0x18
		::System::Single PJKFLONMKED; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DPDEPLLPIKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDEPLLPIKC_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DPDEPLLPIKC_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Interp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DPDEPLLPIKC_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
