#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterSomatoCommonConfig; }
namespace RPG::GameCore { class SomatoCommonCameraConfig; }

#define RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579460)
#define RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5793A0)

namespace RPG::GameCore
{
	class CharacterSomatoCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SomatoCommonCameraConfig*>* SomatoCameraConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSomatoCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSomatoCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
