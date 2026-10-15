#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSpecialAvatarType; }
namespace RPG::GameCore { class TaskContext; }

#define HCOJLMKNMOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C22220)
#define HCOJLMKNMOF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C22250)

inline static constexpr unsigned int HCOJLMKNMOF_TypeDefinitionIndex = 54569;

	class HCOJLMKNMOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + HCOJLMKNMOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOJLMKNMOF_EVALUATE_OFFSET))(this);
		}

	};
