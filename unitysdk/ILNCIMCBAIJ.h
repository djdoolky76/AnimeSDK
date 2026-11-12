#pragma once
#include "unitysdk/unitysdk.h"
class DFOGDNPKPEK;
namespace RPG::GameCore { class TaskContext; }

#define ILNCIMCBAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x174A0780)
#define ILNCIMCBAIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x174A07B0)

inline static constexpr unsigned int ILNCIMCBAIJ_TypeDefinitionIndex = 56117;

	class ILNCIMCBAIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DFOGDNPKPEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DFOGDNPKPEK*))((::PBYTE)hIl2Cpp + ILNCIMCBAIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNCIMCBAIJ_EVALUATE_OFFSET))(this);
		}

	};
