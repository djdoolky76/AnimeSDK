#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPALBBKCNHE.h"

#define EGGBHIGNKBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFE5A0)

inline static constexpr unsigned int EGGBHIGNKBA_TypeDefinitionIndex = 42412;

	class EGGBHIGNKBA : public ::JPALBBKCNHE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGBHIGNKBA_CTOR_OFFSET))(this);
		}

	};
