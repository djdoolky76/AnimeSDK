#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/OIPMNNAHIFP.h"

#define IJJGCAFOMFC_ABCEJOHMKMN_OFFSET UNITYSDK_OFFSET(0x1743D490)
#define IJJGCAFOMFC_KLPLMBPHIEC_OFFSET UNITYSDK_OFFSET(0x1743D4D0)

inline static constexpr unsigned int IJJGCAFOMFC_TypeDefinitionIndex = 63998;

	class IJJGCAFOMFC : public ::System::Object
	{
	public:
		static ::APCGKBOPGJL ABCEJOHMKMN(::OIPMNNAHIFP a1)
		{
			return ((::APCGKBOPGJL(*)(::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IJJGCAFOMFC_ABCEJOHMKMN_OFFSET))(a1);
		}

		static ::APCGKBOPGJL KLPLMBPHIEC(::OIPMNNAHIFP a1)
		{
			return ((::APCGKBOPGJL(*)(::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IJJGCAFOMFC_KLPLMBPHIEC_OFFSET))(a1);
		}

	};
