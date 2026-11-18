#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFLJKJFCPFM_DONOIEPOIPI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class FAJMJJFLKNG;
class HLAIHIODAPM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLMEKBECJPI_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0x116BC320)
#define FLMEKBECJPI_EHHELKOLPKA_OFFSET UNITYSDK_OFFSET(0x116BC4A0)
#define FLMEKBECJPI_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x116BBF80)
#define FLMEKBECJPI_KHBHMALKDME_OFFSET UNITYSDK_OFFSET(0x116BC190)
#define FLMEKBECJPI_MGBDEMAGEAA_OFFSET UNITYSDK_OFFSET(0x116BC1A0)
#define FLMEKBECJPI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x116BC180)
#define FLMEKBECJPI__CTOR_OFFSET UNITYSDK_OFFSET(0x116BB890)

inline static constexpr unsigned int FLMEKBECJPI_TypeDefinitionIndex = 75824;

class FLMEKBECJPI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DMAMCOJOEON; // 0x10
	::System::Collections::Generic::List_1<::HLAIHIODAPM*>* MGPKOEILPIB; // 0x18
	::FAJMJJFLKNG* FEODGGINBLK; // 0x20
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x28
	::LFLJKJFCPFM_DONOIEPOIPI _MBCJMGMFGOB_k__BackingField; // 0x2C

	::System::Void _ctor(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLMEKBECJPI__CTOR_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMEKBECJPI_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMEKBECJPI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void KHBHMALKDME(::LFLJKJFCPFM_DONOIEPOIPI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LFLJKJFCPFM_DONOIEPOIPI))((::PBYTE)hIl2Cpp + FLMEKBECJPI_KHBHMALKDME_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath MGBDEMAGEAA(::System::Int32 GAPCJMOLBKH)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLMEKBECJPI_MGBDEMAGEAA_OFFSET))(this, GAPCJMOLBKH);
	}

	::System::Boolean AMGBGFDJNFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMEKBECJPI_AMGBGFDJNFG_OFFSET))(this);
	}

	::LFLJKJFCPFM_DONOIEPOIPI EHHELKOLPKA()
	{
		return ((::LFLJKJFCPFM_DONOIEPOIPI(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMEKBECJPI_EHHELKOLPKA_OFFSET))(this);
	}
};
