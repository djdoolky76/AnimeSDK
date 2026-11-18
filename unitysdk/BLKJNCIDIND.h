#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define BLKJNCIDIND_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x14EEB540)
#define BLKJNCIDIND_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14EEAFB0)
#define BLKJNCIDIND_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14EEAE00)
#define BLKJNCIDIND_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14EEB5F0)
#define BLKJNCIDIND__CTOR_OFFSET UNITYSDK_OFFSET(0x14EEB3B0)

inline static constexpr unsigned int BLKJNCIDIND_TypeDefinitionIndex = 40752;

class BLKJNCIDIND : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* DFEKHPJCABP; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJNCIDIND__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJNCIDIND_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BLKJNCIDIND_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + BLKJNCIDIND_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJNCIDIND_GDEOPIBNOIN_OFFSET))(this);
	}
};
