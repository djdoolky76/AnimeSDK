#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLOOEECAKDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F920)

inline static constexpr unsigned int OLOOEECAKDP_TypeDefinitionIndex = 42074;

	class OLOOEECAKDP : public ::System::Object
	{
	public:
		::System::Boolean KDHCICFNAOC; // 0x10
		::System::Boolean EDNNHANBHHL; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 HLKDNMKKCPM; // 0x14
		::System::Boolean NMMJBGFDNAI; // 0x18
		::System::Boolean GNKKOIJFJJG; // 0x19
		::System::Boolean ELLNLDDDJLO; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOOEECAKDP_CTOR_OFFSET))(this);
		}

	};
