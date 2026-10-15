#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeMusicVisualBeatEffectState; }
namespace RPG::GameCore { class TaskContext; }

#define NOKJHAEGJBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF31B0)
#define NOKJHAEGJBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCF31E0)

	class NOKJHAEGJBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMusicVisualBeatEffectState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMusicVisualBeatEffectState*))((::PBYTE)hIl2Cpp + NOKJHAEGJBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJHAEGJBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
