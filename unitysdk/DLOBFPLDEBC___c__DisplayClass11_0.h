#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLOBFPLDEBC;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define DLOBFPLDEBC___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF8BB820)
#define DLOBFPLDEBC___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET UNITYSDK_OFFSET(0xF8BBFD0)

	class DLOBFPLDEBC___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::DLOBFPLDEBC* __4__this; // 0x10
		::System::String* profilePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PreloadTimelineRefAssets_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + DLOBFPLDEBC___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET))(this, a1);
		}

	};
