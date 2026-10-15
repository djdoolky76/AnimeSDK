#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinAvatarConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MANIKINAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FF4E0)
#define RPG_GAMECORE_MANIKINAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FF410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinAvatarConfig_TypeDefinitionIndex = 18967;

	class ManikinAvatarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AvatarPrefabPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
