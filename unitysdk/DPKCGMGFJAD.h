#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIHNAJFFFKB;

#define DPKCGMGFJAD_CTOR_OFFSET UNITYSDK_OFFSET(0x13445140)
#define DPKCGMGFJAD_ODGBJHIDJKD_OFFSET UNITYSDK_OFFSET(0x13445030)

inline static constexpr unsigned int DPKCGMGFJAD_TypeDefinitionIndex = 70220;

	class DPKCGMGFJAD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKCGMGFJAD_CTOR_OFFSET))(this);
		}

		::OIHNAJFFFKB* ODGBJHIDJKD(::System::UInt32 a1)
		{
			return ((::OIHNAJFFFKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPKCGMGFJAD_ODGBJHIDJKD_OFFSET))(this, a1);
		}

	};
