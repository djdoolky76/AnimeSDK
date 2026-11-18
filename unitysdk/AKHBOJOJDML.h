#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AKHBOJOJDML_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1820AED0)
#define AKHBOJOJDML_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1820AD20)
#define AKHBOJOJDML_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1820B260)
#define AKHBOJOJDML__CTOR_OFFSET UNITYSDK_OFFSET(0x1820B120)

inline static constexpr unsigned int AKHBOJOJDML_TypeDefinitionIndex = 57260;

class AKHBOJOJDML : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* CCCFFMJBEGM; // 0x0
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x18
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHBOJOJDML__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHBOJOJDML_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AKHBOJOJDML_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHBOJOJDML_GDEOPIBNOIN_OFFSET))(this);
	}
};
