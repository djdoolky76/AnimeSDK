#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCanAutoUseItemToRecoverMP; }
namespace RPG::GameCore { class TaskContext; }

#define CFMKDOLABJG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4F190)
#define CFMKDOLABJG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC4F1C0)

inline static constexpr unsigned int CFMKDOLABJG_TypeDefinitionIndex = 52548;

	class CFMKDOLABJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + CFMKDOLABJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMKDOLABJG_EVALUATE_OFFSET))(this);
		}

	};
