#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvStartTickFloatValue; }
namespace RPG::GameCore { class TaskContext; }

#define EGINKMIEKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x145174C0)
#define EGINKMIEKJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145174F0)

inline static constexpr unsigned int EGINKMIEKJP_TypeDefinitionIndex = 57892;

	class EGINKMIEKJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvStartTickFloatValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvStartTickFloatValue*))((::PBYTE)hIl2Cpp + EGINKMIEKJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGINKMIEKJP_ONTASKBEGIN_OFFSET))(this);
		}

	};
