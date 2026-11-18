#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OAKCLODFBDC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1291A940)
#define OAKCLODFBDC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1291A740)
#define OAKCLODFBDC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1291AD00)
#define OAKCLODFBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1291AB80)

inline static constexpr unsigned int OAKCLODFBDC_TypeDefinitionIndex = 63292;

class OAKCLODFBDC : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* NOMHBCCKDNE; // 0x0
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* MIHICAJDIGN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* DKNIJILBDPE; // 0x28
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x30
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKCLODFBDC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKCLODFBDC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OAKCLODFBDC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKCLODFBDC_GDEOPIBNOIN_OFFSET))(this);
	}
};
