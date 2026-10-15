#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JMLFHPJOGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB26A040)

inline static constexpr unsigned int JMLFHPJOGJJ_TypeDefinitionIndex = 80593;

	class JMLFHPJOGJJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLFHPJOGJJ_CTOR_OFFSET))(this);
		}

	};
