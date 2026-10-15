#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFHOPECDEFA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0C840)
#define AFHOPECDEFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF0C850)

inline static constexpr unsigned int AFHOPECDEFA_TypeDefinitionIndex = 61323;

	class AFHOPECDEFA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_DISPOSE_OFFSET))(this);
		}

	};
