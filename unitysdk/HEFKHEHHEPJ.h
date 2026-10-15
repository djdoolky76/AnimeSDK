#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSPChangeTag; }
namespace RPG::GameCore { class TaskContext; }

#define HEFKHEHHEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C41EA0)
#define HEFKHEHHEPJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C41ED0)

inline static constexpr unsigned int HEFKHEHHEPJ_TypeDefinitionIndex = 54887;

	class HEFKHEHHEPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + HEFKHEHHEPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFKHEHHEPJ_EVALUATE_OFFSET))(this);
		}

	};
