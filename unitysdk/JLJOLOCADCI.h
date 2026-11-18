#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MCEOPOKPJCD.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/NIKEPBMMCAM.h"

class NOHGMPIMCEF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLJOLOCADCI_BICGFMCGDAO_OFFSET UNITYSDK_OFFSET(0x13096850)
#define JLJOLOCADCI_EBGFGILCHGC_OFFSET UNITYSDK_OFFSET(0x13096160)
#define JLJOLOCADCI_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x130964E0)
#define JLJOLOCADCI_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x130968E0)
#define JLJOLOCADCI_JGOGNKBOBCN_OFFSET UNITYSDK_OFFSET(0x13096340)
#define JLJOLOCADCI_JJEOFGEFCDN_OFFSET UNITYSDK_OFFSET(0x13096640)
#define JLJOLOCADCI_JNGOCNFCCFE_OFFSET UNITYSDK_OFFSET(0x130966D0)
#define JLJOLOCADCI_LGDPPJNCPNP_OFFSET UNITYSDK_OFFSET(0x130961C0)
#define JLJOLOCADCI_NPIJLCABNIE_OFFSET UNITYSDK_OFFSET(0x13096970)
#define JLJOLOCADCI_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0x13096170)
#define JLJOLOCADCI__CTOR_OFFSET UNITYSDK_OFFSET(0x13096630)

inline static constexpr unsigned int JLJOLOCADCI_TypeDefinitionIndex = 64043;

class JLJOLOCADCI : public ::MCEOPOKPJCD
{
public:
	::System::Collections::Generic::List_1<::System::Single>* KDEFBFFHIIM; // 0x18
	::NOHGMPIMCEF* FNMCDIFHEEM; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::CinemaCameraPosEnum>* OPOEDCMJEGP; // 0x28
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x30
	::System::Single IBFKMNNDCIP; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI__CTOR_OFFSET))(this);
	}

	::NIKEPBMMCAM EBGFGILCHGC()
	{
		return ((::NIKEPBMMCAM(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_EBGFGILCHGC_OFFSET))(this);
	}

	::System::Void PAFFHKDNPKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_PAFFHKDNPKF_OFFSET))(this);
	}

	::System::Void JGOGNKBOBCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_JGOGNKBOBCN_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void JJEOFGEFCDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_JJEOFGEFCDN_OFFSET))(this);
	}

	::System::Void JNGOCNFCCFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_JNGOCNFCCFE_OFFSET))(this);
	}

	::System::Void BICGFMCGDAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_BICGFMCGDAO_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void LGDPPJNCPNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOLOCADCI_LGDPPJNCPNP_OFFSET))(this);
	}

	::System::Void NPIJLCABNIE(::System::Collections::Generic::List_1<::System::Int32>* DPMCIDOPNBN, ::System::Collections::Generic::List_1<::System::Single>* KDEFBFFHIIM, ::System::Single IBFKMNNDCIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + JLJOLOCADCI_NPIJLCABNIE_OFFSET))(this, DPMCIDOPNBN, KDEFBFFHIIM, IBFKMNNDCIP);
	}
};
