#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define HHCFGKJKKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA7D10)

inline static constexpr unsigned int HHCFGKJKKJP_TypeDefinitionIndex = 61273;

	class HHCFGKJKKJP : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFGKJKKJP_CTOR_OFFSET))(this);
		}

	};
