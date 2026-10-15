#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALBPEHOMADH_CTOR_OFFSET UNITYSDK_OFFSET(0x15561100)

inline static constexpr unsigned int ALBPEHOMADH_TypeDefinitionIndex = 72398;

	class ALBPEHOMADH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBPEHOMADH_CTOR_OFFSET))(this);
		}

	};
