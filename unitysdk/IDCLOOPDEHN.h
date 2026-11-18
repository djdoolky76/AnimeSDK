#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define IDCLOOPDEHN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A455900)
#define IDCLOOPDEHN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A455750)
#define IDCLOOPDEHN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A455AB0)
#define IDCLOOPDEHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A455950)

inline static constexpr unsigned int IDCLOOPDEHN_TypeDefinitionIndex = 83152;

class IDCLOOPDEHN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* OFHEOFEFNIH; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* LGOOKHKCNBP; // 0x20
	::KCMIFNGABDC_1<::System::String*>* PKBINFHLMEK; // 0x28
	::AAMKEDEDHPD_1<::System::String*>* FNBBCAPLIKM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCLOOPDEHN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCLOOPDEHN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IDCLOOPDEHN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCLOOPDEHN_GDEOPIBNOIN_OFFSET))(this);
	}
};
