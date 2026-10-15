#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMMDKIBILJE.h"

#define EMKEMMOKPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1553A590)

inline static constexpr unsigned int EMKEMMOKPAN_TypeDefinitionIndex = 53547;

	class EMKEMMOKPAN : public ::OMMDKIBILJE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEMMOKPAN_CTOR_OFFSET))(this);
		}

	};
