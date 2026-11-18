#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/NHCEIJGMNDO_HAOMGFGMDBE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHCEIJGMNDO_OKHJJBABECH.h"

class FBAMLABJMKF;
class IANEJNBHNPJ;
class NHCEIJGMNDO_LHGAECIINBM;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHCEIJGMNDO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xE753BA0)
#define NHCEIJGMNDO_CHPNHFIKOIP_1_OFFSET UNITYSDK_OFFSET(0xE754280)
#define NHCEIJGMNDO_CHPNHFIKOIP_OFFSET UNITYSDK_OFFSET(0xE754210)
#define NHCEIJGMNDO_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0xE753C60)
#define NHCEIJGMNDO_EJMFCBPJFGJ_OFFSET UNITYSDK_OFFSET(0xE7541D0)
#define NHCEIJGMNDO_HCJGGHLFKKE_OFFSET UNITYSDK_OFFSET(0xE753EA0)
#define NHCEIJGMNDO_KFMOHMEJHKF_OFFSET UNITYSDK_OFFSET(0xE753FA0)
#define NHCEIJGMNDO_LCGFOBOHNBL_OFFSET UNITYSDK_OFFSET(0xE753F10)
#define NHCEIJGMNDO_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0xE753F60)
#define NHCEIJGMNDO__CTOR_OFFSET UNITYSDK_OFFSET(0xE753AE0)

inline static constexpr unsigned int NHCEIJGMNDO_TypeDefinitionIndex = 80418;

class NHCEIJGMNDO : public ::System::Object
{
public:
	::NHCEIJGMNDO_LHGAECIINBM* MODDMMFOHLN; // 0x10
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Object*>* BKPLJLHKJPL; // 0x20
	::MoleMole::Config::ConfigHollowChessboard* NGFHKHLKEHD; // 0x28
	::System::Boolean MOBCBBGEFAC; // 0x30

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + NHCEIJGMNDO__CTOR_OFFSET))(this, COBEJJHGMPO);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void HCJGGHLFKKE(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_HCJGGHLFKKE_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void LCGFOBOHNBL(::PNJDGHBEMLK* NLIDNDCGOMK)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_LCGFOBOHNBL_OFFSET))(this, NLIDNDCGOMK);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_MHHJPBJILBJ_OFFSET))(this);
	}

	::IANEJNBHNPJ* KFMOHMEJHKF()
	{
		return ((::IANEJNBHNPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_KFMOHMEJHKF_OFFSET))(this);
	}

	::System::Void EJMFCBPJFGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_EJMFCBPJFGJ_OFFSET))(this);
	}

	::System::Void CHPNHFIKOIP(::NHCEIJGMNDO_OKHJJBABECH LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::NHCEIJGMNDO_OKHJJBABECH))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_CHPNHFIKOIP_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHPNHFIKOIP_1(::MoleMole::HollowChessboard::HollowCell FGLANFOHOOJ, ::NHCEIJGMNDO_HAOMGFGMDBE INAAJHIPCAG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::NHCEIJGMNDO_HAOMGFGMDBE))((::PBYTE)hIl2Cpp + NHCEIJGMNDO_CHPNHFIKOIP_1_OFFSET))(this, FGLANFOHOOJ, INAAJHIPCAG);
	}
};
