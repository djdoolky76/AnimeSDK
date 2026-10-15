#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvCharacterDisableHitBox; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define EJHBNBEDHJL_CTOR_OFFSET UNITYSDK_OFFSET(0x154DB910)
#define EJHBNBEDHJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154DB940)
#define EJHBNBEDHJL_KBBJDEPLEAG_OFFSET UNITYSDK_OFFSET(0x154DBC20)
#define EJHBNBEDHJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154DB980)

	class EJHBNBEDHJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterDisableHitBox* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterDisableHitBox*))((::PBYTE)hIl2Cpp + EJHBNBEDHJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHBNBEDHJL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHBNBEDHJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KBBJDEPLEAG(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJHBNBEDHJL_KBBJDEPLEAG_OFFSET))(this, a1, a2);
		}

	};
