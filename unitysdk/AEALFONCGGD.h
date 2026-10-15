#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class HitDamageSplit; }
namespace RPG::GameCore { class TaskContext; }

#define AEALFONCGGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB149CC0)
#define AEALFONCGGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB149CF0)
#define AEALFONCGGD_POBOCAFKFMA_OFFSET UNITYSDK_OFFSET(0xB14A330)

	class AEALFONCGGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HitDamageSplit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HitDamageSplit*))((::PBYTE)hIl2Cpp + AEALFONCGGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEALFONCGGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void POBOCAFKFMA(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + AEALFONCGGD_POBOCAFKFMA_OFFSET))(this, a1);
		}

	};
