#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"

#define CMJHOOMIIPP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA39150)

inline static constexpr unsigned int CMJHOOMIIPP_TypeDefinitionIndex = 71823;

	class CMJHOOMIIPP : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJHOOMIIPP_CTOR_OFFSET))(this);
		}

	};
