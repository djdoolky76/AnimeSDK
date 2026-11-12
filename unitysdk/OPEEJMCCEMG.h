#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define OPEEJMCCEMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC8A93C0)
#define OPEEJMCCEMG_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A9360)

inline static constexpr unsigned int OPEEJMCCEMG_TypeDefinitionIndex = 76161;

	class OPEEJMCCEMG
	{
	public:
		::System::Boolean CLBCJFLEAMN; // 0x20
		::System::Boolean KFOEFBPENPP; // 0x21
		::System::Boolean MHIPFCLLDLD; // 0x22
		::System::Void _ctor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + OPEEJMCCEMG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OPEEJMCCEMG_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

	};
