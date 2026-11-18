#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovItemInfoWidgetController; }
template <typename T> class CBCLGFEGHLJ_1;

#define JNIHMGIDGIB_AEFAGDEJHID_OFFSET UNITYSDK_OFFSET(0x13CCF8A0)
#define JNIHMGIDGIB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13CCF740)
#define JNIHMGIDGIB_FDHKLOBICGE_OFFSET UNITYSDK_OFFSET(0x13CCF8B0)
#define JNIHMGIDGIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CCF6C0)
#define JNIHMGIDGIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CCF580)
#define JNIHMGIDGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCF810)

inline static constexpr unsigned int JNIHMGIDGIB_TypeDefinitionIndex = 82312;

class JNIHMGIDGIB : public ::IOOIHHOJOPI
{
public:
	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemInfoWidgetController*>* _IMMKJLNDFEM_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIHMGIDGIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNIHMGIDGIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIHMGIDGIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemInfoWidgetController*>* AEFAGDEJHID()
	{
		return ((::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemInfoWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIHMGIDGIB_AEFAGDEJHID_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIHMGIDGIB_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void FDHKLOBICGE(::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemInfoWidgetController*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemInfoWidgetController*>*))((::PBYTE)hIl2Cpp + JNIHMGIDGIB_FDHKLOBICGE_OFFSET))(this, EGEGIMGMJHN);
	}
};
