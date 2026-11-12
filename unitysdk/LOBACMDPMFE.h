#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LOBACMDPMFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC0512E0)

inline static constexpr unsigned int LOBACMDPMFE_TypeDefinitionIndex = 73228;

	class LOBACMDPMFE : public ::System::Object
	{
	public:
		::System::Single FFCMLGPBOJF; // 0x10
		::UnityEngine::Vector2 KLDJPNDKLMI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBACMDPMFE_CTOR_OFFSET))(this);
		}

	};
