#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class NJDHJGDFLDI;
class PFEOJDIJIBM;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PMMBNKLDJDF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x194B8E30)
#define PMMBNKLDJDF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x194B8CE0)
#define PMMBNKLDJDF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x194B91F0)
#define PMMBNKLDJDF_JJBDIGGMHLF_OFFSET UNITYSDK_OFFSET(0x194B90A0)
#define PMMBNKLDJDF__CTOR_OFFSET UNITYSDK_OFFSET(0x194B9100)

inline static constexpr unsigned int PMMBNKLDJDF_TypeDefinitionIndex = 85562;

class PMMBNKLDJDF : public ::MHMFINLCNFN
{
public:
	::NJDHJGDFLDI* OOFCONDMLOI; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* HAFCPIOJBNN; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* DAEBDJCIMFO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMBNKLDJDF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMBNKLDJDF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PMMBNKLDJDF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JJBDIGGMHLF(::PFEOJDIJIBM* DACDAPIGBCB, ::System::Int32 CJJAMKPPKII, ::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + PMMBNKLDJDF_JJBDIGGMHLF_OFFSET))(this, DACDAPIGBCB, CJJAMKPPKII, PPGLBDELEBF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMBNKLDJDF_GDEOPIBNOIN_OFFSET))(this);
	}
};
