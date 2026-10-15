#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLOOEECAKDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DC00)

inline static constexpr unsigned int OLOOEECAKDP_TypeDefinitionIndex = 42074;

	class OLOOEECAKDP : public ::System::Object
	{
	public:
		::System::Int32 HLKDNMKKCPM; // 0x10
		::System::Boolean ELLNLDDDJLO; // 0x14
		::System::Boolean EDNNHANBHHL; // 0x15
		::System::Boolean NMMJBGFDNAI; // 0x16
		::System::Boolean KDHCICFNAOC; // 0x17
		::System::Boolean GNKKOIJFJJG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOOEECAKDP_CTOR_OFFSET))(this);
		}

	};
