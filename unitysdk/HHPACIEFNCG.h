#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }

#define HHPACIEFNCG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15CD6080)

	class HHPACIEFNCG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAIFactorGroup* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIFactorGroup*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + HHPACIEFNCG_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

	};
