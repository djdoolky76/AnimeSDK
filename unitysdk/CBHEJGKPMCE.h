#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFGENDDOCJJ.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectForUI; }

#define CBHEJGKPMCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A2F10)

	class CBHEJGKPMCE : public ::NFGENDDOCJJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + CBHEJGKPMCE_CTOR_OFFSET))(this, a1, a2);
		}

	};
