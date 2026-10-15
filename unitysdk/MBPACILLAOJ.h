#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKFOHAKAJLP.h"
class AGCPAMNLCGN;
class MBPACILLAOJ;

#define MBPACILLAOJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB86AEA0)
#define MBPACILLAOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB86B080)
#define MBPACILLAOJ_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xB86AF70)
#define MBPACILLAOJ_HOCLBMDNEEN_OFFSET UNITYSDK_OFFSET(0xB86AFC0)
#define MBPACILLAOJ___PLAYKAFKAUSE_B__2_0_OFFSET UNITYSDK_OFFSET(0xB86B0D0)

inline static constexpr unsigned int MBPACILLAOJ_TypeDefinitionIndex = 77999;

	class MBPACILLAOJ : public ::BKFOHAKAJLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPACILLAOJ_CTOR_OFFSET))(this);
		}

		static ::MBPACILLAOJ* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2)
		{
			return ((::MBPACILLAOJ*(*)(::AGCPAMNLCGN*, ::System::UInt64))((::PBYTE)hIl2Cpp + MBPACILLAOJ_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPACILLAOJ_GAILDDCMCHP_OFFSET))(this);
		}

		::System::Void HOCLBMDNEEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPACILLAOJ_HOCLBMDNEEN_OFFSET))(this);
		}

		::System::Void __PlayKafkaUse_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPACILLAOJ___PLAYKAFKAUSE_B__2_0_OFFSET))(this);
		}

	};
