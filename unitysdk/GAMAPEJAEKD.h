#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GAMAPEJAEKD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x142C41A0)
#define GAMAPEJAEKD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x142C4050)
#define GAMAPEJAEKD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x142C46B0)
#define GAMAPEJAEKD__CTOR_OFFSET UNITYSDK_OFFSET(0x142C4580)

inline static constexpr unsigned int GAMAPEJAEKD_TypeDefinitionIndex = 42704;

class GAMAPEJAEKD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HHNHOHLAHJA; // 0x28
	::KCMIFNGABDC_1<::System::String*>* IOENGAEMCJL; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMAPEJAEKD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMAPEJAEKD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GAMAPEJAEKD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMAPEJAEKD_GDEOPIBNOIN_OFFSET))(this);
	}
};
