#pragma once
#include "unitysdk/unitysdk.h"
class MLJGEGPAAFF;
namespace RPG::GameCore { class TaskContext; }

#define HGEOAJAKCAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C43D810)
#define HGEOAJAKCAP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C43D840)

inline static constexpr unsigned int HGEOAJAKCAP_TypeDefinitionIndex = 54807;

	class HGEOAJAKCAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MLJGEGPAAFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MLJGEGPAAFF*))((::PBYTE)hIl2Cpp + HGEOAJAKCAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOAJAKCAP_EVALUATE_OFFSET))(this);
		}

	};
