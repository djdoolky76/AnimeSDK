#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECDNDKIHCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0ACB0)

inline static constexpr unsigned int ECDNDKIHCHA_TypeDefinitionIndex = 72407;

	class ECDNDKIHCHA : public ::System::Object
	{
	public:
		::System::Boolean BCECPCPNIKM; // 0x10
		::System::Boolean PBLAPOEGNPA; // 0x11
		::System::Boolean ALIDAAEHMEE; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDNDKIHCHA_CTOR_OFFSET))(this);
		}

	};
