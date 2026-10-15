#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PCEHFACKCOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF69F0)

inline static constexpr unsigned int PCEHFACKCOM_TypeDefinitionIndex = 72398;

	class PCEHFACKCOM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEHFACKCOM_CTOR_OFFSET))(this);
		}

	};
