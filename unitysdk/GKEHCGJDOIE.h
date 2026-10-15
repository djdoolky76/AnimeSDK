#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKEHCGJDOIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA820D0)

inline static constexpr unsigned int GKEHCGJDOIE_TypeDefinitionIndex = 41927;

	class GKEHCGJDOIE : public ::System::Object
	{
	public:
		::System::UInt32 FIDKNPMCIMM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEHCGJDOIE_CTOR_OFFSET))(this);
		}

	};
