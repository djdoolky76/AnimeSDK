#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIEJPCIFPEF.h"

#define POIEOIKMFEN_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0xCC9F590)
#define POIEOIKMFEN_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0xCC9F550)
#define POIEOIKMFEN_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0xCC9F6A0)
#define POIEOIKMFEN_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0xCC9F4C0)
#define POIEOIKMFEN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9F390)
#define POIEOIKMFEN_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0xCC9F3C0)
#define POIEOIKMFEN_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0xCC9F6E0)
#define POIEOIKMFEN_FPAFHCDOEAG_OFFSET UNITYSDK_OFFSET(0xCC9F460)

inline static constexpr unsigned int POIEOIKMFEN_TypeDefinitionIndex = 50803;

	class POIEOIKMFEN
	{
	public:
		::System::Single PBLGHIGPEIP; // 0x50
		::System::Void _ctor(::IIEJPCIFPEF a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIEJPCIFPEF))((::PBYTE)hIl2Cpp + POIEOIKMFEN_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEOIKMFEN_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEOIKMFEN_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEOIKMFEN_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POIEOIKMFEN_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEOIKMFEN_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIEOIKMFEN_FJMKAOHGMHH_OFFSET))(this);
		}

		::System::Void FPAFHCDOEAG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POIEOIKMFEN_FPAFHCDOEAG_OFFSET))(this, a1);
		}

	};
