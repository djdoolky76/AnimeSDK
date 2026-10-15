#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class AEANOGAFBGK;
class BIMCEEABCEI;
class CKBIKDBNKEO;
class CKNMJMCFPME;
class DLJPDKIMHAC;
class DNBDHGNLIPK;
class DNIDONCOAEE;
class FINMGDLKNMH;
class HKHEDJKACGK;
class IAKMFLMFALK;
class KFHKMDOPMFC;
class KIIGKJKMCHP;
class MINFEAKALGE;
class MKHPAECGJBE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDPILPBMEEC_AKBNCLMKGMJ_OFFSET UNITYSDK_OFFSET(0x159C3540)
#define GDPILPBMEEC_CFIJOEAJEMP_OFFSET UNITYSDK_OFFSET(0x159C3150)
#define GDPILPBMEEC_CKBAHJHPLIG_OFFSET UNITYSDK_OFFSET(0x159C1120)
#define GDPILPBMEEC_CPKBCDHBKFL_OFFSET UNITYSDK_OFFSET(0x159C2810)
#define GDPILPBMEEC_CTOR_OFFSET UNITYSDK_OFFSET(0x159C3CC0)
#define GDPILPBMEEC_DGCGKPBMPMJ_OFFSET UNITYSDK_OFFSET(0x159C1A60)
#define GDPILPBMEEC_EAHLNBKHBFG_OFFSET UNITYSDK_OFFSET(0x159C3790)
#define GDPILPBMEEC_GHBKPFFDEOC_OFFSET UNITYSDK_OFFSET(0x159C3350)
#define GDPILPBMEEC_GNGEEDECFEN_OFFSET UNITYSDK_OFFSET(0x159C1F20)
#define GDPILPBMEEC_HBECOCLIENB_OFFSET UNITYSDK_OFFSET(0x159C1640)
#define GDPILPBMEEC_IGDACHHDKKH_OFFSET UNITYSDK_OFFSET(0x159C39D0)
#define GDPILPBMEEC_IGDGJAAPBLJ_OFFSET UNITYSDK_OFFSET(0x159C2A20)
#define GDPILPBMEEC_JDBHCENPLPJ_OFFSET UNITYSDK_OFFSET(0x159C1400)
#define GDPILPBMEEC_LCPEJNKPLFH_OFFSET UNITYSDK_OFFSET(0x159C1C30)
#define GDPILPBMEEC_OABCLLKHAFK_OFFSET UNITYSDK_OFFSET(0x159C1880)
#define GDPILPBMEEC_OBBFPCOEAOG_OFFSET UNITYSDK_OFFSET(0x159C2F50)
#define GDPILPBMEEC_OFFCNODLKGO_OFFSET UNITYSDK_OFFSET(0x159C2390)
#define GDPILPBMEEC_OKHFKJHNMDB_OFFSET UNITYSDK_OFFSET(0x159C2D30)

inline static constexpr unsigned int GDPILPBMEEC_TypeDefinitionIndex = 81736;

	class GDPILPBMEEC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DNBDHGNLIPK*>* BOLAFEMLDLJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AEANOGAFBGK*>* NFCGEFEPMCM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::MINFEAKALGE*>* IKAABEOAICM; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KIIGKJKMCHP*>* MMILHAANAPM; // 0x28
		::System::Collections::Generic::List_1<::DLJPDKIMHAC*>* DDOCAEAOGFF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IAKMFLMFALK*>* DOAABGLKAKD; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CKBIKDBNKEO*>* GPLLPOHIGIC; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DNIDONCOAEE*>* GEEHPGPNGDF; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MKHPAECGJBE*>* IOKOACOMPEL; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::HKHEDJKACGK*>*>* FGLNNOAGAEA; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CKNMJMCFPME*>* JHFAECBNGLE; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BIMCEEABCEI*>* KBKBMLAHHIK; // 0x68
		::System::Collections::Generic::List_1<::CKNMJMCFPME*>* AOENOGCFDKB; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::DNBDHGNLIPK*>* OAPAOFBDNCG; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FINMGDLKNMH*>* HIOPHALPLJD; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KFHKMDOPMFC*>* LIKPBLAHEBH; // 0x88
		::System::Collections::Generic::List_1<::DNIDONCOAEE*>* OJAJEDEKBAA; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPILPBMEEC_CTOR_OFFSET))(this);
		}

		::IAKMFLMFALK* CKBAHJHPLIG(::System::UInt32 a1)
		{
			return ((::IAKMFLMFALK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_CKBAHJHPLIG_OFFSET))(this, a1);
		}

		::DNBDHGNLIPK* JDBHCENPLPJ(::RPG::GameCore::B51RacingStatType a1)
		{
			return ((::DNBDHGNLIPK*(*)(::PVOID, ::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + GDPILPBMEEC_JDBHCENPLPJ_OFFSET))(this, a1);
		}

		::MINFEAKALGE* HBECOCLIENB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::MINFEAKALGE*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_HBECOCLIENB_OFFSET))(this, a1, a2);
		}

		::KIIGKJKMCHP* OABCLLKHAFK(::System::UInt32 a1)
		{
			return ((::KIIGKJKMCHP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_OABCLLKHAFK_OFFSET))(this, a1);
		}

		::CKNMJMCFPME* DGCGKPBMPMJ(::System::UInt32 a1)
		{
			return ((::CKNMJMCFPME*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_DGCGKPBMPMJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DNBDHGNLIPK*>* LCPEJNKPLFH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DNBDHGNLIPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPILPBMEEC_LCPEJNKPLFH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HKHEDJKACGK*>* GNGEEDECFEN(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HKHEDJKACGK*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_GNGEEDECFEN_OFFSET))(this, a1);
		}

		::KFHKMDOPMFC* OFFCNODLKGO(::System::UInt32 a1)
		{
			return ((::KFHKMDOPMFC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_OFFCNODLKGO_OFFSET))(this, a1);
		}

		::DNIDONCOAEE* CPKBCDHBKFL(::System::UInt32 a1)
		{
			return ((::DNIDONCOAEE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_CPKBCDHBKFL_OFFSET))(this, a1);
		}

		::FINMGDLKNMH* IGDGJAAPBLJ(::System::UInt32 a1)
		{
			return ((::FINMGDLKNMH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_IGDGJAAPBLJ_OFFSET))(this, a1);
		}

		::BIMCEEABCEI* OKHFKJHNMDB(::System::UInt32 a1)
		{
			return ((::BIMCEEABCEI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_OKHFKJHNMDB_OFFSET))(this, a1);
		}

		::AEANOGAFBGK* OBBFPCOEAOG(::System::UInt32 a1)
		{
			return ((::AEANOGAFBGK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_OBBFPCOEAOG_OFFSET))(this, a1);
		}

		::CKBIKDBNKEO* CFIJOEAJEMP(::System::UInt32 a1)
		{
			return ((::CKBIKDBNKEO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_CFIJOEAJEMP_OFFSET))(this, a1);
		}

		::MKHPAECGJBE* GHBKPFFDEOC(::System::UInt32 a1)
		{
			return ((::MKHPAECGJBE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDPILPBMEEC_GHBKPFFDEOC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>* AKBNCLMKGMJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPILPBMEEC_AKBNCLMKGMJ_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CKNMJMCFPME*>* EAHLNBKHBFG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CKNMJMCFPME*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPILPBMEEC_EAHLNBKHBFG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DLJPDKIMHAC*>* IGDACHHDKKH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DLJPDKIMHAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPILPBMEEC_IGDACHHDKKH_OFFSET))(this);
		}

	};
