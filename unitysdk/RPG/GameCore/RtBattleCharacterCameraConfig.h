#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class VCameraConfig; }

#define RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4B8F0)
#define RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4B760)

namespace RPG::GameCore
{
	class RtBattleCharacterCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraTag>* Tags; // 0x10
		::RPG::GameCore::PredicateConfig* Condition; // 0x18
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleCharacterCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleCharacterCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
