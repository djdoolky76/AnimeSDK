#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPFOOEAMHID_CTOR_OFFSET UNITYSDK_OFFSET(0x12DF7950)

inline static constexpr unsigned int DPFOOEAMHID_TypeDefinitionIndex = 65791;

	class DPFOOEAMHID : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFOOEAMHID_CTOR_OFFSET))(this);
		}

	};
