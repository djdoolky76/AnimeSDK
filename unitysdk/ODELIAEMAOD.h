#pragma once
#include "unitysdk/unitysdk.h"
class BDPMKFANNDM;
namespace RPG::GameCore { class TaskContext; }

#define ODELIAEMAOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8A380)
#define ODELIAEMAOD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD8A460)

inline static constexpr unsigned int ODELIAEMAOD_TypeDefinitionIndex = 54153;

	class ODELIAEMAOD
	{
	public:
		::Il2CppArray<::System::Int32>* EBCEKKEHNLL; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BDPMKFANNDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BDPMKFANNDM*))((::PBYTE)hIl2Cpp + ODELIAEMAOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODELIAEMAOD_EVALUATE_OFFSET))(this);
		}

	};
