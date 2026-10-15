#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"

#define ICKOGPBKGIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E44D90)

inline static constexpr unsigned int ICKOGPBKGIK_TypeDefinitionIndex = 71303;

	class ICKOGPBKGIK : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKOGPBKGIK_CTOR_OFFSET))(this);
		}

	};
