#pragma once
#include "unitysdk/unitysdk.h"

#define CDENJKCGLIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD4E0)

inline static constexpr unsigned int CDENJKCGLIB_TypeDefinitionIndex = 43183;

	class CDENJKCGLIB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDENJKCGLIB_CTOR_OFFSET))(this);
		}

	};
