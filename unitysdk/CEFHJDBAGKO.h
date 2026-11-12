#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEFHJDBAGKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74B8A0)

inline static constexpr unsigned int CEFHJDBAGKO_TypeDefinitionIndex = 38025;

	class CEFHJDBAGKO : public ::System::Object
	{
	public:
		::System::UInt32 APJJLIHIJBO; // 0x10
		::System::Boolean KDHDMDBKNJE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFHJDBAGKO_CTOR_OFFSET))(this);
		}

	};
