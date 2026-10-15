#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPALBBKCNHE.h"

#define EGGBHIGNKBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C43E000)

inline static constexpr unsigned int EGGBHIGNKBA_TypeDefinitionIndex = 41437;

	class EGGBHIGNKBA : public ::JPALBBKCNHE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGBHIGNKBA_CTOR_OFFSET))(this);
		}

	};
