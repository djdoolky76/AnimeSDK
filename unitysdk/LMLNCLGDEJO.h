#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDNCLPGAKOA.h"

#define LMLNCLGDEJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC02C050)

inline static constexpr unsigned int LMLNCLGDEJO_TypeDefinitionIndex = 55448;

	class LMLNCLGDEJO : public ::FDNCLPGAKOA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNCLGDEJO_CTOR_OFFSET))(this);
		}

	};
