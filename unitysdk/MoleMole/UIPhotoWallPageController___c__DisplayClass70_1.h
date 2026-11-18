#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16768C90)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__ONCLICKLEFTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x16768CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass70_1_TypeDefinitionIndex = 46558;

	template <typename T>
	class UIPhotoWallPageController___c__DisplayClass70_1 : public ::System::Object
	{
	public:
		::JGBMOOJHMBF* friend_; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickLeftCallback_b__1(::DJDDGKFCNAJ_IGOPHLMOGAO r)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__ONCLICKLEFTCALLBACK_B__1_OFFSET))(this, r);
		}
	};
}
