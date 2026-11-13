#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class BKLKJCJFHKO;
class PNOIMIPEOFA;

#define GBJLCLBJEKP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B883AB0)
#define GBJLCLBJEKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B883AA0)

inline static constexpr unsigned int GBJLCLBJEKP_TypeDefinitionIndex = 64055;

	class GBJLCLBJEKP : public ::System::Object
	{
	public:
		::BKLKJCJFHKO* NMOPFNGFPPB; // 0x10
		::System::Void _ctor(::BKLKJCJFHKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKLKJCJFHKO*))((::PBYTE)hIl2Cpp + GBJLCLBJEKP_CTOR_OFFSET))(this, a1);
		}

		::PNOIMIPEOFA* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::PNOIMIPEOFA*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + GBJLCLBJEKP_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
