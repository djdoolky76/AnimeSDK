#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define LOGKLIHOLPL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15902130)
#define LOGKLIHOLPL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15901F30)
#define LOGKLIHOLPL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x159025B0)
#define LOGKLIHOLPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15902430)

inline static constexpr unsigned int LOGKLIHOLPL_TypeDefinitionIndex = 50852;

class LOGKLIHOLPL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* BPCONNHHCPI; // 0x28
	::KCMIFNGABDC_1<::System::Single>* MGBOCLFIGPF; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* OHDMGGALOCJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGKLIHOLPL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGKLIHOLPL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOGKLIHOLPL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGKLIHOLPL_GDEOPIBNOIN_OFFSET))(this);
	}
};
