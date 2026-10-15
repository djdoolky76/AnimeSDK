#pragma once
#include "unitysdk/unitysdk.h"
class HMGEOKPCKOK;
namespace RPG::GameCore { class TaskContext; }

#define HOGGGGAMMNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB4170)
#define HOGGGGAMMNG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DB41A0)

inline static constexpr unsigned int HOGGGGAMMNG_TypeDefinitionIndex = 53336;

	class HOGGGGAMMNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HMGEOKPCKOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HMGEOKPCKOK*))((::PBYTE)hIl2Cpp + HOGGGGAMMNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGGGAMMNG_EVALUATE_OFFSET))(this);
		}

	};
