#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKFOHAKAJLP.h"
class AGCPAMNLCGN;
class IPPIHMLAGLD;

#define IPPIHMLAGLD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16518E30)
#define IPPIHMLAGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x16519010)
#define IPPIHMLAGLD_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x16518F00)
#define IPPIHMLAGLD_JPBEIPOFMIG_OFFSET UNITYSDK_OFFSET(0x16518F50)
#define IPPIHMLAGLD___PLAYICESTORM_B__2_0_OFFSET UNITYSDK_OFFSET(0x16519060)

inline static constexpr unsigned int IPPIHMLAGLD_TypeDefinitionIndex = 78001;

	class IPPIHMLAGLD : public ::BKFOHAKAJLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPIHMLAGLD_CTOR_OFFSET))(this);
		}

		static ::IPPIHMLAGLD* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2)
		{
			return ((::IPPIHMLAGLD*(*)(::AGCPAMNLCGN*, ::System::UInt64))((::PBYTE)hIl2Cpp + IPPIHMLAGLD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPIHMLAGLD_GAILDDCMCHP_OFFSET))(this);
		}

		::System::Void JPBEIPOFMIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPIHMLAGLD_JPBEIPOFMIG_OFFSET))(this);
		}

		::System::Void __PlayIceStorm_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPIHMLAGLD___PLAYICESTORM_B__2_0_OFFSET))(this);
		}

	};
