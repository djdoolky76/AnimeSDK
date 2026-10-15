#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsCharacterChangeTarget; }
namespace RPG::GameCore { class TaskContext; }

#define BKLAILCAIMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5A7F0)
#define BKLAILCAIMC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA5A820)

	class BKLAILCAIMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + BKLAILCAIMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLAILCAIMC_EVALUATE_OFFSET))(this);
		}

	};
