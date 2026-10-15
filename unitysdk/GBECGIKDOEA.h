#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFearCharacterCount; }
namespace RPG::GameCore { class TaskContext; }

#define GBECGIKDOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1594B9F0)
#define GBECGIKDOEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1594BA20)

inline static constexpr unsigned int GBECGIKDOEA_TypeDefinitionIndex = 54534;

	class GBECGIKDOEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + GBECGIKDOEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBECGIKDOEA_EVALUATE_OFFSET))(this);
		}

	};
