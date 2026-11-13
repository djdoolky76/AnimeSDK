#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JMLFHPJOGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B8700)

inline static constexpr unsigned int JMLFHPJOGJJ_TypeDefinitionIndex = 83373;

	class JMLFHPJOGJJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLFHPJOGJJ_CTOR_OFFSET))(this);
		}

	};
