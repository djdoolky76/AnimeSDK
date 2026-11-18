#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JCJGHDFOCOC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A50910)
#define JCJGHDFOCOC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A50880)
#define JCJGHDFOCOC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A50BC0)
#define JCJGHDFOCOC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A50B20)

inline static constexpr unsigned int JCJGHDFOCOC_TypeDefinitionIndex = 39670;

class JCJGHDFOCOC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* OGHPIFHIEMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJGHDFOCOC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJGHDFOCOC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JCJGHDFOCOC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJGHDFOCOC_GDEOPIBNOIN_OFFSET))(this);
	}
};
