#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FPAMNIDHKHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA72160)

inline static constexpr unsigned int FPAMNIDHKHC_TypeDefinitionIndex = 42983;

	class FPAMNIDHKHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAMNIDHKHC_CTOR_OFFSET))(this);
		}

	};
