#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"

#define AACPKKJNFEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C0470)

inline static constexpr unsigned int AACPKKJNFEL_TypeDefinitionIndex = 47954;

	class AACPKKJNFEL : public ::ONEGHOPELAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACPKKJNFEL_CTOR_OFFSET))(this);
		}

	};
