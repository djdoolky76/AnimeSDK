#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define MCDIFPKOOED_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D5F230)
#define MCDIFPKOOED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D5F080)
#define MCDIFPKOOED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D5F960)
#define MCDIFPKOOED__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5F800)

inline static constexpr unsigned int MCDIFPKOOED_TypeDefinitionIndex = 79530;

class MCDIFPKOOED : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KFPPEHDDGKE; // 0x28
	::KCMIFNGABDC_1<::System::Single>* GEEMKIKDHLB; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BMOPBLLPEJD; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDIFPKOOED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDIFPKOOED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCDIFPKOOED_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDIFPKOOED_GDEOPIBNOIN_OFFSET))(this);
	}
};
