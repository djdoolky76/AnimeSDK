#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPhainonChargePointPreshow; }
namespace RPG::GameCore { class TaskContext; }

#define HJBLFABGPEP_CTOR_OFFSET UNITYSDK_OFFSET(0x16C51CD0)
#define HJBLFABGPEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C51D00)

inline static constexpr unsigned int HJBLFABGPEP_TypeDefinitionIndex = 56751;

	class HJBLFABGPEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPhainonChargePointPreshow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPhainonChargePointPreshow*))((::PBYTE)hIl2Cpp + HJBLFABGPEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBLFABGPEP_ONTASKBEGIN_OFFSET))(this);
		}

	};
