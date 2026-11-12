#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define MOKCHFOPFAH_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0xC2F13B0)
#define MOKCHFOPFAH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F13A0)

inline static constexpr unsigned int MOKCHFOPFAH_TypeDefinitionIndex = 64918;

	class MOKCHFOPFAH : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + MOKCHFOPFAH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKCHFOPFAH_AMPLNFFNNJI_OFFSET))(this);
		}

	};
