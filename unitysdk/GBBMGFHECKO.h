#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GBBMGFHECKO_IAIOLHOJGKK.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"

class KPACKGEBECC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define GBBMGFHECKO_AJIGDGCMIMO_OFFSET UNITYSDK_OFFSET(0x116DC5B0)
#define GBBMGFHECKO_DPBEOJHDBBN_OFFSET UNITYSDK_OFFSET(0x116DC390)
#define GBBMGFHECKO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x116DC010)
#define GBBMGFHECKO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116DBF30)
#define GBBMGFHECKO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116DC770)
#define GBBMGFHECKO_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x116DC780)
#define GBBMGFHECKO_JCKNMFPLECC_OFFSET UNITYSDK_OFFSET(0x116DC700)
#define GBBMGFHECKO__CTOR_OFFSET UNITYSDK_OFFSET(0x116DC610)

inline static constexpr unsigned int GBBMGFHECKO_TypeDefinitionIndex = 39016;

class GBBMGFHECKO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::Config::Spline_WayPoint>* PKIFJJEDBPB; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30
	::LGCNEDCMPKM DAOCMHGPJAN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GBBMGFHECKO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::String* AJIGDGCMIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_AJIGDGCMIMO_OFFSET))(this);
	}

	::GBBMGFHECKO_IAIOLHOJGKK JCKNMFPLECC(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::GBBMGFHECKO_IAIOLHOJGKK(*)(::PVOID, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + GBBMGFHECKO_JCKNMFPLECC_OFFSET))(this, EPFOEIJDMBM);
	}

	::System::Void DPBEOJHDBBN(::KPACKGEBECC* EPFOEIJDMBM, ::System::Int32 ABHBKFJKINO, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KPACKGEBECC*, ::System::Int32, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GBBMGFHECKO_DPBEOJHDBBN_OFFSET))(this, EPFOEIJDMBM, ABHBKFJKINO, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBMGFHECKO_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF, ::System::Boolean HIHPCLJCHKK, ::System::Boolean MEHMAIDOBKA)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GBBMGFHECKO_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF, HIHPCLJCHKK, MEHMAIDOBKA);
	}
};
