#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtSkillAbort; }
namespace RPG::GameCore { class TaskContext; }

#define DAAMCAPPBNA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB07F0)
#define DAAMCAPPBNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFB0820)

inline static constexpr unsigned int DAAMCAPPBNA_TypeDefinitionIndex = 53931;

	class DAAMCAPPBNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillAbort* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillAbort*))((::PBYTE)hIl2Cpp + DAAMCAPPBNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAMCAPPBNA_ONTASKBEGIN_OFFSET))(this);
		}

	};
