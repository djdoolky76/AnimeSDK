#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOEFLPEICBM.h"
#include "unitysdk/CMBIJHEIJPD.h"

class CKOLCOGDGEO;
class FEGNLFMDNPB;
class HGAJKHIMKJP;
class OLHCEJBBEJF;
namespace MoleMole { class UIHollowCardOptionsBasePopWindowController; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDPACOHFFAC_EJCKILOIBKE_OFFSET UNITYSDK_OFFSET(0x157E1170)
#define KDPACOHFFAC_FEHMDNJBLOH_OFFSET UNITYSDK_OFFSET(0x157E1340)
#define KDPACOHFFAC_IOMKOJJDIMF_OFFSET UNITYSDK_OFFSET(0x157E1AA0)
#define KDPACOHFFAC_JHCOAIHFIBP_OFFSET UNITYSDK_OFFSET(0x157E1A00)
#define KDPACOHFFAC_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x157E0FB0)
#define KDPACOHFFAC_PAOMNBCEFPJ_OFFSET UNITYSDK_OFFSET(0x157E1560)
#define KDPACOHFFAC_PIONCLBHHFJ_OFFSET UNITYSDK_OFFSET(0x157E18C0)
#define KDPACOHFFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x157E0F50)

inline static constexpr unsigned int KDPACOHFFAC_TypeDefinitionIndex = 40314;

class KDPACOHFFAC : public ::AOEFLPEICBM
{
public:
	// static const ::System::String* CBLLCKNPLMF; // 0x0
	::CKOLCOGDGEO* HOPCLNFJCOD; // 0x20
	::MoleMole::UIHollowCardOptionsBasePopWindowController* JOLDOMEIKEF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NMJLJMHBHAJ; // 0x30
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GHKAJFBIFPE; // 0x38
	::CMBIJHEIJPD CIBDHMPILIA; // 0x40

	::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* OOBOMJFEMEA, ::CMBIJHEIJPD ONGGIDMFHHA, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* CPNFEPCDLKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::CMBIJHEIJPD, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + KDPACOHFFAC__CTOR_OFFSET))(this, OOBOMJFEMEA, ONGGIDMFHHA, CPNFEPCDLKK);
	}

	::System::Void ODEEJCPBCMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPACOHFFAC_ODEEJCPBCMM_OFFSET))(this);
	}

	::System::Void FEHMDNJBLOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPACOHFFAC_FEHMDNJBLOH_OFFSET))(this);
	}

	::MoleMole::UIHollowCardOptionsDialogContext* EJCKILOIBKE()
	{
		return ((::MoleMole::UIHollowCardOptionsDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPACOHFFAC_EJCKILOIBKE_OFFSET))(this);
	}

	::System::Void PIONCLBHHFJ(::FEGNLFMDNPB* GCKPCMEMKMM, ::CKOLCOGDGEO* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::FEGNLFMDNPB*, ::CKOLCOGDGEO*))((::PBYTE)hIl2Cpp + KDPACOHFFAC_PIONCLBHHFJ_OFFSET))(this, GCKPCMEMKMM, IGAAKDOIPNN);
	}

	::System::Boolean JHCOAIHFIBP(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDPACOHFFAC_JHCOAIHFIBP_OFFSET))(this, OIKFFGKDHME);
	}

	::OLHCEJBBEJF* PAOMNBCEFPJ(::HGAJKHIMKJP* IPMMCGDMODG)
	{
		return ((::OLHCEJBBEJF*(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + KDPACOHFFAC_PAOMNBCEFPJ_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void IOMKOJJDIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPACOHFFAC_IOMKOJJDIMF_OFFSET))(this);
	}
};
