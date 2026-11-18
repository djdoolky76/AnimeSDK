#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define DLGFPCFFJFO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19D6F990)
#define DLGFPCFFJFO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19D6F6D0)
#define DLGFPCFFJFO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19D6FFB0)
#define DLGFPCFFJFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6FD70)

inline static constexpr unsigned int DLGFPCFFJFO_TypeDefinitionIndex = 69618;

class DLGFPCFFJFO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* LHACOGEJKMC; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::MKBBPOFGLOF* DJHMJLEGMMI; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* PEBFHKAHKOJ; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* PGOGECLBOAK; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* OFCDHOJCFMN; // 0x40
	::MKBBPOFGLOF* EGPGPKDHALB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGFPCFFJFO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGFPCFFJFO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DLGFPCFFJFO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGFPCFFJFO_GDEOPIBNOIN_OFFSET))(this);
	}
};
