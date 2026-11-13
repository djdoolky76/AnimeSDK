#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class IALBJEGDCFI_CCLFIJNFBEL;
class LJDKNPLNBOA;

#define KAGDNGHDNNN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19DAC440)
#define KAGDNGHDNNN_CTOR_OFFSET UNITYSDK_OFFSET(0x19DAC4D0)

inline static constexpr unsigned int KAGDNGHDNNN_TypeDefinitionIndex = 82268;

	class KAGDNGHDNNN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAGDNGHDNNN_CTOR_OFFSET))(this);
		}

		static ::LJDKNPLNBOA* BPLPBPMEODA(::CCEIJBFAOAI* a1, ::IALBJEGDCFI_CCLFIJNFBEL* a2)
		{
			return ((::LJDKNPLNBOA*(*)(::CCEIJBFAOAI*, ::IALBJEGDCFI_CCLFIJNFBEL*))((::PBYTE)hIl2Cpp + KAGDNGHDNNN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
