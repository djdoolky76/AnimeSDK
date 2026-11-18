#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JKKEMAKMMIJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18741A80)
#define JKKEMAKMMIJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18741940)
#define JKKEMAKMMIJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18742030)
#define JKKEMAKMMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18741F10)

inline static constexpr unsigned int JKKEMAKMMIJ_TypeDefinitionIndex = 52157;

class JKKEMAKMMIJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* JOLGCLLJPLP; // 0x18
	::KCMIFNGABDC_1<::System::String*>* KLADLECFPJB; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKEMAKMMIJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKEMAKMMIJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JKKEMAKMMIJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKEMAKMMIJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
