#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JOPLLKHJEON_OMBLDLFAIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC7CF0)

inline static constexpr unsigned int JOPLLKHJEON_OMBLDLFAIMM_TypeDefinitionIndex = 62011;

class JOPLLKHJEON_OMBLDLFAIMM : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ONOAGAPJNCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_OMBLDLFAIMM__CTOR_OFFSET))(this);
	}
};
