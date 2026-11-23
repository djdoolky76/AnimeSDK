#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x4406D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserSystemSettings_TypeDefinitionIndex = 19562;

	class BrowserSystemSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* profilePath; // 0x20
		::System::String* userAgent; // 0x28

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERSYSTEMSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
