#pragma once
#include "unitysdk/unitysdk.h"
class EJHJKIIHLLE;
namespace RPG::GameCore { class TaskContext; }

#define FNONDHFBEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x158851D0)
#define FNONDHFBEMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15885200)

inline static constexpr unsigned int FNONDHFBEMN_TypeDefinitionIndex = 52933;

	class FNONDHFBEMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJHJKIIHLLE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJHJKIIHLLE*))((::PBYTE)hIl2Cpp + FNONDHFBEMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNONDHFBEMN_EVALUATE_OFFSET))(this);
		}

	};
