#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JMJBBPILOIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB262990)

inline static constexpr unsigned int JMJBBPILOIC_TypeDefinitionIndex = 72402;

	class JMJBBPILOIC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJBBPILOIC_CTOR_OFFSET))(this);
		}

	};
