#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define BNGPFDDLDBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128B5560)
#define BNGPFDDLDBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x128B5360)
#define BNGPFDDLDBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x128B5940)
#define BNGPFDDLDBC__CTOR_OFFSET UNITYSDK_OFFSET(0x128B57C0)

inline static constexpr unsigned int BNGPFDDLDBC_TypeDefinitionIndex = 83634;

class BNGPFDDLDBC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HJOLAJLFOEO; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* OILHOKBIMAH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGPFDDLDBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGPFDDLDBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNGPFDDLDBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGPFDDLDBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
