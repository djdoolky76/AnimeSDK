#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunPlayPuzzleSetupStartupMode; }

#define FGLJNDGCANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1575BA00)
#define FGLJNDGCANK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1575BA30)

inline static constexpr unsigned int FGLJNDGCANK_TypeDefinitionIndex = 58957;

	class FGLJNDGCANK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*))((::PBYTE)hIl2Cpp + FGLJNDGCANK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLJNDGCANK_ONTASKBEGIN_OFFSET))(this);
		}

	};
