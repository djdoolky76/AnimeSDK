#pragma once
#include "unitysdk/unitysdk.h"
class IIJMPIJAOMG;
namespace RPG::GameCore { class TaskContext; }

#define GJNHJBIDIJG_CTOR_OFFSET UNITYSDK_OFFSET(0x169B68D0)
#define GJNHJBIDIJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169B6900)

inline static constexpr unsigned int GJNHJBIDIJG_TypeDefinitionIndex = 59762;

	class GJNHJBIDIJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IIJMPIJAOMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IIJMPIJAOMG*))((::PBYTE)hIl2Cpp + GJNHJBIDIJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNHJBIDIJG_ONTASKBEGIN_OFFSET))(this);
		}

	};
