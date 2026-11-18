#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class DBPFPKGCLOM;
class JACONGOPMFI;
class KHBFAANLINO;
class NOFEDBPBAOG;
class OPJADOMHFLI;
class PBNHEHNNCNG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define GEMNJHFCHPI_AOCEAPNKBKI_OFFSET UNITYSDK_OFFSET(0x189FA5B0)
#define GEMNJHFCHPI_BAMDJFMEOBK_OFFSET UNITYSDK_OFFSET(0x189FA440)
#define GEMNJHFCHPI_BCGIJLJEPNP_OFFSET UNITYSDK_OFFSET(0x189FAAE0)
#define GEMNJHFCHPI_DLOEOKAJHCN_OFFSET UNITYSDK_OFFSET(0x189FA430)
#define GEMNJHFCHPI_ECGBIDFNOPJ_OFFSET UNITYSDK_OFFSET(0x189FA4A0)
#define GEMNJHFCHPI_EHGFJOKFHGO_OFFSET UNITYSDK_OFFSET(0x189FA590)
#define GEMNJHFCHPI_IGKMHDGKEBH_OFFSET UNITYSDK_OFFSET(0x189FB1D0)
#define GEMNJHFCHPI_IKOOPMLBEBJ_OFFSET UNITYSDK_OFFSET(0x189FB1C0)
#define GEMNJHFCHPI_JHLMLIPHDME_OFFSET UNITYSDK_OFFSET(0x189FA580)
#define GEMNJHFCHPI_JOICCKIPLKN_OFFSET UNITYSDK_OFFSET(0x189F9ED0)
#define GEMNJHFCHPI_KLEKCKHOCJE_OFFSET UNITYSDK_OFFSET(0x189FA750)
#define GEMNJHFCHPI_LNLBJALICDA_OFFSET UNITYSDK_OFFSET(0x189FA990)
#define GEMNJHFCHPI_MOCIMCFAIGH_OFFSET UNITYSDK_OFFSET(0x189FB070)
#define GEMNJHFCHPI_NNLPBJDCCBH_OFFSET UNITYSDK_OFFSET(0x189FB010)
#define GEMNJHFCHPI__CTOR_OFFSET UNITYSDK_OFFSET(0x189F9DB0)

inline static constexpr unsigned int GEMNJHFCHPI_TypeDefinitionIndex = 65025;

class GEMNJHFCHPI : public ::JGELKBLKFHE
{
public:
	::OPJADOMHFLI* JLHIDGAHDEM; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* AFAADPJPDMA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DBPFPKGCLOM*>* AJEPCKGADCM; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHBFAANLINO*>* JDBLBPLDMNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI__CTOR_OFFSET))(this);
	}

	::System::Void JOICCKIPLKN(::NOFEDBPBAOG* GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::NOFEDBPBAOG*))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_JOICCKIPLKN_OFFSET))(this, GDINHGLCODO);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* DLOEOKAJHCN()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_DLOEOKAJHCN_OFFSET))(this);
	}

	::System::Boolean BAMDJFMEOBK(::System::Int32 DBNJDDHKGJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_BAMDJFMEOBK_OFFSET))(this, DBNJDDHKGJC);
	}

	::KHBFAANLINO* ECGBIDFNOPJ(::System::Int32 DBNJDDHKGJC)
	{
		return ((::KHBFAANLINO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_ECGBIDFNOPJ_OFFSET))(this, DBNJDDHKGJC);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DBPFPKGCLOM*>* JHLMLIPHDME()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::DBPFPKGCLOM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_JHLMLIPHDME_OFFSET))(this);
	}

	::System::Int32 EHGFJOKFHGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_EHGFJOKFHGO_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> AOCEAPNKBKI(::System::Int32 BCIGBPGPIPM, ::System::Int32 MBCLEKLCOJN, ::System::Boolean LDNKDODOPKC, ::System::Int32 KHHNPABHKGO, ::System::Int32 JNIANLBFJCI, ::System::Int32 PIOCHDLPAEH, ::System::Int32 PKGODCFJDDL, ::System::Threading::CancellationToken MJKDCNCONFK, ::System::Collections::Generic::List_1<::System::Int32>* CJCNKFOLMLH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_AOCEAPNKBKI_OFFSET))(this, BCIGBPGPIPM, MBCLEKLCOJN, LDNKDODOPKC, KHHNPABHKGO, JNIANLBFJCI, PIOCHDLPAEH, PKGODCFJDDL, MJKDCNCONFK, CJCNKFOLMLH);
	}

	::System::Boolean KLEKCKHOCJE(::System::Int32 DBNJDDHKGJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_KLEKCKHOCJE_OFFSET))(this, DBNJDDHKGJC);
	}

	::System::Void LNLBJALICDA(::System::Int32 DBNJDDHKGJC, ::System::Action* CAAFEGLOALC, ::System::Action* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_LNLBJALICDA_OFFSET))(this, DBNJDDHKGJC, CAAFEGLOALC, BLLNHDIDKPA);
	}

	::System::Void BCGIJLJEPNP(::PBNHEHNNCNG* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::PBNHEHNNCNG*))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_BCGIJLJEPNP_OFFSET))(this, EIFONLCJOPG);
	}

	::DFDEIDBBGHG_1<::JACONGOPMFI*>* NNLPBJDCCBH()
	{
		return ((::DFDEIDBBGHG_1<::JACONGOPMFI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_NNLPBJDCCBH_OFFSET))(this);
	}

	::System::Void MOCIMCFAIGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_MOCIMCFAIGH_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHBFAANLINO*>* IKOOPMLBEBJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHBFAANLINO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_IKOOPMLBEBJ_OFFSET))(this);
	}

	::System::Int32 IGKMHDGKEBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_IGKMHDGKEBH_OFFSET))(this);
	}
};
