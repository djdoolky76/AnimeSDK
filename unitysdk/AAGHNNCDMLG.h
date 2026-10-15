#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class ByDistance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define AAGHNNCDMLG_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C4C30)
#define AAGHNNCDMLG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB0C4C60)
#define AAGHNNCDMLG_JIKECJFMBMM_OFFSET UNITYSDK_OFFSET(0xB0C5160)

inline static constexpr unsigned int AAGHNNCDMLG_TypeDefinitionIndex = 54603;

	class AAGHNNCDMLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + AAGHNNCDMLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHNNCDMLG_EVALUATE_OFFSET))(this);
		}

		::System::Single JIKECJFMBMM(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + AAGHNNCDMLG_JIKECJFMBMM_OFFSET))(this, a1, a2);
		}

	};
