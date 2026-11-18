#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define HLJCMNLBOIM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17B0F440)
#define HLJCMNLBOIM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B0F290)
#define HLJCMNLBOIM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B0FE50)
#define HLJCMNLBOIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0FCF0)

inline static constexpr unsigned int HLJCMNLBOIM_TypeDefinitionIndex = 38939;

class HLJCMNLBOIM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* IJELMMBPAIK; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* HGPAEGALPFE; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* DJGBJGCPOPJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJCMNLBOIM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJCMNLBOIM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HLJCMNLBOIM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJCMNLBOIM_GDEOPIBNOIN_OFFSET))(this);
	}
};
