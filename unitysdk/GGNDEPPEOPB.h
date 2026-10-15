#pragma once
#include "unitysdk/unitysdk.h"
class LNCKPENJCCC;
namespace RPG::GameCore { class TaskContext; }

#define GGNDEPPEOPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A10D00)
#define GGNDEPPEOPB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A10D30)

inline static constexpr unsigned int GGNDEPPEOPB_TypeDefinitionIndex = 53839;

	class GGNDEPPEOPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNCKPENJCCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNCKPENJCCC*))((::PBYTE)hIl2Cpp + GGNDEPPEOPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNDEPPEOPB_EVALUATE_OFFSET))(this);
		}

	};
