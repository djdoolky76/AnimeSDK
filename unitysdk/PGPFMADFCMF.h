#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define PGPFMADFCMF_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1197B6E0)
#define PGPFMADFCMF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1197B670)
#define PGPFMADFCMF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1197B2A0)
#define PGPFMADFCMF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1197C0D0)
#define PGPFMADFCMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1197BE20)

inline static constexpr unsigned int PGPFMADFCMF_TypeDefinitionIndex = 78839;

class PGPFMADFCMF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* BKKCMMLBAHJ; // 0x18
	::KCMIFNGABDC_1<::System::String*>* MBDHHLFFEKG; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Boolean>*>* HHHMLBPDENK; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JJLAFFGFNFH; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* LFLAJNMCKDE; // 0x40
	::CPABOPKIGAL* MMFNFINOFPN; // 0x48
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* IJKLNPJDCPD; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* CABAPLGCFKE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPFMADFCMF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPFMADFCMF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PGPFMADFCMF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PGPFMADFCMF_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPFMADFCMF_GDEOPIBNOIN_OFFSET))(this);
	}
};
