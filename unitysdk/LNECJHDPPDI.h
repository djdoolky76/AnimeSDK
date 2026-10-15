#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LNECJHDPPDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C91C0A0)

inline static constexpr unsigned int LNECJHDPPDI_TypeDefinitionIndex = 42558;

	class LNECJHDPPDI : public ::System::Object
	{
	public:
		::System::Boolean ECJMFHLILMH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNECJHDPPDI_CTOR_OFFSET))(this);
		}

	};
