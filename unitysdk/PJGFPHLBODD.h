#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PJGFPHLBODD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x150CF3D0)
#define PJGFPHLBODD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x150CF1D0)
#define PJGFPHLBODD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x150CF780)
#define PJGFPHLBODD__CTOR_OFFSET UNITYSDK_OFFSET(0x150CF600)

inline static constexpr unsigned int PJGFPHLBODD_TypeDefinitionIndex = 62651;

class PJGFPHLBODD : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* MIHICAJDIGN; // 0x20
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* DKNIJILBDPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGFPHLBODD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGFPHLBODD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PJGFPHLBODD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGFPHLBODD_GDEOPIBNOIN_OFFSET))(this);
	}
};
