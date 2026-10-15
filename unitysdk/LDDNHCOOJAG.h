#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define LDDNHCOOJAG_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0xB617980)
#define LDDNHCOOJAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB617970)

inline static constexpr unsigned int LDDNHCOOJAG_TypeDefinitionIndex = 63472;

	class LDDNHCOOJAG : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + LDDNHCOOJAG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDNHCOOJAG_AMPLNFFNNJI_OFFSET))(this);
		}

	};
