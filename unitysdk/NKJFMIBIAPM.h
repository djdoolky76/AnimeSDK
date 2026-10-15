#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DecalPuzzleClear; }
namespace RPG::GameCore { class TaskContext; }

#define NKJFMIBIAPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC38ED0)
#define NKJFMIBIAPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC38F00)

inline static constexpr unsigned int NKJFMIBIAPM_TypeDefinitionIndex = 52729;

	class NKJFMIBIAPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecalPuzzleClear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecalPuzzleClear*))((::PBYTE)hIl2Cpp + NKJFMIBIAPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJFMIBIAPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
