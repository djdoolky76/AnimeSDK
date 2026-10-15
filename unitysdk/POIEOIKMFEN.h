#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIEJPCIFPEF.h"

#define POIEOIKMFEN_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0xC364CD0)
#define POIEOIKMFEN_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0xC364C90)
#define POIEOIKMFEN_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0xC364DE0)
#define POIEOIKMFEN_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0xC364C00)
#define POIEOIKMFEN_CTOR_OFFSET UNITYSDK_OFFSET(0xC364AD0)
#define POIEOIKMFEN_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0xC364B00)
#define POIEOIKMFEN_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0xC364E20)
#define POIEOIKMFEN_FPAFHCDOEAG_OFFSET UNITYSDK_OFFSET(0xC364BA0)

inline static constexpr unsigned int POIEOIKMFEN_TypeDefinitionIndex = 49755;

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
