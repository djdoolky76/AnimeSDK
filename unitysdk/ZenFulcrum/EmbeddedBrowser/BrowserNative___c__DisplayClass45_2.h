#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0DEA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_2__INITWEBVIEWASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x1FC0DEB0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___c__DisplayClass45_2_TypeDefinitionIndex = 32740;

	template <typename T1, typename T2>
	class BrowserNative___c__DisplayClass45_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean initRes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_2__CTOR_OFFSET))(this);
		}

		::System::Void _InitWebViewAsync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE___C__DISPLAYCLASS45_2__INITWEBVIEWASYNC_B__2_OFFSET))(this);
		}
	};
}
