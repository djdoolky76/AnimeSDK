#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IDPLAMMHLPI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xEBB83B0)
#define IDPLAMMHLPI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEBB8260)
#define IDPLAMMHLPI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEBB8970)
#define IDPLAMMHLPI__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB8820)

inline static constexpr unsigned int IDPLAMMHLPI_TypeDefinitionIndex = 56187;

class IDPLAMMHLPI : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* BOHNBOELHDG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* MLLDMPJMCCP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPLAMMHLPI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPLAMMHLPI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IDPLAMMHLPI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPLAMMHLPI_GDEOPIBNOIN_OFFSET))(this);
	}
};
