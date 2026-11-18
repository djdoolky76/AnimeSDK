#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MDEOJENKPJL_AIGKALICEHC.h"
#include "unitysdk/MDEOJENKPJL_BJAGNGDGNDE.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class KPACKGEBECC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T> class KCMIFNGABDC_1;

#define MDEOJENKPJL_AJIGDGCMIMO_OFFSET UNITYSDK_OFFSET(0x1569EB60)
#define MDEOJENKPJL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1569E500)
#define MDEOJENKPJL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1569E420)
#define MDEOJENKPJL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1569ECB0)
#define MDEOJENKPJL_HCDMIPBKMIK_OFFSET UNITYSDK_OFFSET(0x1569EDE0)
#define MDEOJENKPJL_HLDHCPPDOKM_OFFSET UNITYSDK_OFFSET(0x1569E960)
#define MDEOJENKPJL_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x1569ECC0)
#define MDEOJENKPJL_JCKNMFPLECC_OFFSET UNITYSDK_OFFSET(0x1569ED70)
#define MDEOJENKPJL_LNHJFJPGBDI_OFFSET UNITYSDK_OFFSET(0x1569E6B0)
#define MDEOJENKPJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1569EBC0)

inline static constexpr unsigned int MDEOJENKPJL_TypeDefinitionIndex = 89452;

class MDEOJENKPJL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::LGCNEDCMPKM DAOCMHGPJAN; // 0x30
	::KCMIFNGABDC_1<::MoleMole::Config::Spline_WayPoint>* PKIFJJEDBPB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEOJENKPJL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEOJENKPJL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDEOJENKPJL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::String* AJIGDGCMIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEOJENKPJL_AJIGDGCMIMO_OFFSET))(this);
	}

	::System::Boolean LNHJFJPGBDI(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDEOJENKPJL_LNHJFJPGBDI_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEOJENKPJL_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + MDEOJENKPJL_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF);
	}

	::MDEOJENKPJL_AIGKALICEHC JCKNMFPLECC(::KPACKGEBECC* EPFOEIJDMBM)
	{
		return ((::MDEOJENKPJL_AIGKALICEHC(*)(::PVOID, ::KPACKGEBECC*))((::PBYTE)hIl2Cpp + MDEOJENKPJL_JCKNMFPLECC_OFFSET))(this, EPFOEIJDMBM);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid HCDMIPBKMIK(::LGCNEDCMPKM BKBGPKNGNMF, ::System::Threading::CancellationTokenSource* MJKDCNCONFK)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::LGCNEDCMPKM, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + MDEOJENKPJL_HCDMIPBKMIK_OFFSET))(this, BKBGPKNGNMF, MJKDCNCONFK);
	}

	::MDEOJENKPJL_BJAGNGDGNDE HLDHCPPDOKM(::LGCNEDCMPKM& BKBGPKNGNMF, ::KPACKGEBECC*& EPFOEIJDMBM, ::MDEOJENKPJL_AIGKALICEHC& EEMOPKCLEGM)
	{
		return ((::MDEOJENKPJL_BJAGNGDGNDE(*)(::PVOID, ::LGCNEDCMPKM&, ::KPACKGEBECC*&, ::MDEOJENKPJL_AIGKALICEHC&))((::PBYTE)hIl2Cpp + MDEOJENKPJL_HLDHCPPDOKM_OFFSET))(this, BKBGPKNGNMF, EPFOEIJDMBM, EEMOPKCLEGM);
	}
};
