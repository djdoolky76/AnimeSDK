#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDieAnimFinished; }
namespace RPG::GameCore { class TaskContext; }

#define DIPEJKFJFCH_CTOR_OFFSET UNITYSDK_OFFSET(0xF2213F0)
#define DIPEJKFJFCH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF221420)

inline static constexpr unsigned int DIPEJKFJFCH_TypeDefinitionIndex = 54902;

	class DIPEJKFJFCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + DIPEJKFJFCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPEJKFJFCH_EVALUATE_OFFSET))(this);
		}

	};
