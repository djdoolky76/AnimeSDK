#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;
namespace MoleMole { class UIPhotoWallPageController; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167693A0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_0__ONCLICKRIGHTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x167693B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass71_0_TypeDefinitionIndex = 46564;

	class UIPhotoWallPageController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallPageController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRightCallback_b__0(::System::Boolean success, ::JGBMOOJHMBF* friend_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_0__ONCLICKRIGHTCALLBACK_B__0_OFFSET))(this, success, friend_);
		}
	};
}
