#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define JDBMKCENODH_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0x165AFC20)
#define JDBMKCENODH_CTOR_OFFSET UNITYSDK_OFFSET(0x165AFC10)

inline static constexpr unsigned int JDBMKCENODH_TypeDefinitionIndex = 63479;

	class JDBMKCENODH : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + JDBMKCENODH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBMKCENODH_AMPLNFFNNJI_OFFSET))(this);
		}

	};
