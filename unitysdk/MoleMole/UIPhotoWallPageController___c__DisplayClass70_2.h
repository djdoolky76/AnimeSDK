#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16769340)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__ONCLICKLEFTCALLBACK_B__2_OFFSET UNITYSDK_OFFSET(0x16769350)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass70_2_TypeDefinitionIndex = 46566;

	template <typename T1, typename T2>
	class UIPhotoWallPageController___c__DisplayClass70_2 : public ::System::Object
	{
	public:
		::JJPDGONFBFB* data; // 0x10
		::System::Object* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickLeftCallback_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__ONCLICKLEFTCALLBACK_B__2_OFFSET))(this);
		}
	};
}
