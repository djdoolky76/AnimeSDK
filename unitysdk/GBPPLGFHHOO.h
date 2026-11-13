#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GBPPLGFHHOO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C217E80)
#define GBPPLGFHHOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C217EE0)

inline static constexpr unsigned int GBPPLGFHHOO_TypeDefinitionIndex = 44521;

	class GBPPLGFHHOO : public ::NOOHPODHIAA
	{
	public:
		::UnityEngine::Vector3 ACKDLFEPFMC; // 0x338
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPPLGFHHOO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPPLGFHHOO_CLEAR_OFFSET))(this);
		}

	};
