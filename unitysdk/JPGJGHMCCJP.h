#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILHPBMCOFK.h"
#include "unitysdk/System/Object.h"
class FKIAHEEJGKH;

#define JPGJGHMCCJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DB700)

inline static constexpr unsigned int JPGJGHMCCJP_TypeDefinitionIndex = 37125;

	class JPGJGHMCCJP : public ::System::Object
	{
	public:
		::FKIAHEEJGKH* JEBKPBHELJP; // 0x10
		::System::Int32 DAIIECALKJK; // 0x18
		::System::Boolean DNBDKJIKCMO; // 0x1C
		::System::Byte _padding0[0x3];
		::DILHPBMCOFK IPDDIKPHGPE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGJGHMCCJP_CTOR_OFFSET))(this);
		}

	};
