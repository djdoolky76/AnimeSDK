#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJNAPLKBEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3CF00)

inline static constexpr unsigned int BJNAPLKBEEA_TypeDefinitionIndex = 43335;

	class BJNAPLKBEEA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNAPLKBEEA_CTOR_OFFSET))(this);
		}

	};
