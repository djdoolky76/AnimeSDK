#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"

#define CMJHOOMIIPP_CTOR_OFFSET UNITYSDK_OFFSET(0xE378B80)

inline static constexpr unsigned int CMJHOOMIIPP_TypeDefinitionIndex = 73844;

	class CMJHOOMIIPP : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJHOOMIIPP_CTOR_OFFSET))(this);
		}

	};
