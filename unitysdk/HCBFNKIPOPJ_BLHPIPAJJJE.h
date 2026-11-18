#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBOPDFEMAFJ.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define HCBFNKIPOPJ_BLHPIPAJJJE_FLGJDJIOCHF_OFFSET UNITYSDK_OFFSET(0x13D81A20)
#define HCBFNKIPOPJ_BLHPIPAJJJE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D81A10)

inline static constexpr unsigned int HCBFNKIPOPJ_BLHPIPAJJJE_TypeDefinitionIndex = 60434;

class HCBFNKIPOPJ_BLHPIPAJJJE : public ::System::Object
{
public:
	::System::Action_1<::OBOPDFEMAFJ>* HGBOMLCCBEE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_BLHPIPAJJJE__CTOR_OFFSET))(this);
	}

	::System::Void FLGJDJIOCHF(::OBOPDFEMAFJ BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OBOPDFEMAFJ))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_BLHPIPAJJJE_FLGJDJIOCHF_OFFSET))(this, BLLNHDIDKPA);
	}
};
