#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NFJACFHDFLA_CTOR_OFFSET UNITYSDK_OFFSET(0xC4706D0)

inline static constexpr unsigned int NFJACFHDFLA_TypeDefinitionIndex = 79926;

	class NFJACFHDFLA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJACFHDFLA_CTOR_OFFSET))(this);
		}

	};
