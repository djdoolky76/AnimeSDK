#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define FJFLOENPIMD_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0x157C37F0)
#define FJFLOENPIMD_CTOR_OFFSET UNITYSDK_OFFSET(0x157C37E0)

inline static constexpr unsigned int FJFLOENPIMD_TypeDefinitionIndex = 63469;

	class FJFLOENPIMD : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + FJFLOENPIMD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFLOENPIMD_AMPLNFFNNJI_OFFSET))(this);
		}

	};
