#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DPDEPLLPIKC_CTOR_OFFSET UNITYSDK_OFFSET(0x12DF5A70)
#define DPDEPLLPIKC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x12DF59F0)
#define DPDEPLLPIKC_INTERP_OFFSET UNITYSDK_OFFSET(0x12DF5B00)
#define DPDEPLLPIKC_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x12DF5A00)

inline static constexpr unsigned int DPDEPLLPIKC_TypeDefinitionIndex = 76158;

	class DPDEPLLPIKC
	{
	public:
		::System::Single PJKFLONMKED; // 0x18
		::System::Single ENMIPOPKOOL; // 0x1C
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
