#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BICALEAAKEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB490F80)

inline static constexpr unsigned int BICALEAAKEL_TypeDefinitionIndex = 67791;

	class BICALEAAKEL : public ::System::Object
	{
	public:
		::System::UInt32 Version; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICALEAAKEL_CTOR_OFFSET))(this);
		}

	};
