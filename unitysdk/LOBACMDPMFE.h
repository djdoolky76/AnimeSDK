#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LOBACMDPMFE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EB840)

inline static constexpr unsigned int LOBACMDPMFE_TypeDefinitionIndex = 71250;

	class LOBACMDPMFE : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 KLDJPNDKLMI; // 0x10
		::System::Single FFCMLGPBOJF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBACMDPMFE_CTOR_OFFSET))(this);
		}

	};
