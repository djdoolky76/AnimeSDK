#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define JPMFOCFMDDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C7D0)

inline static constexpr unsigned int JPMFOCFMDDD_TypeDefinitionIndex = 10825;

	class JPMFOCFMDDD : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMFOCFMDDD_CTOR_OFFSET))(this);
		}

	};
