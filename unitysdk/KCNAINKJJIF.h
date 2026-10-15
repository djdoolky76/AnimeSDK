#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define KCNAINKJJIF_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0xB33E0E0)
#define KCNAINKJJIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB33E0D0)

inline static constexpr unsigned int KCNAINKJJIF_TypeDefinitionIndex = 63483;

	class KCNAINKJJIF : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + KCNAINKJJIF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNAINKJJIF_AMPLNFFNNJI_OFFSET))(this);
		}

	};
