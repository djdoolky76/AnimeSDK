#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

class AGBBEKJHHNP;
class CAFPCPPDJOJ;
class IPFEGINHIGG;
class KKPJPCEICHI;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E45900)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__SETAVATARNEW_B__0_OFFSET UNITYSDK_OFFSET(0x18E45910)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__SETAVATARNEW_B__1_OFFSET UNITYSDK_OFFSET(0x18E45980)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__SETAVATARNEW_B__2_OFFSET UNITYSDK_OFFSET(0x18E45AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass512_0_TypeDefinitionIndex = 44769;

	class UIGalgamePageController___c__DisplayClass512_0 : public ::System::Object
	{
	public:
		::AGBBEKJHHNP* avatarModelInfo; // 0x10
		::MoleMole::AvatarShowSetting* showSetting; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::KKPJPCEICHI* filterContext; // 0x28
		::IPFEGINHIGG* currUnit; // 0x30
		::System::Action* loadFinished; // 0x38
		::UnityEngine::CanvasGroup* rootCanvasGroup; // 0x40
		::CAFPCPPDJOJ* avatarSetting; // 0x48
		::System::Int32 avatarId; // 0x50
		::System::Boolean isUsingPlayerAvatarSkin; // 0x54
		::System::Boolean useSelfLightSetting; // 0x55
		::System::Boolean hasOverridedAvatarSkin; // 0x56
		::System::Byte _padding0[0x1];
		::System::Int32 overrideSkinID; // 0x58
		::System::Int32 realIndex; // 0x5C
		::MoleMole::GalGame::GalNPCLocation location; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__0(::IPFEGINHIGG* recycleRoleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::IPFEGINHIGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__SETAVATARNEW_B__0_OFFSET))(this, recycleRoleInfo);
		}

		::System::Void _SetAvatarNew_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__SETAVATARNEW_B__1_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_0__SETAVATARNEW_B__2_OFFSET))(this);
		}
	};
}
