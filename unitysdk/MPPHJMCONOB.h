#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKFOHAKAJLP.h"
class AGCPAMNLCGN;
class MPPHJMCONOB;

#define MPPHJMCONOB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA3FCE0)
#define MPPHJMCONOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3FDF0)
#define MPPHJMCONOB_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xBA3FDB0)

inline static constexpr unsigned int MPPHJMCONOB_TypeDefinitionIndex = 78003;

	class MPPHJMCONOB : public ::BKFOHAKAJLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHJMCONOB_CTOR_OFFSET))(this);
		}

		static ::MPPHJMCONOB* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2)
		{
			return ((::MPPHJMCONOB*(*)(::AGCPAMNLCGN*, ::System::UInt64))((::PBYTE)hIl2Cpp + MPPHJMCONOB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHJMCONOB_GAILDDCMCHP_OFFSET))(this);
		}

	};
