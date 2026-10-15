#pragma once
#include "unitysdk/unitysdk.h"
class IGDCNPMKMEB;
namespace RPG::GameCore { class TaskContext; }

#define MEHDILFDNNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C7400)
#define MEHDILFDNNB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8C7430)

inline static constexpr unsigned int MEHDILFDNNB_TypeDefinitionIndex = 55060;

	class MEHDILFDNNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IGDCNPMKMEB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IGDCNPMKMEB*))((::PBYTE)hIl2Cpp + MEHDILFDNNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDILFDNNB_EVALUATE_OFFSET))(this);
		}

	};
