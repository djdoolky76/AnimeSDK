#pragma once
#include "unitysdk/unitysdk.h"
class LHABGIKFJLH;
namespace RPG::GameCore { class TaskContext; }

#define HHAHKBCNNAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA7460)
#define HHAHKBCNNAK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CA7490)

inline static constexpr unsigned int HHAHKBCNNAK_TypeDefinitionIndex = 53823;

	class HHAHKBCNNAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LHABGIKFJLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LHABGIKFJLH*))((::PBYTE)hIl2Cpp + HHAHKBCNNAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAHKBCNNAK_EVALUATE_OFFSET))(this);
		}

	};
