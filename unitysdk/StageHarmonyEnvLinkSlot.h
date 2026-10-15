#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"
#include "unitysdk/UnityEngine/Vector4.h"
class GGJFAFONDHN;
namespace EnviromentSystem { class EnviroProperty; }
namespace RPG::Client { class EnvironmentSystem; }

#define STAGEHARMONYENVLINKSLOT_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xE98F930)
#define STAGEHARMONYENVLINKSLOT_CLEIBFKCDIE_1_OFFSET UNITYSDK_OFFSET(0xE9905E0)
#define STAGEHARMONYENVLINKSLOT_CLEIBFKCDIE_OFFSET UNITYSDK_OFFSET(0xE98FDE0)
#define STAGEHARMONYENVLINKSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE990E90)
#define STAGEHARMONYENVLINKSLOT_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xE990C50)
#define STAGEHARMONYENVLINKSLOT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE98F7B0)
#define STAGEHARMONYENVLINKSLOT_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE98F8F0)

	class StageHarmonyEnvLinkSlot : public ::StageHarmonyBaseLinkSlot
	{
	public:
		::EnviromentSystem::EnviromentPropertiesID EnvPropertyID; // 0x40
		::System::Boolean UsePriority; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x50
		::EnviromentSystem::EnviroProperty* _cachedPropertyV1; // 0x58
		::GGJFAFONDHN* _cachedPropertyV2; // 0x60
		::RPG::GameCore::EnviromentControlPriority _lastPriority; // 0x68
		::EnviromentSystem::EnviromentPropertiesID _lastEnvPropertyID; // 0x6C
		::System::Boolean _hasSetPatch; // 0x70
		::System::Boolean _isInitialized; // 0x71
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void CLEIBFKCDIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_CLEIBFKCDIE_OFFSET))(this, a1);
		}

		::System::Void CLEIBFKCDIE_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_CLEIBFKCDIE_1_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYENVLINKSLOT_JKCPLEJCBML_OFFSET))(this);
		}

	};
