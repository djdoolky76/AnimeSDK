#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHLBIPIKFEJ.h"
class FHLBIPIKFEJ;
namespace RPG::GameCore { class StateTreeStateConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PJOAPIGIBGC_CTOR_OFFSET UNITYSDK_OFFSET(0xC296800)

inline static constexpr unsigned int PJOAPIGIBGC_TypeDefinitionIndex = 53635;

	class PJOAPIGIBGC : public ::FHLBIPIKFEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::StateTreeStateConfig* a1, ::RPG::GameCore::TaskContext* a2, ::FHLBIPIKFEJ* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeStateConfig*, ::RPG::GameCore::TaskContext*, ::FHLBIPIKFEJ*, ::System::Int32))((::PBYTE)hIl2Cpp + PJOAPIGIBGC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
