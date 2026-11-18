#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define JGGKEPIHABD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18736AB0)
#define JGGKEPIHABD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18736960)
#define JGGKEPIHABD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18736EB0)
#define JGGKEPIHABD__CTOR_OFFSET UNITYSDK_OFFSET(0x18736D60)

inline static constexpr unsigned int JGGKEPIHABD_TypeDefinitionIndex = 44060;

class JGGKEPIHABD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* IDENGDAMPAP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* DGKMJIBMDMN; // 0x30
	::MKBBPOFGLOF* HJBOJGMKDPC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKEPIHABD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKEPIHABD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JGGKEPIHABD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGKEPIHABD_GDEOPIBNOIN_OFFSET))(this);
	}
};
