#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MCOOMCBNMAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4200)

inline static constexpr unsigned int MCOOMCBNMAG_TypeDefinitionIndex = 44752;

	class MCOOMCBNMAG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOOMCBNMAG_CTOR_OFFSET))(this);
		}

	};
