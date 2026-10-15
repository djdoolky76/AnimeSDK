#pragma once
#include "unitysdk/unitysdk.h"
class JLCGLIDLLFL;
namespace RPG::GameCore { class TaskContext; }

#define DBPKEKBCECE_CTOR_OFFSET UNITYSDK_OFFSET(0xE22DB80)
#define DBPKEKBCECE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE22DBB0)

inline static constexpr unsigned int DBPKEKBCECE_TypeDefinitionIndex = 52547;

	class DBPKEKBCECE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JLCGLIDLLFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JLCGLIDLLFL*))((::PBYTE)hIl2Cpp + DBPKEKBCECE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPKEKBCECE_EVALUATE_OFFSET))(this);
		}

	};
