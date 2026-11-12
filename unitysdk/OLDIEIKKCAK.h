#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HideSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define OLDIEIKKCAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC7FD9B0)
#define OLDIEIKKCAK_JGEKMJNBDJM_OFFSET UNITYSDK_OFFSET(0xC7FDCB0)
#define OLDIEIKKCAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7FD9E0)

inline static constexpr unsigned int OLDIEIKKCAK_TypeDefinitionIndex = 59405;

	class OLDIEIKKCAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideSummonUnit*))((::PBYTE)hIl2Cpp + OLDIEIKKCAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDIEIKKCAK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JGEKMJNBDJM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OLDIEIKKCAK_JGEKMJNBDJM_OFFSET))(this, a1);
		}

	};
