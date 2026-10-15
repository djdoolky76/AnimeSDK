#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOLEBDHNPG.h"
class AIMNKMEFBKE;
class AMGFMLIDDAF;
class DJLCFHGODGM;
class GGDIMKDOIGA;

#define MFHHMDEBAGJ_CEKKKGMHBLC_OFFSET UNITYSDK_OFFSET(0x1C6F1550)
#define MFHHMDEBAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71CB60)
#define MFHHMDEBAGJ_FKOENAMCOLO_OFFSET UNITYSDK_OFFSET(0x1C71CC40)
#define MFHHMDEBAGJ_GFOMJJMKKDD_OFFSET UNITYSDK_OFFSET(0x1C71C5C0)
#define MFHHMDEBAGJ_HHLHCNBLBDG_OFFSET UNITYSDK_OFFSET(0x1C71C720)
#define MFHHMDEBAGJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C71CB70)

inline static constexpr unsigned int MFHHMDEBAGJ_TypeDefinitionIndex = 36537;

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
