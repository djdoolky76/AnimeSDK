#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitVibration; }

#define MKHAIAKFJFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB991D70)
#define MKHAIAKFJFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB991DA0)
#define MKHAIAKFJFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB991DE0)

inline static constexpr unsigned int MKHAIAKFJFM_TypeDefinitionIndex = 56467;

	class MKHAIAKFJFM
	{
	public:
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitVibration* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitVibration*))((::PBYTE)hIl2Cpp + MKHAIAKFJFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHAIAKFJFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKHAIAKFJFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
