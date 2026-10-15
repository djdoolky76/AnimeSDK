#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
#include "unitysdk/System/Object.h"
class AMJIONEOLPP;
class BAFCAJNDAOJ;
class CCPEGENJFIH;
class FIMAFJNMOGM;
class JOBGHLBLKME;
class KCNGFCAMLLN;
class KLGICPNPKIC;
class KLICCGLCDMG;
class LIEJOHNIOKB;
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFDILAAPBKE_CAEIDOODALD_1_OFFSET UNITYSDK_OFFSET(0xB38CC00)
#define KFDILAAPBKE_CAEIDOODALD_OFFSET UNITYSDK_OFFSET(0xB38B2D0)
#define KFDILAAPBKE_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0xB38DCA0)
#define KFDILAAPBKE_CJPCKBCKPMM_OFFSET UNITYSDK_OFFSET(0xB38B8D0)
#define KFDILAAPBKE_CKJAPEJDHLN_OFFSET UNITYSDK_OFFSET(0xB38B460)
#define KFDILAAPBKE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB38A430)
#define KFDILAAPBKE_CLGAKHEHNID_OFFSET UNITYSDK_OFFSET(0xB38D040)
#define KFDILAAPBKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB38E030)
#define KFDILAAPBKE_EGKIHFIIBLB_OFFSET UNITYSDK_OFFSET(0xB38B0F0)
#define KFDILAAPBKE_GJMEPLMOIIM_OFFSET UNITYSDK_OFFSET(0xB38C5B0)
#define KFDILAAPBKE_IKNAJFLMCDL_OFFSET UNITYSDK_OFFSET(0xB38B010)
#define KFDILAAPBKE_JBPCIFOPFPO_OFFSET UNITYSDK_OFFSET(0xB38DEF0)
#define KFDILAAPBKE_JEDMILNHDKJ_OFFSET UNITYSDK_OFFSET(0xB38A810)
#define KFDILAAPBKE_KIEFLBPHEKM_1_OFFSET UNITYSDK_OFFSET(0xB38B380)
#define KFDILAAPBKE_KIEFLBPHEKM_OFFSET UNITYSDK_OFFSET(0xB38C860)
#define KFDILAAPBKE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB38A790)
#define KFDILAAPBKE_LONBBJAOGJK_OFFSET UNITYSDK_OFFSET(0xB38AF70)
#define KFDILAAPBKE_MNHBBLPGFPE_OFFSET UNITYSDK_OFFSET(0xB38DE70)
#define KFDILAAPBKE_NPOMMKMJAIH_OFFSET UNITYSDK_OFFSET(0xB38C8B0)
#define KFDILAAPBKE_ONALLOC_OFFSET UNITYSDK_OFFSET(0xB38A480)
#define KFDILAAPBKE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xB38A5F0)
#define KFDILAAPBKE_OPEBEIKEMBC_OFFSET UNITYSDK_OFFSET(0xB38DD20)
#define KFDILAAPBKE_PBNJMOCNAGN_OFFSET UNITYSDK_OFFSET(0xB38D700)
#define KFDILAAPBKE_PIHMENNKNGO_OFFSET UNITYSDK_OFFSET(0xB38CC50)

inline static constexpr unsigned int KFDILAAPBKE_TypeDefinitionIndex = 73408;

	class KFDILAAPBKE : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::KCNGFCAMLLN*>* GFMFACANHMN; // 0x10
		::CCPEGENJFIH* LIOJKFIGGIJ; // 0x18
		::CCPEGENJFIH* PGABFCFNCOA; // 0x20
		::KLICCGLCDMG* CMGJBICMMPF; // 0x28
		::CCPEGENJFIH* NNOOKBHDKEO; // 0x30
		::System::Int32 JMIHKBJPIHL; // 0x38
		::System::Int32 MDEFBBKKJEH; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_ONRECYCLE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::KLICCGLCDMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLICCGLCDMG*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::LIEJOHNIOKB* JEDMILNHDKJ()
		{
			return ((::LIEJOHNIOKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_JEDMILNHDKJ_OFFSET))(this);
		}

		::System::Void EGKIHFIIBLB(::System::Collections::Generic::List_1<::KLGICPNPKIC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KLGICPNPKIC*>*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_EGKIHFIIBLB_OFFSET))(this, a1);
		}

		::System::Boolean IKNAJFLMCDL(::FIMAFJNMOGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIMAFJNMOGM*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_IKNAJFLMCDL_OFFSET))(this, a1);
		}

		::JOBGHLBLKME* CKJAPEJDHLN()
		{
			return ((::JOBGHLBLKME*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CKJAPEJDHLN_OFFSET))(this);
		}

		::System::Boolean CJPCKBCKPMM(::AMJIONEOLPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMJIONEOLPP*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CJPCKBCKPMM_OFFSET))(this, a1);
		}

		::System::Boolean GJMEPLMOIIM(::BAFCAJNDAOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_GJMEPLMOIIM_OFFSET))(this, a1);
		}

		::System::Boolean PIHMENNKNGO(::BAFCAJNDAOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_PIHMENNKNGO_OFFSET))(this, a1);
		}

		::System::Boolean CLGAKHEHNID(::BAFCAJNDAOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CLGAKHEHNID_OFFSET))(this, a1);
		}

		::System::Boolean PBNJMOCNAGN(::BAFCAJNDAOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + KFDILAAPBKE_PBNJMOCNAGN_OFFSET))(this, a1);
		}

		::System::Int32 NPOMMKMJAIH(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFDILAAPBKE_NPOMMKMJAIH_OFFSET))(this, a1);
		}

		::KCNGFCAMLLN* CAEIDOODALD()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CAEIDOODALD_OFFSET))(this);
		}

		::System::Void CAEIDOODALD_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CAEIDOODALD_1_OFFSET))(this, a1);
		}

		::KCNGFCAMLLN* OPEBEIKEMBC(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1)
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind))((::PBYTE)hIl2Cpp + KFDILAAPBKE_OPEBEIKEMBC_OFFSET))(this, a1);
		}

		::KCNGFCAMLLN* KIEFLBPHEKM()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_KIEFLBPHEKM_OFFSET))(this);
		}

		::KCNGFCAMLLN* KIEFLBPHEKM_1(::System::Int32 a1)
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFDILAAPBKE_KIEFLBPHEKM_1_OFFSET))(this, a1);
		}

		::System::Void MNHBBLPGFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_MNHBBLPGFPE_OFFSET))(this);
		}

		::System::Void CDEBBIONEDG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFDILAAPBKE_CDEBBIONEDG_OFFSET))(this, a1);
		}

		::KCNGFCAMLLN* LONBBJAOGJK()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_LONBBJAOGJK_OFFSET))(this);
		}

		::System::Void JBPCIFOPFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDILAAPBKE_JBPCIFOPFPO_OFFSET))(this);
		}

	};
