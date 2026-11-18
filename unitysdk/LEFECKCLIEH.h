#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define LEFECKCLIEH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD426800)
#define LEFECKCLIEH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD426770)
#define LEFECKCLIEH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD426900)
#define LEFECKCLIEH__CTOR_OFFSET UNITYSDK_OFFSET(0xD426860)

inline static constexpr unsigned int LEFECKCLIEH_TypeDefinitionIndex = 45250;

class LEFECKCLIEH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* HIBMBIEJKMJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFECKCLIEH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFECKCLIEH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LEFECKCLIEH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFECKCLIEH_GDEOPIBNOIN_OFFSET))(this);
	}
};
