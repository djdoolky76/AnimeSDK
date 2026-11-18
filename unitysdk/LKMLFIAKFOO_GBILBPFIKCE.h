#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MBPEMPMEMGK.h"

namespace System { template <typename T> class Action_1; }

#define LKMLFIAKFOO_GBILBPFIKCE_FAKGJPDKELJ_OFFSET UNITYSDK_OFFSET(0x184FD420)
#define LKMLFIAKFOO_GBILBPFIKCE__CTOR_OFFSET UNITYSDK_OFFSET(0x184FD410)

inline static constexpr unsigned int LKMLFIAKFOO_GBILBPFIKCE_TypeDefinitionIndex = 43587;

class LKMLFIAKFOO_GBILBPFIKCE : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* BCDJMGPDLKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_GBILBPFIKCE__CTOR_OFFSET))(this);
	}

	::System::Void FAKGJPDKELJ(::MBPEMPMEMGK IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MBPEMPMEMGK))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_GBILBPFIKCE_FAKGJPDKELJ_OFFSET))(this, IGAAKDOIPNN);
	}
};
