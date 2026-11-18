#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LHLLKGANGOP;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIRoleSelectPageController; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS133_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14808750)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS133_0__PROCESSUIAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x14808760)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass133_0_TypeDefinitionIndex = 59203;

	class UIRoleSelectPageController___c__DisplayClass133_0 : public ::System::Object
	{
	public:
		::MoleMole::AvatarShowSetting* avatarSetting; // 0x10
		::Foundation::AssetPath avatarPath; // 0x18
		::LHLLKGANGOP* avatarUIConfig; // 0x28
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x30
		::System::Int32 avatarID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS133_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessUIAvatar_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS133_0__PROCESSUIAVATAR_B__0_OFFSET))(this);
		}
	};
}
