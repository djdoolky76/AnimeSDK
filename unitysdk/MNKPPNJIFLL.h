#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNKPPNJIFLL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA11670)

inline static constexpr unsigned int MNKPPNJIFLL_TypeDefinitionIndex = 67789;

	class MNKPPNJIFLL : public ::System::Object
	{
	public:
		::System::UInt32 Version; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKPPNJIFLL_CTOR_OFFSET))(this);
		}

	};
