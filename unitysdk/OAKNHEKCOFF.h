#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OAKNHEKCOFF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFD58090)
#define OAKNHEKCOFF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFD58000)
#define OAKNHEKCOFF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFD58310)
#define OAKNHEKCOFF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD58270)

inline static constexpr unsigned int OAKNHEKCOFF_TypeDefinitionIndex = 49404;

class OAKNHEKCOFF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* ENMEIJPEPDB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKNHEKCOFF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKNHEKCOFF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OAKNHEKCOFF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKNHEKCOFF_GDEOPIBNOIN_OFFSET))(this);
	}
};
