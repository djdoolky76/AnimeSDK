#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJNAPLKBEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88E0A0)

inline static constexpr unsigned int BJNAPLKBEEA_TypeDefinitionIndex = 42360;

	class BJNAPLKBEEA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNAPLKBEEA_CTOR_OFFSET))(this);
		}

	};
