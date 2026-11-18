#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MCEOPOKPJCD.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/NIKEPBMMCAM.h"

class NOHGMPIMCEF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKOGIFFPLGB_BICGFMCGDAO_OFFSET UNITYSDK_OFFSET(0xF7A7820)
#define BKOGIFFPLGB_EBGFGILCHGC_OFFSET UNITYSDK_OFFSET(0xF7A6FC0)
#define BKOGIFFPLGB_GNMJKNHCDJH_OFFSET UNITYSDK_OFFSET(0xF7A7020)
#define BKOGIFFPLGB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xF7A7350)
#define BKOGIFFPLGB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xF7A78B0)
#define BKOGIFFPLGB_JGOGNKBOBCN_OFFSET UNITYSDK_OFFSET(0xF7A71B0)
#define BKOGIFFPLGB_JJEOFGEFCDN_OFFSET UNITYSDK_OFFSET(0xF7A7610)
#define BKOGIFFPLGB_JNGOCNFCCFE_OFFSET UNITYSDK_OFFSET(0xF7A76A0)
#define BKOGIFFPLGB_NPIJLCABNIE_OFFSET UNITYSDK_OFFSET(0xF7A74B0)
#define BKOGIFFPLGB_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0xF7A6FD0)
#define BKOGIFFPLGB__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A74A0)

inline static constexpr unsigned int BKOGIFFPLGB_TypeDefinitionIndex = 91306;

class BKOGIFFPLGB : public ::MCEOPOKPJCD
{
public:
	::System::Collections::Generic::List_1<::MoleMole::CinemaCameraPosEnum>* OPOEDCMJEGP; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* KDEFBFFHIIM; // 0x20
	::NOHGMPIMCEF* FNMCDIFHEEM; // 0x28
	::System::Single IBFKMNNDCIP; // 0x30
	::System::Int32 OJOEBEBNFCJ; // 0x34
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB__CTOR_OFFSET))(this);
	}

	::NIKEPBMMCAM EBGFGILCHGC()
	{
		return ((::NIKEPBMMCAM(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_EBGFGILCHGC_OFFSET))(this);
	}

	::System::Void PAFFHKDNPKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_PAFFHKDNPKF_OFFSET))(this);
	}

	::System::Void JGOGNKBOBCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_JGOGNKBOBCN_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void NPIJLCABNIE(::System::Collections::Generic::List_1<::System::Int32>* DPMCIDOPNBN, ::System::Collections::Generic::List_1<::System::Single>* KDEFBFFHIIM, ::System::Single IBFKMNNDCIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_NPIJLCABNIE_OFFSET))(this, DPMCIDOPNBN, KDEFBFFHIIM, IBFKMNNDCIP);
	}

	::System::Void JJEOFGEFCDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_JJEOFGEFCDN_OFFSET))(this);
	}

	::System::Void JNGOCNFCCFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_JNGOCNFCCFE_OFFSET))(this);
	}

	::System::Void BICGFMCGDAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_BICGFMCGDAO_OFFSET))(this);
	}

	::System::Void GNMJKNHCDJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_GNMJKNHCDJH_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOGIFFPLGB_IFHNMAGGFAE_OFFSET))(this);
	}
};
