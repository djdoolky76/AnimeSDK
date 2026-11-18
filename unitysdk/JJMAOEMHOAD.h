#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define JJMAOEMHOAD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13AD2D40)
#define JJMAOEMHOAD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13AD2C00)
#define JJMAOEMHOAD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13AD2FC0)
#define JJMAOEMHOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD2EC0)

inline static constexpr unsigned int JJMAOEMHOAD_TypeDefinitionIndex = 93256;

class JJMAOEMHOAD : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* JLDHAEBCLHA; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMAOEMHOAD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMAOEMHOAD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JJMAOEMHOAD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMAOEMHOAD_GDEOPIBNOIN_OFFSET))(this);
	}
};
