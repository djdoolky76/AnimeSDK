#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AGHPNLMJHGG_GNCNEEJOBIP_KOBBGMIPCNI_OFFSET UNITYSDK_OFFSET(0x1439D1F0)
#define AGHPNLMJHGG_GNCNEEJOBIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1439D1E0)

inline static constexpr unsigned int AGHPNLMJHGG_GNCNEEJOBIP_TypeDefinitionIndex = 79819;

class AGHPNLMJHGG_GNCNEEJOBIP : public ::System::Object
{
public:
	::System::Action* JLMLJIMBKKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_GNCNEEJOBIP__CTOR_OFFSET))(this);
	}

	::System::Void KOBBGMIPCNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHPNLMJHGG_GNCNEEJOBIP_KOBBGMIPCNI_OFFSET))(this);
	}
};
