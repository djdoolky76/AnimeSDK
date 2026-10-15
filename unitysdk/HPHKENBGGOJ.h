#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNEGKIBNHLD.h"
class AIMNKMEFBKE;
class CJCHKDLALDN;
class GGDIMKDOIGA;
class IJFIHJJPHNA;

#define HPHKENBGGOJ_BDFPECFMJAB_OFFSET UNITYSDK_OFFSET(0x1C65A7D0)
#define HPHKENBGGOJ_BGGBCGDCJLL_OFFSET UNITYSDK_OFFSET(0x1C65A620)
#define HPHKENBGGOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65A5F0)
#define HPHKENBGGOJ_FMNLLMGPDHI_OFFSET UNITYSDK_OFFSET(0x1C65AB50)
#define HPHKENBGGOJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C65A8A0)

inline static constexpr unsigned int HPHKENBGGOJ_TypeDefinitionIndex = 36493;

	class HPHKENBGGOJ : public ::GNEGKIBNHLD
	{
	public:
		::IJFIHJJPHNA* JPCMHJPCJLP; // 0x30
		::GGDIMKDOIGA* FLMODBLFAGD; // 0x38
		::System::UInt32 ECAMBMFIDKE; // 0x40
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*, ::System::UInt32))((::PBYTE)hIl2Cpp + HPHKENBGGOJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGGBCGDCJLL(::CJCHKDLALDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJCHKDLALDN*))((::PBYTE)hIl2Cpp + HPHKENBGGOJ_BGGBCGDCJLL_OFFSET))(this, a1);
		}

		::CJCHKDLALDN* BDFPECFMJAB()
		{
			return ((::CJCHKDLALDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHKENBGGOJ_BDFPECFMJAB_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHKENBGGOJ_INITIALIZE_OFFSET))(this);
		}

		::IJFIHJJPHNA* FMNLLMGPDHI()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHKENBGGOJ_FMNLLMGPDHI_OFFSET))(this);
		}

	};
