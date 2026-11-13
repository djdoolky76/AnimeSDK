#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class KDCNOMHGMNO;

#define MDOALIMPNCN_CTOR_OFFSET UNITYSDK_OFFSET(0x183EF490)
#define MDOALIMPNCN_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x183EF380)
#define MDOALIMPNCN_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x183EF430)

inline static constexpr unsigned int MDOALIMPNCN_TypeDefinitionIndex = 54923;

	class MDOALIMPNCN : public ::GJPFGOGOLBI
	{
	public:
		::KDCNOMHGMNO* EHEHKFOELOK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOALIMPNCN_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOALIMPNCN_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOALIMPNCN_NLBNJGKAMII_OFFSET))(this);
		}

	};
