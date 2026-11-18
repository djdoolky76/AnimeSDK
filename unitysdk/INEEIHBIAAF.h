#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define INEEIHBIAAF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13AB0180)
#define INEEIHBIAAF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13AB00F0)
#define INEEIHBIAAF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13AB0490)
#define INEEIHBIAAF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB03F0)

inline static constexpr unsigned int INEEIHBIAAF_TypeDefinitionIndex = 66962;

class INEEIHBIAAF : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* DIEPOKHCLDC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEEIHBIAAF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEEIHBIAAF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + INEEIHBIAAF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEEIHBIAAF_GDEOPIBNOIN_OFFSET))(this);
	}
};
