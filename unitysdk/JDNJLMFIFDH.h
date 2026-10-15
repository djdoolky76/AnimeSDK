#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByCompareVariableString; }
namespace RPG::GameCore { class TaskContext; }

#define JDNJLMFIFDH_CTOR_OFFSET UNITYSDK_OFFSET(0x16601A00)
#define JDNJLMFIFDH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16601A30)

inline static constexpr unsigned int JDNJLMFIFDH_TypeDefinitionIndex = 52184;

	class JDNJLMFIFDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + JDNJLMFIFDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNJLMFIFDH_EVALUATE_OFFSET))(this);
		}

	};
