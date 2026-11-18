#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BOBDPOJDBPM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18DAF440)
#define BOBDPOJDBPM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18DAF290)
#define BOBDPOJDBPM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18DAF7B0)
#define BOBDPOJDBPM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAF670)

inline static constexpr unsigned int BOBDPOJDBPM_TypeDefinitionIndex = 81459;

class BOBDPOJDBPM : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* OJLLEEAILNB; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBDPOJDBPM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBDPOJDBPM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BOBDPOJDBPM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBDPOJDBPM_GDEOPIBNOIN_OFFSET))(this);
	}
};
