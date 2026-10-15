#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAIConfig; }

#define EMJAGEMKACI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15544FF0)

inline static constexpr unsigned int EMJAGEMKACI_TypeDefinitionIndex = 54345;

	class EMJAGEMKACI : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAIConfig* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIConfig*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + EMJAGEMKACI_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

	};
