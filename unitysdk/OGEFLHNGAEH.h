#pragma once
#include "unitysdk/unitysdk.h"
class CAPNGJEIJOL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace System { class Object; }

#define OGEFLHNGAEH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE4FA10)
#define OGEFLHNGAEH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE4FA90)

inline static constexpr unsigned int OGEFLHNGAEH_TypeDefinitionIndex = 55786;

	class OGEFLHNGAEH
	{
	public:
		::System::Object* PGLHDMEECHP; // 0x28
		::System::Object* IIOFACHKJGP; // 0x30
		::System::Object* FFMHIBPLNDN; // 0x38
		::RPG::GameCore::UniversalHotFixBasePredicate* OPCCJDHNKEC; // 0x40
		::CAPNGJEIJOL* CDMOKNNGKCC; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + OGEFLHNGAEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEFLHNGAEH_EVALUATE_OFFSET))(this);
		}

	};
