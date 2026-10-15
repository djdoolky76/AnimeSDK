#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKFOHAKAJLP.h"
class AGCPAMNLCGN;
class OMDNNNJCEOE;

#define OMDNNNJCEOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF1AB60)
#define OMDNNNJCEOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1AC80)
#define OMDNNNJCEOE_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xBF1AC30)

inline static constexpr unsigned int OMDNNNJCEOE_TypeDefinitionIndex = 77998;

	class OMDNNNJCEOE : public ::BKFOHAKAJLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDNNNJCEOE_CTOR_OFFSET))(this);
		}

		static ::OMDNNNJCEOE* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2)
		{
			return ((::OMDNNNJCEOE*(*)(::AGCPAMNLCGN*, ::System::UInt64))((::PBYTE)hIl2Cpp + OMDNNNJCEOE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDNNNJCEOE_GAILDDCMCHP_OFFSET))(this);
		}

	};
