#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define BFIBOMLGAHE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFF6DA60)
#define BFIBOMLGAHE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFF6D920)
#define BFIBOMLGAHE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFF6DCD0)
#define BFIBOMLGAHE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6DBD0)

inline static constexpr unsigned int BFIBOMLGAHE_TypeDefinitionIndex = 81369;

class BFIBOMLGAHE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HGDLCDBABPK; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIBOMLGAHE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIBOMLGAHE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BFIBOMLGAHE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIBOMLGAHE_GDEOPIBNOIN_OFFSET))(this);
	}
};
