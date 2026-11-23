#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FDB9E39780E9E252_BA9D075A4BD615B8_OFFSET UNITYSDK_OFFSET(0x43FEA90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FDB9E39780E9E252__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_FDB9E39780E9E252_TypeDefinitionIndex = 19391;

	class Browser_FDB9E39780E9E252 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::String* B083BE7841B347C4; // 0x18
		::System::String* AFE8F10692F5139F; // 0x20
		::System::Int32 E114CA251F811C75; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FDB9E39780E9E252__CTOR_OFFSET))(this);
		}

		::System::Void BA9D075A4BD615B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FDB9E39780E9E252_BA9D075A4BD615B8_OFFSET))(this);
		}
	};
}
