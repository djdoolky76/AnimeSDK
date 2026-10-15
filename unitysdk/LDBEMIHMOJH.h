#pragma once
#include "unitysdk/unitysdk.h"
class HKOACDGAJNO;
namespace RPG::GameCore { class TaskContext; }

#define LDBEMIHMOJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB615D60)
#define LDBEMIHMOJH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB615D90)

inline static constexpr unsigned int LDBEMIHMOJH_TypeDefinitionIndex = 55398;

	class LDBEMIHMOJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HKOACDGAJNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HKOACDGAJNO*))((::PBYTE)hIl2Cpp + LDBEMIHMOJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBEMIHMOJH_EVALUATE_OFFSET))(this);
		}

	};
