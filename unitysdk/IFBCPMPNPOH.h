#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IFBCPMPNPOH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15EB19A0)
#define IFBCPMPNPOH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15EB1790)
#define IFBCPMPNPOH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15EB1F90)
#define IFBCPMPNPOH__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB1DF0)

inline static constexpr unsigned int IFBCPMPNPOH_TypeDefinitionIndex = 64476;

class IFBCPMPNPOH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* EAPGAKAGKPF; // 0x28
	::KCMIFNGABDC_1<::System::String*>* IOENGAEMCJL; // 0x30
	::KCMIFNGABDC_1<::System::String*>* BDICGABONNI; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* FOKDHCGFCLF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCPMPNPOH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCPMPNPOH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IFBCPMPNPOH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCPMPNPOH_GDEOPIBNOIN_OFFSET))(this);
	}
};
