#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CPJPOEKGKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17550)

inline static constexpr unsigned int CPJPOEKGKCA_TypeDefinitionIndex = 44702;

	class CPJPOEKGKCA : public ::System::Object
	{
	public:
		::System::Single JFIOHAMPGOA; // 0x10
		::System::UInt32 BGJMONEGGGO; // 0x14
		::System::Single ICHHNGLAMPH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPOEKGKCA_CTOR_OFFSET))(this);
		}

	};
