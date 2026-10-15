#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCGLFKMDELO.h"
#include "unitysdk/System/Object.h"
class CIPGAPCNPGK;
class NCINHOOPPNG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHMOFCGDHOE_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB6BC7B0)
#define LHMOFCGDHOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BC6F0)
#define LHMOFCGDHOE_FOLPLPJHICL_OFFSET UNITYSDK_OFFSET(0xB6BC8D0)

	class LHMOFCGDHOE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::BCGLFKMDELO, ::NCINHOOPPNG*>* HOIIJPHKMNK; // 0x10
		::CIPGAPCNPGK* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::CIPGAPCNPGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIPGAPCNPGK*))((::PBYTE)hIl2Cpp + LHMOFCGDHOE_CTOR_OFFSET))(this, a1);
		}

		::NCINHOOPPNG* ACMKLFOMPFC(::BCGLFKMDELO a1)
		{
			return ((::NCINHOOPPNG*(*)(::PVOID, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + LHMOFCGDHOE_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::NCINHOOPPNG* FOLPLPJHICL(::BCGLFKMDELO a1)
		{
			return ((::NCINHOOPPNG*(*)(::PVOID, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + LHMOFCGDHOE_FOLPLPJHICL_OFFSET))(this, a1);
		}

	};
