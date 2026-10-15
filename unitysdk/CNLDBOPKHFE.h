#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UsePassiveSkill; }

#define CNLDBOPKHFE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA50AA0)
#define CNLDBOPKHFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA50AD0)

inline static constexpr unsigned int CNLDBOPKHFE_TypeDefinitionIndex = 58845;

	class CNLDBOPKHFE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UsePassiveSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UsePassiveSkill*))((::PBYTE)hIl2Cpp + CNLDBOPKHFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLDBOPKHFE_ONTASKBEGIN_OFFSET))(this);
		}

	};
