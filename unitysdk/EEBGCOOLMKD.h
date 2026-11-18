#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define EEBGCOOLMKD_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x10631FD0)
#define EEBGCOOLMKD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10631F60)
#define EEBGCOOLMKD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10631DB0)
#define EEBGCOOLMKD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x106325B0)
#define EEBGCOOLMKD__CTOR_OFFSET UNITYSDK_OFFSET(0x10632450)

inline static constexpr unsigned int EEBGCOOLMKD_TypeDefinitionIndex = 72648;

class EEBGCOOLMKD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OKEPGOMHOMM; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* MJAENFEOHLD; // 0x38
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBGCOOLMKD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBGCOOLMKD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EEBGCOOLMKD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBGCOOLMKD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EEBGCOOLMKD_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
