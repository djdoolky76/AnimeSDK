#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotSetSectionVisible; }
namespace RPG::GameCore { class TaskContext; }

#define ENEKPEBIDPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155A8D10)
#define ENEKPEBIDPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155A8D40)

inline static constexpr unsigned int ENEKPEBIDPJ_TypeDefinitionIndex = 58751;

	class ENEKPEBIDPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotSetSectionVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotSetSectionVisible*))((::PBYTE)hIl2Cpp + ENEKPEBIDPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKPEBIDPJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
