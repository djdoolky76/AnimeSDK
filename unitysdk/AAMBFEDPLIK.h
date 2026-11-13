#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAMBFEDPLIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D890)

inline static constexpr unsigned int AAMBFEDPLIK_TypeDefinitionIndex = 43329;

	class AAMBFEDPLIK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMBFEDPLIK_CTOR_OFFSET))(this);
		}

	};
