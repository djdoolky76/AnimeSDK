#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLOOEECAKDP_CTOR_OFFSET UNITYSDK_OFFSET(0x176716C0)

inline static constexpr unsigned int OLOOEECAKDP_TypeDefinitionIndex = 43049;

	class OLOOEECAKDP : public ::System::Object
	{
	public:
		::System::Boolean ELLNLDDDJLO; // 0x10
		::System::Boolean NMMJBGFDNAI; // 0x11
		::System::Boolean GNKKOIJFJJG; // 0x12
		::System::Boolean EDNNHANBHHL; // 0x13
		::System::Boolean KDHCICFNAOC; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 HLKDNMKKCPM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOOEECAKDP_CTOR_OFFSET))(this);
		}

	};
