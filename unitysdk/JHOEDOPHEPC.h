#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JHOEDOPHEPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C8B30)

inline static constexpr unsigned int JHOEDOPHEPC_TypeDefinitionIndex = 49067;

	class JHOEDOPHEPC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOEDOPHEPC_CTOR_OFFSET))(this);
		}

	};
