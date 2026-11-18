#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define ICJCPAEKNDK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15EA5BD0)
#define ICJCPAEKNDK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15EA5A20)
#define ICJCPAEKNDK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15EA6110)
#define ICJCPAEKNDK__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA5FD0)

inline static constexpr unsigned int ICJCPAEKNDK_TypeDefinitionIndex = 61166;

class ICJCPAEKNDK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJCPAEKNDK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJCPAEKNDK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ICJCPAEKNDK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJCPAEKNDK_GDEOPIBNOIN_OFFSET))(this);
	}
};
