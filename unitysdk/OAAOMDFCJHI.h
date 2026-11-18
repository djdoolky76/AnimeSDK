#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNKLKMDMODC.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OAAOMDFCJHI_HOKPLMOMCJG_OFFSET UNITYSDK_OFFSET(0x1FD8A660)
#define OAAOMDFCJHI_IDPPPAGOPBL_OFFSET UNITYSDK_OFFSET(0x1FD8A6C0)
#define OAAOMDFCJHI_KJPENJGLEAO_OFFSET UNITYSDK_OFFSET(0x1FD8A670)
#define OAAOMDFCJHI_ODFPINKFEAF_OFFSET UNITYSDK_OFFSET(0x1FD8A750)
#define OAAOMDFCJHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD8A650)

inline static constexpr unsigned int OAAOMDFCJHI_TypeDefinitionIndex = 95321;

class OAAOMDFCJHI : public ::System::Object
{
public:
	::LNKLKMDMODC _LEAGOGOIBAB_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAOMDFCJHI__CTOR_OFFSET))(this);
	}

	::System::Void HOKPLMOMCJG(::LNKLKMDMODC EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LNKLKMDMODC))((::PBYTE)hIl2Cpp + OAAOMDFCJHI_HOKPLMOMCJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KJPENJGLEAO(::Il2CppArray<::System::Single>* JOLEFBMMLOD)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + OAAOMDFCJHI_KJPENJGLEAO_OFFSET))(this, JOLEFBMMLOD);
	}

	::System::String* IDPPPAGOPBL(::LNKLKMDMODC OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::PVOID, ::LNKLKMDMODC))((::PBYTE)hIl2Cpp + OAAOMDFCJHI_IDPPPAGOPBL_OFFSET))(this, OBNIAHNMHPF);
	}

	::LNKLKMDMODC ODFPINKFEAF()
	{
		return ((::LNKLKMDMODC(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAOMDFCJHI_ODFPINKFEAF_OFFSET))(this);
	}
};
