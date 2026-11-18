#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NJAIBLNLMMF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11494FF0)
#define NJAIBLNLMMF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11494EB0)
#define NJAIBLNLMMF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x114953C0)
#define NJAIBLNLMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x114952A0)

inline static constexpr unsigned int NJAIBLNLMMF_TypeDefinitionIndex = 43556;

class NJAIBLNLMMF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* NANDMFMMLIM; // 0x18
	::KCMIFNGABDC_1<::System::String*>* OFLPJGAIELF; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAIBLNLMMF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAIBLNLMMF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NJAIBLNLMMF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAIBLNLMMF_GDEOPIBNOIN_OFFSET))(this);
	}
};
