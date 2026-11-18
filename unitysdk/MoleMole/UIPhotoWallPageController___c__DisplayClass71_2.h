#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16769E30)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__ONCLICKRIGHTCALLBACK_B__2_OFFSET UNITYSDK_OFFSET(0x16769E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass71_2_TypeDefinitionIndex = 46567;

	template <typename T1, typename T2>
	class UIPhotoWallPageController___c__DisplayClass71_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::JJPDGONFBFB* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRightCallback_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__ONCLICKRIGHTCALLBACK_B__2_OFFSET))(this);
		}
	};
}
