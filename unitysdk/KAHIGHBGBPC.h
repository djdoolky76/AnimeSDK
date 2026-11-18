#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KAHIGHBGBPC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x152B9290)
#define KAHIGHBGBPC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x152B9150)
#define KAHIGHBGBPC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x152B9630)
#define KAHIGHBGBPC__CTOR_OFFSET UNITYSDK_OFFSET(0x152B9510)

inline static constexpr unsigned int KAHIGHBGBPC_TypeDefinitionIndex = 61276;

class KAHIGHBGBPC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* AKDCNICFJGO; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHIGHBGBPC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHIGHBGBPC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KAHIGHBGBPC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHIGHBGBPC_GDEOPIBNOIN_OFFSET))(this);
	}
};
