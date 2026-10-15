#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DefineDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define ILDHEOEPOKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1649BDE0)
#define ILDHEOEPOKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1649BE10)

inline static constexpr unsigned int ILDHEOEPOKJ_TypeDefinitionIndex = 54998;

	class ILDHEOEPOKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineDynamicString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineDynamicString*))((::PBYTE)hIl2Cpp + ILDHEOEPOKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDHEOEPOKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
