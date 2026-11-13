#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define MIFNKAJAJOF_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0x1A38D2D0)
#define MIFNKAJAJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A38D2C0)

inline static constexpr unsigned int MIFNKAJAJOF_TypeDefinitionIndex = 64919;

	class MIFNKAJAJOF : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + MIFNKAJAJOF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFNKAJAJOF_AMPLNFFNNJI_OFFSET))(this);
		}

	};
