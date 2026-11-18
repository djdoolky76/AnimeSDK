#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define KGGFACGJEGE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x176512E0)
#define KGGFACGJEGE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17651130)
#define KGGFACGJEGE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17651870)
#define KGGFACGJEGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176516E0)

inline static constexpr unsigned int KGGFACGJEGE_TypeDefinitionIndex = 59015;

class KGGFACGJEGE : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* EGCCIODCJIA; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FLNKNMGGHBK; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KNDOHCEMFGM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFACGJEGE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFACGJEGE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KGGFACGJEGE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFACGJEGE_GDEOPIBNOIN_OFFSET))(this);
	}
};
