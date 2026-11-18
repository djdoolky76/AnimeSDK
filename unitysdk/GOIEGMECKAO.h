#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GOIEGMECKAO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A2AB70)
#define GOIEGMECKAO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A2A970)
#define GOIEGMECKAO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A2AFE0)
#define GOIEGMECKAO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2AE60)

inline static constexpr unsigned int GOIEGMECKAO_TypeDefinitionIndex = 39072;

class GOIEGMECKAO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* MIHICAJDIGN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::CPABOPKIGAL* HMNPNEALHEH; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEGMECKAO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEGMECKAO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOIEGMECKAO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEGMECKAO_GDEOPIBNOIN_OFFSET))(this);
	}
};
