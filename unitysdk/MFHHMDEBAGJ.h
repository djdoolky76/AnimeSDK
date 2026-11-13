#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOLEBDHNPG.h"
class AIMNKMEFBKE;
class AMGFMLIDDAF;
class DJLCFHGODGM;
class GGDIMKDOIGA;

#define MFHHMDEBAGJ_CEKKKGMHBLC_OFFSET UNITYSDK_OFFSET(0x1AC00E00)
#define MFHHMDEBAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2C330)
#define MFHHMDEBAGJ_FKOENAMCOLO_OFFSET UNITYSDK_OFFSET(0x1AC2C410)
#define MFHHMDEBAGJ_GFOMJJMKKDD_OFFSET UNITYSDK_OFFSET(0x1AC2BD90)
#define MFHHMDEBAGJ_HHLHCNBLBDG_OFFSET UNITYSDK_OFFSET(0x1AC2BEF0)
#define MFHHMDEBAGJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AC2C340)

inline static constexpr unsigned int MFHHMDEBAGJ_TypeDefinitionIndex = 37465;

	class MFHHMDEBAGJ : public ::NEOLEBDHNPG
	{
	public:
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x30
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + MFHHMDEBAGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GFOMJJMKKDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHHMDEBAGJ_GFOMJJMKKDD_OFFSET))(this);
		}

		::System::Void HHLHCNBLBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHHMDEBAGJ_HHLHCNBLBDG_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHHMDEBAGJ_INITIALIZE_OFFSET))(this);
		}

		::AMGFMLIDDAF* FKOENAMCOLO()
		{
			return ((::AMGFMLIDDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHHMDEBAGJ_FKOENAMCOLO_OFFSET))(this);
		}

		::DJLCFHGODGM* CEKKKGMHBLC()
		{
			return ((::DJLCFHGODGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHHMDEBAGJ_CEKKKGMHBLC_OFFSET))(this);
		}

	};
