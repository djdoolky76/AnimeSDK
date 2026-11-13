#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleChangeAvatar_Begin; }
namespace RPG::GameCore { class TaskContext; }

#define EEFGLPFCEGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3146C0)
#define EEFGLPFCEGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3146F0)
#define EEFGLPFCEGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A314730)

inline static constexpr unsigned int EEFGLPFCEGI_TypeDefinitionIndex = 56044;

	class EEFGLPFCEGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_Begin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_Begin*))((::PBYTE)hIl2Cpp + EEFGLPFCEGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFGLPFCEGI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFGLPFCEGI_ONTASKBEGIN_OFFSET))(this);
		}

	};
