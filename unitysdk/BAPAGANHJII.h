#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define BAPAGANHJII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15E72C10)
#define BAPAGANHJII_CTOR_OFFSET UNITYSDK_OFFSET(0x15E72BB0)
#define BAPAGANHJII_INTERP_OFFSET UNITYSDK_OFFSET(0x15E72C90)

inline static constexpr unsigned int BAPAGANHJII_TypeDefinitionIndex = 74023;

	class BAPAGANHJII
	{
	public:
		::System::Boolean CLBCJFLEAMN; // 0x20
		::System::Boolean KFOEFBPENPP; // 0x21
		::System::Boolean MHIPFCLLDLD; // 0x22
		::System::Void _ctor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BAPAGANHJII_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BAPAGANHJII_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Interp(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + BAPAGANHJII_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
