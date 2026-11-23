#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class Texture2D; }

#define BC1058A4EE25C028_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x285C660)
#define BC1058A4EE25C028__CTOR_OFFSET UNITYSDK_OFFSET(0x1680EC0)

inline static constexpr unsigned int BC1058A4EE25C028_TypeDefinitionIndex = 16041;

class BC1058A4EE25C028 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::E46B881AA2636190 BAFAF6ABCA19A201; // 0x18
	::UnityEngine::Texture2D* F5463338552D4C0C; // 0x28
	::UnityEngine::Texture2D* E9D91016839914FB; // 0x30
	::System::Single F13B5534F1A7C958; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC1058A4EE25C028__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::BC1058A4EE25C028* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BC1058A4EE25C028*))((::PBYTE)hIl2Cpp + BC1058A4EE25C028_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
