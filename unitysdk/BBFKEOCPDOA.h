#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInStoryMode; }
namespace RPG::GameCore { class TaskContext; }

#define BBFKEOCPDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E86DC0)
#define BBFKEOCPDOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E86DF0)

inline static constexpr unsigned int BBFKEOCPDOA_TypeDefinitionIndex = 53149;

	class BBFKEOCPDOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + BBFKEOCPDOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFKEOCPDOA_EVALUATE_OFFSET))(this);
		}

	};
