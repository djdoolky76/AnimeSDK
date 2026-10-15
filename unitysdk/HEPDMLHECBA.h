#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureAbortAttack; }
namespace RPG::GameCore { class TaskContext; }

#define HEPDMLHECBA_CIGFBOHPKNJ_OFFSET UNITYSDK_OFFSET(0x15C640D0)
#define HEPDMLHECBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C64050)
#define HEPDMLHECBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C64080)

	class HEPDMLHECBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureAbortAttack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureAbortAttack*))((::PBYTE)hIl2Cpp + HEPDMLHECBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPDMLHECBA_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void CIGFBOHPKNJ(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HEPDMLHECBA_CIGFBOHPKNJ_OFFSET))(a1);
		}

	};
