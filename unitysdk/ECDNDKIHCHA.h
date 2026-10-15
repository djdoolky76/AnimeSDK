#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECDNDKIHCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D06270)

inline static constexpr unsigned int ECDNDKIHCHA_TypeDefinitionIndex = 72406;

	class ECDNDKIHCHA : public ::System::Object
	{
	public:
		::System::Boolean ALIDAAEHMEE; // 0x10
		::System::Boolean PBLAPOEGNPA; // 0x11
		::System::Boolean BCECPCPNIKM; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDNDKIHCHA_CTOR_OFFSET))(this);
		}

	};
