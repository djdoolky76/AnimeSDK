#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJPBKMBIGNC.h"

#define GMBOMEHJPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABE7E0)

inline static constexpr unsigned int GMBOMEHJPDA_TypeDefinitionIndex = 81671;

	class GMBOMEHJPDA : public ::AJPBKMBIGNC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBOMEHJPDA_CTOR_OFFSET))(this);
		}

	};
