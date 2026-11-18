#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAvatarShowSettings; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19B34C50)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS17_1__REBUILDUIAVATARSHOWSETTINGDATA_B__0_OFFSET UNITYSDK_OFFSET(0x19B34C60)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass17_1_TypeDefinitionIndex = 75159;

	template <typename T>
	class ConfigUIAvatarShowData___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::Foundation::AssetPath assetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _ReBuildUIAvatarShowSettingData_b__0(::MoleMole::ConfigUIAvatarShowSettings* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS17_1__REBUILDUIAVATARSHOWSETTINGDATA_B__0_OFFSET))(this, config);
		}
	};
}
