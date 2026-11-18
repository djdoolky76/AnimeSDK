#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NOAABBHDHBJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115AE160)
#define NOAABBHDHBJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x115AE080)
#define NOAABBHDHBJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x115AE5F0)
#define NOAABBHDHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x115AE500)

inline static constexpr unsigned int NOAABBHDHBJ_TypeDefinitionIndex = 39167;

class NOAABBHDHBJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* NPLPDLNIMEI; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAABBHDHBJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAABBHDHBJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NOAABBHDHBJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAABBHDHBJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
