#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OHIOGCGIAJI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15F71090)
#define OHIOGCGIAJI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15F70E30)
#define OHIOGCGIAJI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15F71990)
#define OHIOGCGIAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F71790)

inline static constexpr unsigned int OHIOGCGIAJI_TypeDefinitionIndex = 44683;

class OHIOGCGIAJI : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* FGIMDOOEHBD; // 0x20
	::KCMIFNGABDC_1<::System::String*>* JMGCJNPNEHH; // 0x28
	::MKBBPOFGLOF* OFJKEPBPEEF; // 0x30
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x38
	::KCMIFNGABDC_1<::System::String*>* CBNONNHLPNI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIOGCGIAJI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIOGCGIAJI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OHIOGCGIAJI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIOGCGIAJI_GDEOPIBNOIN_OFFSET))(this);
	}
};
