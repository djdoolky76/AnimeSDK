#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloorCustomBool; }
namespace RPG::GameCore { class TaskContext; }

#define JPFOKIGNDLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B66E0)
#define JPFOKIGNDLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2B6710)

inline static constexpr unsigned int JPFOKIGNDLN_TypeDefinitionIndex = 53230;

	class JPFOKIGNDLN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomBool*))((::PBYTE)hIl2Cpp + JPFOKIGNDLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFOKIGNDLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
