#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareNextUnusedInsertAction; }
namespace RPG::GameCore { class TaskContext; }

#define KABIHDKFPKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D1200)
#define KABIHDKFPKB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2D1230)

inline static constexpr unsigned int KABIHDKFPKB_TypeDefinitionIndex = 54552;

	class KABIHDKFPKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + KABIHDKFPKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIHDKFPKB_EVALUATE_OFFSET))(this);
		}

	};
