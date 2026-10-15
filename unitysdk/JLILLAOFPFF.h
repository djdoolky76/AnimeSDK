#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FateBattleShowRiderUI; }
namespace RPG::GameCore { class TaskContext; }

#define JLILLAOFPFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB245F20)
#define JLILLAOFPFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB245F50)

inline static constexpr unsigned int JLILLAOFPFF_TypeDefinitionIndex = 55031;

	class JLILLAOFPFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FateBattleShowRiderUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FateBattleShowRiderUI*))((::PBYTE)hIl2Cpp + JLILLAOFPFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLILLAOFPFF_ONTASKBEGIN_OFFSET))(this);
		}

	};
