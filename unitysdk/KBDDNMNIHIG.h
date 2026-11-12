#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }
namespace RPG::GameCore { class DeviceSettingConfig; }
namespace RPG::GameCore { class FrameTimeBudgetInfo; }
namespace RPG::GameCore { class GameObjectPoolSetting; }
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }

#define KBDDNMNIHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB7A040)
#define KBDDNMNIHIG_DKMDDHAKNLH_OFFSET UNITYSDK_OFFSET(0xBB79E50)

inline static constexpr unsigned int KBDDNMNIHIG_TypeDefinitionIndex = 70232;

	class KBDDNMNIHIG : public ::System::Object
	{
	public:
		::RPG::GameCore::FrameTimeBudgetInfo* JCFFHGMHDIP; // 0x10
		::RPG::GameCore::MonsterAssetPreloadConfig* BPFEBGOBMMM; // 0x18
		::RPG::GameCore::GameObjectPoolSetting* FEOOPFGGIJO; // 0x20
		::RPG::GameCore::AvatarAssetPreloadConfig* BCNOOKFGFMH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDDNMNIHIG_CTOR_OFFSET))(this);
		}

		::System::Void DKMDDHAKNLH(::RPG::GameCore::DeviceSettingConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DeviceSettingConfig*))((::PBYTE)hIl2Cpp + KBDDNMNIHIG_DKMDDHAKNLH_OFFSET))(this, a1);
		}

	};
