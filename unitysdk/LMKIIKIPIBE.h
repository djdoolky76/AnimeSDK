#pragma once
#include "unitysdk/unitysdk.h"
class DLDHCDCAEPM;
namespace RPG::GameCore { class TaskContext; }

#define LMKIIKIPIBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC02AC10)
#define LMKIIKIPIBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC02AC40)

inline static constexpr unsigned int LMKIIKIPIBE_TypeDefinitionIndex = 55004;

	class LMKIIKIPIBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DLDHCDCAEPM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DLDHCDCAEPM*))((::PBYTE)hIl2Cpp + LMKIIKIPIBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKIIKIPIBE_EVALUATE_OFFSET))(this);
		}

	};
