#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsRebuiltSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define JFBHPLJPAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16631F60)
#define JFBHPLJPAPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16631F90)

inline static constexpr unsigned int JFBHPLJPAPH_TypeDefinitionIndex = 54680;

	class JFBHPLJPAPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + JFBHPLJPAPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBHPLJPAPH_EVALUATE_OFFSET))(this);
		}

	};
