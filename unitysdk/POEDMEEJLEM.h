#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define POEDMEEJLEM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x150E2450)
#define POEDMEEJLEM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x150E2370)
#define POEDMEEJLEM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x150E26F0)
#define POEDMEEJLEM__CTOR_OFFSET UNITYSDK_OFFSET(0x150E25E0)

inline static constexpr unsigned int POEDMEEJLEM_TypeDefinitionIndex = 58283;

class POEDMEEJLEM : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDMEEJLEM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDMEEJLEM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + POEDMEEJLEM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDMEEJLEM_GDEOPIBNOIN_OFFSET))(this);
	}
};
