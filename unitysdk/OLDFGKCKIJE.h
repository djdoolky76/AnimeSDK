#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLDFGKCKIJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DBD0)

inline static constexpr unsigned int OLDFGKCKIJE_TypeDefinitionIndex = 42113;

	class OLDFGKCKIJE : public ::System::Object
	{
	public:
		::System::Boolean ADJHMOAMFCD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFGKCKIJE_CTOR_OFFSET))(this);
		}

	};
