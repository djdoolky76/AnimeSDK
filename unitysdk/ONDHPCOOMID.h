#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONDHPCOOMID_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9711F0)

inline static constexpr unsigned int ONDHPCOOMID_TypeDefinitionIndex = 43709;

	class ONDHPCOOMID : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDHPCOOMID_CTOR_OFFSET))(this);
		}

	};
