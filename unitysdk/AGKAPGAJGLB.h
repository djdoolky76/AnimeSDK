#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AGKAPGAJGLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1647A2C0)
#define AGKAPGAJGLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1647A060)
#define AGKAPGAJGLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1647AAC0)
#define AGKAPGAJGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1647A900)

inline static constexpr unsigned int AGKAPGAJGLB_TypeDefinitionIndex = 77375;

class AGKAPGAJGLB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* NHKNILFDKGG; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* LFDPDKIDPAK; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* MNLEAPLFGIB; // 0x38
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKAPGAJGLB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKAPGAJGLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AGKAPGAJGLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKAPGAJGLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
