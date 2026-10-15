#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGJAOBJPGDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFC570)

inline static constexpr unsigned int JGJAOBJPGDO_TypeDefinitionIndex = 15463;

	class JGJAOBJPGDO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJAOBJPGDO_CTOR_OFFSET))(this);
		}

	};
