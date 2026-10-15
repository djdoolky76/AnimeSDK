#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillExtensionComplexSkillAIConfig; }

#define JBLJHNCFOJC_FKMJJNGEBIN_OFFSET UNITYSDK_OFFSET(0x16572790)
#define JBLJHNCFOJC_JHMFMFHFAIG_OFFSET UNITYSDK_OFFSET(0x165726B0)

inline static constexpr unsigned int JBLJHNCFOJC_TypeDefinitionIndex = 57681;

	struct alignas(8) JBLJHNCFOJC
	{
		::System::Boolean EJKOCMLIKKF; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SkillAutoLockType GHMBGEBJGNH; // 0x14
		::RPG::GameCore::ComplexSkillAIConfig* NNNODJFIJDF; // 0x18
		::RPG::GameCore::ComplexSkillAIConfig* HFHCGCNDLPK; // 0x20
		::RPG::GameCore::ComplexSkillAIConfig* JNICKJFOHMK; // 0x28
		::System::Int32 JOPHFALPMEH; // 0x30
		/*
		static ::JBLJHNCFOJC JHMFMFHFAIG(::RPG::GameCore::SkillConfig* a1)
		{
			return ((::JBLJHNCFOJC(*)(::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + JBLJHNCFOJC_JHMFMFHFAIG_OFFSET))(a1);
		}
		*/

		/*
		static ::JBLJHNCFOJC FKMJJNGEBIN(::RPG::GameCore::SkillExtensionComplexSkillAIConfig* a1, ::RPG::GameCore::SkillConfig* a2)
		{
			return ((::JBLJHNCFOJC(*)(::RPG::GameCore::SkillExtensionComplexSkillAIConfig*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + JBLJHNCFOJC_FKMJJNGEBIN_OFFSET))(a1, a2);
		}
		*/

	};
