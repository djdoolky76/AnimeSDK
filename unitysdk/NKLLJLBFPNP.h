#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKLLJLBFPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96DBC0)

inline static constexpr unsigned int NKLLJLBFPNP_TypeDefinitionIndex = 42232;

	class NKLLJLBFPNP : public ::System::Object
	{
	public:
		::System::Boolean KKCOMFELDGL; // 0x10
		::System::Boolean DNKLKPENPJJ; // 0x11
		::System::Boolean MOFGJBOGDAF; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJLBFPNP_CTOR_OFFSET))(this);
		}

	};
