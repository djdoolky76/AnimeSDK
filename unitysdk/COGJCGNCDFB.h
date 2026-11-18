#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define COGJCGNCDFB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A22D00)
#define COGJCGNCDFB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A229E0)
#define COGJCGNCDFB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A234A0)
#define COGJCGNCDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A23250)

inline static constexpr unsigned int COGJCGNCDFB_TypeDefinitionIndex = 59700;

class COGJCGNCDFB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* KDBCPJCCGAP; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* FDPMDEJANJH; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* ECKEBOKFNMK; // 0x38
	::KCMIFNGABDC_1<::System::Single>* PACOFJBOECN; // 0x40
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ADABBEEDEHP; // 0x48
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICFDMNGFAMH; // 0x50
	::KCMIFNGABDC_1<::System::Single>* CNFJGNMFFJM; // 0x58
	::KCMIFNGABDC_1<::System::Single>* EOFCPNFFLON; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGJCGNCDFB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGJCGNCDFB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + COGJCGNCDFB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGJCGNCDFB_GDEOPIBNOIN_OFFSET))(this);
	}
};
