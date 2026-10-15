#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GBIOCNNCLOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15951110)

inline static constexpr unsigned int GBIOCNNCLOC_TypeDefinitionIndex = 80540;

	class GBIOCNNCLOC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIOCNNCLOC_CTOR_OFFSET))(this);
		}

	};
