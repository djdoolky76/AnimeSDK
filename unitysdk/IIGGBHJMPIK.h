#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IIGGBHJMPIK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16579910)
#define IIGGBHJMPIK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16579760)
#define IIGGBHJMPIK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16579C90)
#define IIGGBHJMPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x16579B50)

inline static constexpr unsigned int IIGGBHJMPIK_TypeDefinitionIndex = 80461;

class IIGGBHJMPIK : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* CCCFFMJBEGM; // 0x0
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGGBHJMPIK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGGBHJMPIK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IIGGBHJMPIK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGGBHJMPIK_GDEOPIBNOIN_OFFSET))(this);
	}
};
