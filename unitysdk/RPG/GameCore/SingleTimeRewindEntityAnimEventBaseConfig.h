#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleTimeRewindEntityAnimEventBaseConfig; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEBD90)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEBF50)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEBDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimEventBaseConfig_TypeDefinitionIndex = 16601;

	class SingleTimeRewindEntityAnimEventBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single NormalizeTime; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>* TimeRewindEffConfigs; // 0x18
		::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>* TimeRewindAudioConfigs; // 0x20
		::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>* TimeRewindCameraShakeConfigs; // 0x28
		::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>* TimeRewindEntityEventConfigs; // 0x30
		::System::Boolean ShowSpecularMat; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
