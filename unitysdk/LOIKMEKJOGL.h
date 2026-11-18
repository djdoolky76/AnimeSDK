#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LOIKMEKJOGL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x15E0E4D0)
#define LOIKMEKJOGL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E0E460)
#define LOIKMEKJOGL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E0E140)
#define LOIKMEKJOGL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E0EDC0)
#define LOIKMEKJOGL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0EB90)

inline static constexpr unsigned int LOIKMEKJOGL_TypeDefinitionIndex = 92730;

class LOIKMEKJOGL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* BKKCMMLBAHJ; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* IJKLNPJDCPD; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* CABAPLGCFKE; // 0x30
	::KCMIFNGABDC_1<::System::String*>* CHFJGKMBBHJ; // 0x38
	::KCMIFNGABDC_1<::System::String*>* MBDHHLFFEKG; // 0x40
	::CPABOPKIGAL* MMFNFINOFPN; // 0x48
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIKMEKJOGL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIKMEKJOGL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOIKMEKJOGL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOIKMEKJOGL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIKMEKJOGL_GDEOPIBNOIN_OFFSET))(this);
	}
};
