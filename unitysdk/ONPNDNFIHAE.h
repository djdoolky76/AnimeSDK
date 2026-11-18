#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define ONPNDNFIHAE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A77310)
#define ONPNDNFIHAE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A77160)
#define ONPNDNFIHAE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A77640)
#define ONPNDNFIHAE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A77500)

inline static constexpr unsigned int ONPNDNFIHAE_TypeDefinitionIndex = 62309;

class ONPNDNFIHAE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::CPABOPKIGAL* HMNPNEALHEH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPNDNFIHAE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPNDNFIHAE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONPNDNFIHAE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPNDNFIHAE_GDEOPIBNOIN_OFFSET))(this);
	}
};
