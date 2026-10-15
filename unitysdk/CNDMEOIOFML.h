#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNDMEOIOFML_CTOR_OFFSET UNITYSDK_OFFSET(0xDA432F0)

inline static constexpr unsigned int CNDMEOIOFML_TypeDefinitionIndex = 80569;

	class CNDMEOIOFML : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDMEOIOFML_CTOR_OFFSET))(this);
		}

	};
