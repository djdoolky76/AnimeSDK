#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAAFLJLCKFI;
class PGPEKBONDHI;
namespace MoleMole { class UIGachaPageController; }
namespace System { class String; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1893A220)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__REFRESHSPECIALPANEL_B__2_OFFSET UNITYSDK_OFFSET(0x1893A230)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__REFRESHSPECIALPANEL_G__SHOULDWEAPONSHOWSP_0_OFFSET UNITYSDK_OFFSET(0x1893A9E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__REFRESHSPECIALPANEL_G__TRYGETWEAPONGACHADEMOVIDEOPATH_1_OFFSET UNITYSDK_OFFSET(0x1893A7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass73_0_TypeDefinitionIndex = 58552;

	class UIGachaPageController___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::PGPEKBONDHI* gacha; // 0x10
		::CAAFLJLCKFI* weaponConfig; // 0x18
		::MoleMole::UIGachaPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSpecialPanel_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__REFRESHSPECIALPANEL_B__2_OFFSET))(this);
		}

		::System::Boolean _RefreshSpecialPanel_g__ShouldWeaponShowSP_0(::CAAFLJLCKFI*& template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAAFLJLCKFI*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__REFRESHSPECIALPANEL_G__SHOULDWEAPONSHOWSP_0_OFFSET))(this, template_);
		}

		::System::Boolean _RefreshSpecialPanel_g__TryGetWeaponGachaDemoVideoPath_1(::System::Int32 gachaID, ::System::String*& videoPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS73_0__REFRESHSPECIALPANEL_G__TRYGETWEAPONGACHADEMOVIDEOPATH_1_OFFSET))(this, gachaID, videoPath);
		}
	};
}
