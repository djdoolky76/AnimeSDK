#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JHOEDOPHEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x173F1110)

inline static constexpr unsigned int JHOEDOPHEPC_TypeDefinitionIndex = 50143;

	class JHOEDOPHEPC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOEDOPHEPC_CTOR_OFFSET))(this);
		}

	};
