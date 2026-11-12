#pragma once
#include "unitysdk/unitysdk.h"
class EOPFECKEAIK;
namespace RPG::GameCore { class TaskContext; }

#define AHJBPJNOLOM_CTOR_OFFSET UNITYSDK_OFFSET(0xF143A10)
#define AHJBPJNOLOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF143A40)

inline static constexpr unsigned int AHJBPJNOLOM_TypeDefinitionIndex = 56428;

	class AHJBPJNOLOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EOPFECKEAIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EOPFECKEAIK*))((::PBYTE)hIl2Cpp + AHJBPJNOLOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJBPJNOLOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
