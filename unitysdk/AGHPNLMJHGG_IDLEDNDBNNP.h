#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AGHPNLMJHGG_IDLEDNDBNNP_MKAHPLNACBE_OFFSET UNITYSDK_OFFSET(0x16D76190)
#define AGHPNLMJHGG_IDLEDNDBNNP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D76180)

inline static constexpr unsigned int AGHPNLMJHGG_IDLEDNDBNNP_TypeDefinitionIndex = 79822;

class AGHPNLMJHGG_IDLEDNDBNNP : public ::System::Object
{
public:
	::System::Action* JLMLJIMBKKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_IDLEDNDBNNP__CTOR_OFFSET))(this);
	}

	::System::Void MKAHPLNACBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_IDLEDNDBNNP_MKAHPLNACBE_OFFSET))(this);
	}
};
