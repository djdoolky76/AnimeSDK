#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class IALBJEGDCFI_CCLFIJNFBEL;
class LJDKNPLNBOA;

#define KAGDNGHDNNN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2CFAC0)
#define KAGDNGHDNNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CFB50)

inline static constexpr unsigned int KAGDNGHDNNN_TypeDefinitionIndex = 79491;

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
