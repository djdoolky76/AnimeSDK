#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLAPDGELEPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EAA0)

inline static constexpr unsigned int DLAPDGELEPN_TypeDefinitionIndex = 42932;

	class DLAPDGELEPN : public ::System::Object
	{
	public:
		::System::Int32 ODMPMJCAHPN; // 0x10
		::System::UInt32 BKKFGDBOIDO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAPDGELEPN_CTOR_OFFSET))(this);
		}

	};
