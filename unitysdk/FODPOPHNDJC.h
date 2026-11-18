#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOEFLPEICBM.h"
#include "unitysdk/KAPINBBMLDJ.h"

class CAOJHOPPEIL;
class CKOLCOGDGEO;
class FEGNLFMDNPB;
class HGAJKHIMKJP;
namespace MoleMole { class UIHollowCardOptionsBasePopWindowController; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FODPOPHNDJC_EJCKILOIBKE_OFFSET UNITYSDK_OFFSET(0x179BF6B0)
#define FODPOPHNDJC_FEHMDNJBLOH_OFFSET UNITYSDK_OFFSET(0x179BF9A0)
#define FODPOPHNDJC_IOMKOJJDIMF_OFFSET UNITYSDK_OFFSET(0x179C03E0)
#define FODPOPHNDJC_JHCOAIHFIBP_OFFSET UNITYSDK_OFFSET(0x179BFBC0)
#define FODPOPHNDJC_KABHABICDLN_OFFSET UNITYSDK_OFFSET(0x179BFC60)
#define FODPOPHNDJC_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x179BF4F0)
#define FODPOPHNDJC_PIONCLBHHFJ_OFFSET UNITYSDK_OFFSET(0x179C02A0)
#define FODPOPHNDJC__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF3E0)

inline static constexpr unsigned int FODPOPHNDJC_TypeDefinitionIndex = 66707;

class FODPOPHNDJC : public ::AOEFLPEICBM
{
public:
	// static const ::System::String* CBLLCKNPLMF; // 0x0
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* CNEPHGGKPHF; // 0x20
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* KJFJHHHAIGO; // 0x28
	::MoleMole::UIHollowCardOptionsBasePopWindowController* JOLDOMEIKEF; // 0x30
	::CKOLCOGDGEO* HOPCLNFJCOD; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NMJLJMHBHAJ; // 0x40
	::KAPINBBMLDJ BGKAECFKGDD; // 0x48

	::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* MDEPELBLBPE, ::KAPINBBMLDJ KMMEPIAHNLA, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* CPNFEPCDLKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::KAPINBBMLDJ, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + FODPOPHNDJC__CTOR_OFFSET))(this, MDEPELBLBPE, KMMEPIAHNLA, CPNFEPCDLKK);
	}

	::System::Void ODEEJCPBCMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODPOPHNDJC_ODEEJCPBCMM_OFFSET))(this);
	}

	::System::Void FEHMDNJBLOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODPOPHNDJC_FEHMDNJBLOH_OFFSET))(this);
	}

	::MoleMole::UIHollowCardOptionsDialogContext* EJCKILOIBKE()
	{
		return ((::MoleMole::UIHollowCardOptionsDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODPOPHNDJC_EJCKILOIBKE_OFFSET))(this);
	}

	::System::Boolean JHCOAIHFIBP(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FODPOPHNDJC_JHCOAIHFIBP_OFFSET))(this, OIKFFGKDHME);
	}

	::System::Void PIONCLBHHFJ(::FEGNLFMDNPB* GCKPCMEMKMM, ::CKOLCOGDGEO* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::FEGNLFMDNPB*, ::CKOLCOGDGEO*))((::PBYTE)hIl2Cpp + FODPOPHNDJC_PIONCLBHHFJ_OFFSET))(this, GCKPCMEMKMM, IGAAKDOIPNN);
	}

	::System::Void IOMKOJJDIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODPOPHNDJC_IOMKOJJDIMF_OFFSET))(this);
	}

	::CAOJHOPPEIL* KABHABICDLN(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* MDEPELBLBPE)
	{
		return ((::CAOJHOPPEIL*(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + FODPOPHNDJC_KABHABICDLN_OFFSET))(this, MDEPELBLBPE);
	}
};
