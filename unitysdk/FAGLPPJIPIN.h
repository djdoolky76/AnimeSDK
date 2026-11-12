#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyVersusBarProperty; }
namespace RPG::GameCore { class TaskContext; }

#define FAGLPPJIPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1658EFD0)
#define FAGLPPJIPIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1658F000)

inline static constexpr unsigned int FAGLPPJIPIN_TypeDefinitionIndex = 57004;

	class FAGLPPJIPIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyVersusBarProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyVersusBarProperty*))((::PBYTE)hIl2Cpp + FAGLPPJIPIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGLPPJIPIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
