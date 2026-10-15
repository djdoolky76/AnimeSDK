#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCharacterSomatoWidthType; }
namespace RPG::GameCore { class TaskContext; }

#define EDMFHJKKOBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1332B130)
#define EDMFHJKKOBK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1332B160)

inline static constexpr unsigned int EDMFHJKKOBK_TypeDefinitionIndex = 54489;

	class EDMFHJKKOBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + EDMFHJKKOBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFHJKKOBK_EVALUATE_OFFSET))(this);
		}

	};
