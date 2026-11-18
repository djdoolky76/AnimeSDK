#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/LIADCALCDAC_CKDAAOINJFE.h"
#include "unitysdk/LIADCALCDAC_FELPMGALJEN.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class KPACKGEBECC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T> class KCMIFNGABDC_1;

#define LIADCALCDAC_AJIGDGCMIMO_OFFSET UNITYSDK_OFFSET(0x184F9970)
#define LIADCALCDAC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x184F90A0)
#define LIADCALCDAC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x184F8EA0)
#define LIADCALCDAC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x184F9C70)
#define LIADCALCDAC_HCDMIPBKMIK_OFFSET UNITYSDK_OFFSET(0x184F9D00)
#define LIADCALCDAC_HLDHCPPDOKM_OFFSET UNITYSDK_OFFSET(0x184F9770)
#define LIADCALCDAC_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x184F9BA0)
#define LIADCALCDAC_JCKNMFPLECC_OFFSET UNITYSDK_OFFSET(0x184F9DC0)
#define LIADCALCDAC_LNHJFJPGBDI_OFFSET UNITYSDK_OFFSET(0x184F94D0)
#define LIADCALCDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x184F99D0)

inline static constexpr unsigned int LIADCALCDAC_TypeDefinitionIndex = 91493;

class LIADCALCDAC : public ::CGJEMKCKIJG
{
public:
	::LGCNEDCMPKM DAOCMHGPJAN; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x48
	::CPABOPKIGAL* EGCCIODCJIA; // 0x50
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* ENAKNKDHNAL; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LIADCALCDAC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::String* AJIGDGCMIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_AJIGDGCMIMO_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF, ::System::Boolean HIHPCLJCHKK, ::System::Boolean MEHMAIDOBKA)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LIADCALCDAC_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF, HIHPCLJCHKK, MEHMAIDOBKA);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADCALCDAC_GDEOPIBNOIN_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid HCDMIPBKMIK(::LGCNEDCMPKM BKBGPKNGNMF, ::System::Threading::CancellationTokenSource* MJKDCNCONFK)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::LGCNEDCMPKM, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + LIADCALCDAC_HCDMIPBKMIK_OFFSET))(this, BKBGPKNGNMF, MJKDCNCONFK);
	}

	::System::Boolean LNHJFJPGBDI(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LIADCALCDAC_LNHJFJPGBDI_OFFSET))(this, BKBGPKNGNMF);
	}

	::LIADCALCDAC_CKDAAOINJFE JCKNMFPLECC(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::LIADCALCDAC_CKDAAOINJFE(*)(::PVOID, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + LIADCALCDAC_JCKNMFPLECC_OFFSET))(this, EPFOEIJDMBM);
	}

	::LIADCALCDAC_FELPMGALJEN HLDHCPPDOKM(::LGCNEDCMPKM& BKBGPKNGNMF, ::KPACKGEBECC*& EPFOEIJDMBM, ::LIADCALCDAC_CKDAAOINJFE& EEMOPKCLEGM)
	{
		return ((::LIADCALCDAC_FELPMGALJEN(*)(::PVOID, ::LGCNEDCMPKM&, ::KPACKGEBECC*&, ::LIADCALCDAC_CKDAAOINJFE&))((::PBYTE)hIl2Cpp + LIADCALCDAC_HLDHCPPDOKM_OFFSET))(this, BKBGPKNGNMF, EPFOEIJDMBM, EEMOPKCLEGM);
	}
};
