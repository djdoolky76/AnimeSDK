#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsCharacterWeaknessActivated; }
namespace RPG::GameCore { class TaskContext; }

#define PJPGIEJCPOF_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC9150)
#define PJPGIEJCPOF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCBC9180)

inline static constexpr unsigned int PJPGIEJCPOF_TypeDefinitionIndex = 55806;

	class PJPGIEJCPOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + PJPGIEJCPOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPGIEJCPOF_EVALUATE_OFFSET))(this);
		}

	};
