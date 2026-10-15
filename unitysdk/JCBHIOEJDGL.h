#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define JCBHIOEJDGL_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0x1656BC40)
#define JCBHIOEJDGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1656BC30)

inline static constexpr unsigned int JCBHIOEJDGL_TypeDefinitionIndex = 63478;

	class JCBHIOEJDGL : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + JCBHIOEJDGL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHIOEJDGL_AMPLNFFNNJI_OFFSET))(this);
		}

	};
