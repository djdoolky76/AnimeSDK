#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"

#define OCBKJCENLLP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD529E0)

inline static constexpr unsigned int OCBKJCENLLP_TypeDefinitionIndex = 62304;

	class OCBKJCENLLP : public ::ILPPBGLJABD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBKJCENLLP_CTOR_OFFSET))(this);
		}

	};
