#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DCAPDHPGEFH_DPPJJFKDNHJ_OFFSET UNITYSDK_OFFSET(0x12BA5030)
#define DCAPDHPGEFH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12BA4FC0)
#define DCAPDHPGEFH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12BA4E80)
#define DCAPDHPGEFH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12BA5690)
#define DCAPDHPGEFH_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x12BA5720)
#define DCAPDHPGEFH__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA5580)

inline static constexpr unsigned int DCAPDHPGEFH_TypeDefinitionIndex = 80105;

class DCAPDHPGEFH : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHPGEFH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void DPPJJFKDNHJ(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_DPPJJFKDNHJ_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF, ::CAMLGDMCCMB AOKHOHCJNFJ)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::CAMLGDMCCMB))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF, AOKHOHCJNFJ);
	}
};
