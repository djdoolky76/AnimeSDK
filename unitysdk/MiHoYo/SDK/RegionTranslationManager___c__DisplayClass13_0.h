#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class RegionTranslationManager; }
namespace System { class String; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC87990)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS13_0__LOADREMOTETRANSLATION_B__0_OFFSET UNITYSDK_OFFSET(0x1CC879A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager___c__DisplayClass13_0_TypeDefinitionIndex = 19213;

	class RegionTranslationManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::RegionTranslationManager* __4__this; // 0x10
		::System::String* language; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadRemoteTranslation_b__0(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS13_0__LOADREMOTETRANSLATION_B__0_OFFSET))(this, result);
		}
	};
}
