#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define DEBNALKAKAH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149977C0)
#define DEBNALKAKAH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14997560)
#define DEBNALKAKAH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14997B70)
#define DEBNALKAKAH__CTOR_OFFSET UNITYSDK_OFFSET(0x149979B0)

inline static constexpr unsigned int DEBNALKAKAH_TypeDefinitionIndex = 66368;

class DEBNALKAKAH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* NDFAAFAKLMC; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* GMFJCIKCICC; // 0x20
	::KCMIFNGABDC_1<::System::Single>* LIOCCFGNODI; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* MBLPGGBILLP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNALKAKAH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNALKAKAH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DEBNALKAKAH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNALKAKAH_GDEOPIBNOIN_OFFSET))(this);
	}
};
