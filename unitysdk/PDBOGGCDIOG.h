#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEAMIIFFDKL.h"

#define PDBOGGCDIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D29EE60)

inline static constexpr unsigned int PDBOGGCDIOG_TypeDefinitionIndex = 25013;

	class PDBOGGCDIOG : public ::IEAMIIFFDKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBOGGCDIOG_CTOR_OFFSET))(this);
		}

	};
