#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODDAPNFHBCN.h"
namespace RPG::GameCore { class ChangeMonsterUIDisplay; }
namespace RPG::GameCore { class TaskContext; }

#define IFEICGEJNLL_CTOR_OFFSET UNITYSDK_OFFSET(0x16E7B1B0)
#define IFEICGEJNLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E7B1E0)

inline static constexpr unsigned int IFEICGEJNLL_TypeDefinitionIndex = 56100;

	class IFEICGEJNLL : public ::ODDAPNFHBCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMonsterUIDisplay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMonsterUIDisplay*))((::PBYTE)hIl2Cpp + IFEICGEJNLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEICGEJNLL_ONTASKBEGIN_OFFSET))(this);
		}

	};
