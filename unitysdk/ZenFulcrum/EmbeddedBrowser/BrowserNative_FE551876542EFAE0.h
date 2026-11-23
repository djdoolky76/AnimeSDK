#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FE551876542EFAE0_FA4021C591F14535_OFFSET UNITYSDK_OFFSET(0x440DBC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FE551876542EFAE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FE551876542EFAE0_TypeDefinitionIndex = 19555;

	class BrowserNative_FE551876542EFAE0 : public ::System::Object
	{
	public:
		::System::String* B083BE7841B347C4; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FE551876542EFAE0__CTOR_OFFSET))(this);
		}

		::System::Void FA4021C591F14535()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FE551876542EFAE0_FA4021C591F14535_OFFSET))(this);
		}
	};
}
