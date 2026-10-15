#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAIFactor; }

#define GPLOFGDACCE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15B604B0)

	class GPLOFGDACCE : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAIFactor* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIFactor*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GPLOFGDACCE_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

	};
