#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIONNJPLOCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1799FEF0)

inline static constexpr unsigned int CIONNJPLOCI_TypeDefinitionIndex = 6317;

	class CIONNJPLOCI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONNJPLOCI_CTOR_OFFSET))(this);
		}

	};
