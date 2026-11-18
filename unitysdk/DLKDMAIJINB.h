#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"
#include "unitysdk/MNLDNFFGIFL.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"

class ABFDJPPBLHF;
class BEHEJNCPPNB;
class DFEFCOAAPGK;
class FCJPKCBAKBD;
class HNDKELGJGFG;
class IIDECACHMDG;
class OFLPOCHHHLC;
class OHKBMKNIBHA;
class OOJLLBEKEPI;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define DLKDMAIJINB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1D9F3800)
#define DLKDMAIJINB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1D9F5FB0)
#define DLKDMAIJINB_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x1D9F39E0)
#define DLKDMAIJINB_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1D9F33F0)
#define DLKDMAIJINB_MDDHEJMBJDA_OFFSET UNITYSDK_OFFSET(0x1D9F3A80)
#define DLKDMAIJINB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1D9F3950)
#define DLKDMAIJINB_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x1D9F36A0)
#define DLKDMAIJINB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F38D0)

inline static constexpr unsigned int DLKDMAIJINB_TypeDefinitionIndex = 94131;

class DLKDMAIJINB : public ::IEJHOJBLOHI
{
public:
	::DFEFCOAAPGK* GEEHGDABNJF; // 0x28
	::IIDECACHMDG* GPIMFOOACHK; // 0x30
	::System::Collections::ObjectModel::ReadOnlyDictionary_2<::MoleMole::Arcade::BallsRace::BrEntityType, ::System::Collections::Generic::List_1<::OHKBMKNIBHA*>*>* JEFODPNOMAD; // 0x38
	::System::Single LBNNFPBLDOL; // 0x40
	::System::Single EEJBAJHPONK; // 0x44
	::System::Single BOGNPLGJOBO; // 0x48
	::System::Byte _padding0[0x4];
	::MNLDNFFGIFL EBJICBIMOHN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKDMAIJINB__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* HMPEEAAAGHE)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + DLKDMAIJINB_KHGPLGMDOFC_OFFSET))(this, HMPEEAAAGHE);
	}

	::System::Void OJFBBOMGIEN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLKDMAIJINB_OJFBBOMGIEN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKDMAIJINB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + DLKDMAIJINB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void INEGOEGIOKM(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLKDMAIJINB_INEGOEGIOKM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MDDHEJMBJDA(::ABFDJPPBLHF* GKBJOPJKCLB, ::FCJPKCBAKBD* EHHHMFKHNAI, ::BEHEJNCPPNB* GHEJGNOLFCA, ::OOJLLBEKEPI* HLFFCMIFFIB, ::HNDKELGJGFG* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::ABFDJPPBLHF*, ::FCJPKCBAKBD*, ::BEHEJNCPPNB*, ::OOJLLBEKEPI*, ::HNDKELGJGFG*))((::PBYTE)hIl2Cpp + DLKDMAIJINB_MDDHEJMBJDA_OFFSET))(this, GKBJOPJKCLB, EHHHMFKHNAI, GHEJGNOLFCA, HLFFCMIFFIB, JKBLDFBGBPK);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKDMAIJINB_IFHNMAGGFAE_OFFSET))(this);
	}
};
