#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAIBattleGlobalData; }

#define GMGINMOGADF_CAIIJIEBOOK_OFFSET UNITYSDK_OFFSET(0x16C7E0F0)
#define GMGINMOGADF_EODEEGJNJJE_OFFSET UNITYSDK_OFFSET(0x16C7E340)
#define GMGINMOGADF_ILNOOLHOGIN_OFFSET UNITYSDK_OFFSET(0x16C7E5E0)
#define GMGINMOGADF_JGINIGAMOCI_OFFSET UNITYSDK_OFFSET(0x16C7E7E0)
#define GMGINMOGADF_JKKPCCIADLF_OFFSET UNITYSDK_OFFSET(0x16C7DF30)
#define GMGINMOGADF_OCPAHDMALDH_OFFSET UNITYSDK_OFFSET(0x16C7E9B0)
#define GMGINMOGADF_ONAOJLFNCGM_OFFSET UNITYSDK_OFFSET(0x16C7E6E0)
#define GMGINMOGADF_ONPPBOKMMKL_OFFSET UNITYSDK_OFFSET(0x16C7E8E0)
#define GMGINMOGADF_PHHLOHKBGPN_OFFSET UNITYSDK_OFFSET(0x16C7E490)

inline static constexpr unsigned int GMGINMOGADF_TypeDefinitionIndex = 55524;

	class GMGINMOGADF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint JKKPCCIADLF(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_JKKPCCIADLF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint CAIIJIEBOOK(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_CAIIJIEBOOK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint EODEEGJNJJE(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_EODEEGJNJJE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint PHHLOHKBGPN(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_PHHLOHKBGPN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint ILNOOLHOGIN(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_ILNOOLHOGIN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint ONAOJLFNCGM(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_ONAOJLFNCGM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint JGINIGAMOCI(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_JGINIGAMOCI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint ONPPBOKMMKL(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_ONPPBOKMMKL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint OCPAHDMALDH(::RPG::GameCore::ComplexSkillAIBattleGlobalData* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIBattleGlobalData*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + GMGINMOGADF_OCPAHDMALDH_OFFSET))(a1, a2);
		}

	};
