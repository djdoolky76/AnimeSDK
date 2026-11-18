#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJLADGKMANM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EA1D0)

inline static constexpr unsigned int PJLADGKMANM_TypeDefinitionIndex = 48775;

class PJLADGKMANM : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CCHAOLKGEID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLADGKMANM__CTOR_OFFSET))(this);
	}
};
