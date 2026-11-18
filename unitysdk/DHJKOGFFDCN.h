#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define DHJKOGFFDCN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x147CF120)
#define DHJKOGFFDCN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x147CEF20)
#define DHJKOGFFDCN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x147CF5A0)
#define DHJKOGFFDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x147CF420)

inline static constexpr unsigned int DHJKOGFFDCN_TypeDefinitionIndex = 39223;

class DHJKOGFFDCN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Single>* MGBOCLFIGPF; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* OHDMGGALOCJ; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* BPCONNHHCPI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJKOGFFDCN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJKOGFFDCN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DHJKOGFFDCN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJKOGFFDCN_GDEOPIBNOIN_OFFSET))(this);
	}
};
