#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5CAB60)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE5CABA0)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__LOADAVATARPRESETCONFIG_B__4_0_OFFSET UNITYSDK_OFFSET(0xE5CABB0)

namespace RPG::GameCore
{
	class BattleLineupJsonTable___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x57820);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x57828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadAvatarPresetConfig_b__4_0(::RPG::GameCore::AvatarLineupKeyLevelConfig* a1, ::RPG::GameCore::AvatarLineupKeyLevelConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarLineupKeyLevelConfig*, ::RPG::GameCore::AvatarLineupKeyLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__LOADAVATARPRESETCONFIG_B__4_0_OFFSET))(this, a1, a2);
		}

	};
}
