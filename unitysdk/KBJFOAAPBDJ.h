#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KBJFOAAPBDJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17B65C20)
#define KBJFOAAPBDJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B65A20)
#define KBJFOAAPBDJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B66150)
#define KBJFOAAPBDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B65FD0)

inline static constexpr unsigned int KBJFOAAPBDJ_TypeDefinitionIndex = 51082;

class KBJFOAAPBDJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* BFCKFHAHLKF; // 0x18
	::KCMIFNGABDC_1<::System::String*>* JBABIJKNJPF; // 0x20
	::KCMIFNGABDC_1<::System::String*>* ELEGHNLJEFC; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJFOAAPBDJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJFOAAPBDJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KBJFOAAPBDJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJFOAAPBDJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
