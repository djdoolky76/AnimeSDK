#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEJKIKIKHFK.h"
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define MEADMBPIENB_AMPLNFFNNJI_OFFSET UNITYSDK_OFFSET(0xB8B8460)
#define MEADMBPIENB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B8450)

inline static constexpr unsigned int MEADMBPIENB_TypeDefinitionIndex = 63471;

	class MEADMBPIENB : public ::GEJKIKIKHFK
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + MEADMBPIENB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AMPLNFFNNJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEADMBPIENB_AMPLNFFNNJI_OFFSET))(this);
		}

	};
