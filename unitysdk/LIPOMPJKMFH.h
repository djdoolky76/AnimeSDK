#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define LIPOMPJKMFH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D33A40)
#define LIPOMPJKMFH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D339B0)
#define LIPOMPJKMFH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D33EF0)
#define LIPOMPJKMFH__CTOR_OFFSET UNITYSDK_OFFSET(0x12D33E50)

inline static constexpr unsigned int LIPOMPJKMFH_TypeDefinitionIndex = 71100;

class LIPOMPJKMFH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* NDNBPMEGLCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOMPJKMFH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOMPJKMFH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LIPOMPJKMFH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOMPJKMFH_GDEOPIBNOIN_OFFSET))(this);
	}
};
