#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LOBACMDPMFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A59F230)

inline static constexpr unsigned int LOBACMDPMFE_TypeDefinitionIndex = 73227;

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
