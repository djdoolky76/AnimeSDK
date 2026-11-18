#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AGHPNLMJHGG_LCOLEAOJEJM_KOJPFOFOBBJ_OFFSET UNITYSDK_OFFSET(0x17CC7CE0)
#define AGHPNLMJHGG_LCOLEAOJEJM__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC78A0)

inline static constexpr unsigned int AGHPNLMJHGG_LCOLEAOJEJM_TypeDefinitionIndex = 79817;

class AGHPNLMJHGG_LCOLEAOJEJM : public ::System::Object
{
public:
	::System::Action* JLMLJIMBKKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_LCOLEAOJEJM__CTOR_OFFSET))(this);
	}

	::System::Void KOJPFOFOBBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_LCOLEAOJEJM_KOJPFOFOBBJ_OFFSET))(this);
	}
};
