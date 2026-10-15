#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPFOOEAMHID_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFC6B0)

inline static constexpr unsigned int DPFOOEAMHID_TypeDefinitionIndex = 64344;

	class DPFOOEAMHID : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFOOEAMHID_CTOR_OFFSET))(this);
		}

	};
