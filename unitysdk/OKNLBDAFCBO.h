#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKNLBDAFCBO_CTOR_OFFSET UNITYSDK_OFFSET(0x176715B0)

inline static constexpr unsigned int OKNLBDAFCBO_TypeDefinitionIndex = 43939;

	class OKNLBDAFCBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLBDAFCBO_CTOR_OFFSET))(this);
		}

	};
