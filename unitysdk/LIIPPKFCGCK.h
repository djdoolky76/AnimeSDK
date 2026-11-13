#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LIIPPKFCGCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63AE90)

inline static constexpr unsigned int LIIPPKFCGCK_TypeDefinitionIndex = 44706;

	class LIIPPKFCGCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPPKFCGCK_CTOR_OFFSET))(this);
		}

	};
