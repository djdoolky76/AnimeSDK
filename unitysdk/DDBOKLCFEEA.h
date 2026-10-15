#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DDBOKLCFEEA_CTOR_OFFSET UNITYSDK_OFFSET(0xE255340)

inline static constexpr unsigned int DDBOKLCFEEA_TypeDefinitionIndex = 60655;

	class DDBOKLCFEEA : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 OHGBCOIOALP; // 0x10
		::UnityEngine::Vector3 OEDHCKPOGDO; // 0x1C
		::System::Boolean KKKIONIDKFA; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single AFMIFEGNCIJ; // 0x2C
		::System::Single HFLPNAIAOMG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBOKLCFEEA_CTOR_OFFSET))(this);
		}

	};
