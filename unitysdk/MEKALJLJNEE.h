#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MEKALJLJNEE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x151C3EE0)
#define MEKALJLJNEE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151C3D30)
#define MEKALJLJNEE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151C42A0)
#define MEKALJLJNEE__CTOR_OFFSET UNITYSDK_OFFSET(0x151C4160)

inline static constexpr unsigned int MEKALJLJNEE_TypeDefinitionIndex = 86187;

class MEKALJLJNEE : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* CCCFFMJBEGM; // 0x0
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKALJLJNEE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKALJLJNEE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MEKALJLJNEE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKALJLJNEE_GDEOPIBNOIN_OFFSET))(this);
	}
};
