#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasPlayerMoveInput; }
namespace RPG::GameCore { class TaskContext; }

#define MOCFLCDBFDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B20CAF0)
#define MOCFLCDBFDK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B20CB20)

inline static constexpr unsigned int MOCFLCDBFDK_TypeDefinitionIndex = 55783;

	class MOCFLCDBFDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + MOCFLCDBFDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCFLCDBFDK_EVALUATE_OFFSET))(this);
		}

	};
