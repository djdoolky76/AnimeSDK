#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FBF948B3F6E676CD_FEC1FCD730E0C6BA_OFFSET UNITYSDK_OFFSET(0x43FEB80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FBF948B3F6E676CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_FBF948B3F6E676CD_TypeDefinitionIndex = 19393;

	class Browser_FBF948B3F6E676CD : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::Boolean BF16AF60C23CAFE8; // 0x18
		::System::Boolean A60D36A71E5F8E6D; // 0x19
		::System::Boolean A9EB61C43D53132B; // 0x1A
		::System::Byte _padding0[0x5];
		::System::String* B960AC235824C6C8; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FBF948B3F6E676CD__CTOR_OFFSET))(this);
		}

		::System::Void FEC1FCD730E0C6BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FBF948B3F6E676CD_FEC1FCD730E0C6BA_OFFSET))(this);
		}
	};
}
