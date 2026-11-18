#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AGHPNLMJHGG_OLBEDFNGBLM_ABOLDDFJOPH_OFFSET UNITYSDK_OFFSET(0x11B94280)
#define AGHPNLMJHGG_OLBEDFNGBLM__CTOR_OFFSET UNITYSDK_OFFSET(0x11B94270)

inline static constexpr unsigned int AGHPNLMJHGG_OLBEDFNGBLM_TypeDefinitionIndex = 79818;

class AGHPNLMJHGG_OLBEDFNGBLM : public ::System::Object
{
public:
	::System::Action* JLMLJIMBKKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_OLBEDFNGBLM__CTOR_OFFSET))(this);
	}

	::System::Void ABOLDDFJOPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_OLBEDFNGBLM_ABOLDDFJOPH_OFFSET))(this);
	}
};
