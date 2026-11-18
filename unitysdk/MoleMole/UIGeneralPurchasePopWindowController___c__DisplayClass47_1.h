#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5F810)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x18E5F820)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x18E5F9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass47_1_TypeDefinitionIndex = 56605;

	template <typename T>
	class UIGeneralPurchasePopWindowController___c__DisplayClass47_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Single fadeDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnRewardOnClickCallback_b__0(::DJDDGKFCNAJ_IGOPHLMOGAO _)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__0_OFFSET))(this, _);
		}

		::System::Void _OnRewardOnClickCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS47_1__ONREWARDONCLICKCALLBACK_B__1_OFFSET))(this);
		}
	};
}
