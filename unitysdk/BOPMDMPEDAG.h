#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAISourceValueOverflow; }

#define BOPMDMPEDAG_BDABKMEMACN_OFFSET UNITYSDK_OFFSET(0xC19B0B0)
#define BOPMDMPEDAG_OEEOKDNDKCI_OFFSET UNITYSDK_OFFSET(0xC19B3B0)

inline static constexpr unsigned int BOPMDMPEDAG_TypeDefinitionIndex = 54359;

	class BOPMDMPEDAG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint BDABKMEMACN(::RPG::GameCore::ComplexSkillAISourceValueOverflow* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceValueOverflow*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + BOPMDMPEDAG_BDABKMEMACN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint OEEOKDNDKCI(::RPG::GameCore::ComplexSkillAISourceValueOverflow* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceValueOverflow*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + BOPMDMPEDAG_OEEOKDNDKCI_OFFSET))(a1, a2);
		}

	};
