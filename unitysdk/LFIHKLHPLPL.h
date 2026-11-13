#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFIHKLHPLPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D639350)

inline static constexpr unsigned int LFIHKLHPLPL_TypeDefinitionIndex = 44686;

	class LFIHKLHPLPL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIHKLHPLPL_CTOR_OFFSET))(this);
		}

	};
