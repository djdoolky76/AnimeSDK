#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHEOBHMINFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1978F750)

inline static constexpr unsigned int KHEOBHMINFI_TypeDefinitionIndex = 74273;

	class KHEOBHMINFI : public ::System::Object
	{
	public:
		::System::Single HGOFBGMAAKL; // 0x10
		::System::Single DGDJIMMAKLE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOBHMINFI_CTOR_OFFSET))(this);
		}

	};
