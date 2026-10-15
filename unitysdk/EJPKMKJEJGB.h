#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_SetAIVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define EJPKMKJEJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x154F9F00)
#define EJPKMKJEJGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154F9F30)

inline static constexpr unsigned int EJPKMKJEJGB_TypeDefinitionIndex = 52101;

	class EJPKMKJEJGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_SetAIVariableBool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_SetAIVariableBool*))((::PBYTE)hIl2Cpp + EJPKMKJEJGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKMKJEJGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
