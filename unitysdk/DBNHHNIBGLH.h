#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshFormationCenter; }
namespace RPG::GameCore { class TaskContext; }

#define DBNHHNIBGLH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB92F40)
#define DBNHHNIBGLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB92F70)

inline static constexpr unsigned int DBNHHNIBGLH_TypeDefinitionIndex = 57598;

	class DBNHHNIBGLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshFormationCenter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshFormationCenter*))((::PBYTE)hIl2Cpp + DBNHHNIBGLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNHHNIBGLH_ONTASKBEGIN_OFFSET))(this);
		}

	};
