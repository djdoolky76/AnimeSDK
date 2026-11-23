#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class ExternalKeyboard; }

#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_E2256E5784301476_B55C740DBA9C4C38_OFFSET UNITYSDK_OFFSET(0x440DB50)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_E2256E5784301476_BF9B15C4FF19E62F_OFFSET UNITYSDK_OFFSET(0x440DAC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_E2256E5784301476__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ExternalKeyboard_E2256E5784301476_TypeDefinitionIndex = 19444;

	class ExternalKeyboard_E2256E5784301476 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard* A544919C800E2923; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_E2256E5784301476__CTOR_OFFSET))(this);
		}

		::System::Void BF9B15C4FF19E62F(::System::String* FAED4B2BDDFD1BC9, ::System::Boolean A0C4A90F09BE5F01, ::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_E2256E5784301476_BF9B15C4FF19E62F_OFFSET))(this, FAED4B2BDDFD1BC9, A0C4A90F09BE5F01, E937D4885DAA1AE8);
		}

		::System::Void B55C740DBA9C4C38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_EXTERNALKEYBOARD_E2256E5784301476_B55C740DBA9C4C38_OFFSET))(this);
		}
	};
}
