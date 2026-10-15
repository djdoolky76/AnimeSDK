#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BCGLFKMDELO.h"
class NCINHOOPPNG;

#define CIPGAPCNPGK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF89550)
#define CIPGAPCNPGK_CTOR_OFFSET UNITYSDK_OFFSET(0xCF89700)

inline static constexpr unsigned int CIPGAPCNPGK_TypeDefinitionIndex = 62611;

	class CIPGAPCNPGK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPGAPCNPGK_CTOR_OFFSET))(this);
		}

		::NCINHOOPPNG* BPLPBPMEODA(::BCGLFKMDELO a1)
		{
			return ((::NCINHOOPPNG*(*)(::PVOID, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + CIPGAPCNPGK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
