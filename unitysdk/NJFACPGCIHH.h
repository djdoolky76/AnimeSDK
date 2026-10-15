#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBFMBHHONDO.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectListForUI; }

#define NJFACPGCIHH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0D970)

inline static constexpr unsigned int NJFACPGCIHH_TypeDefinitionIndex = 55729;

	class NJFACPGCIHH : public ::BBFMBHHONDO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + NJFACPGCIHH_CTOR_OFFSET))(this, a1, a2);
		}

	};
