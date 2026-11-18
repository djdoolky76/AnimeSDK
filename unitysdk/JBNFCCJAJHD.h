#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define JBNFCCJAJHD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19448900)
#define JBNFCCJAJHD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19448870)
#define JBNFCCJAJHD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19448BB0)
#define JBNFCCJAJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x19448B10)

inline static constexpr unsigned int JBNFCCJAJHD_TypeDefinitionIndex = 47065;

class JBNFCCJAJHD : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* JBOICLHFPBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNFCCJAJHD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNFCCJAJHD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JBNFCCJAJHD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNFCCJAJHD_GDEOPIBNOIN_OFFSET))(this);
	}
};
