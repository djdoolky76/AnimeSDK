#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DPFAEIJOIOD;
class FNINJACLJOH;
class LNBLMLPMCIK;

#define AFGDDKNBIAI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF045E0)
#define AFGDDKNBIAI_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xCF03FF0)
#define AFGDDKNBIAI_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xCF03FA0)
#define AFGDDKNBIAI_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xCF043E0)
#define AFGDDKNBIAI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xCF04590)
#define AFGDDKNBIAI_MGLCNADCEBG_OFFSET UNITYSDK_OFFSET(0xCF04540)
#define AFGDDKNBIAI_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0xCF04360)

inline static constexpr unsigned int AFGDDKNBIAI_TypeDefinitionIndex = 53956;

	class AFGDDKNBIAI : public ::ENAAOFHBDIB
	{
	public:
		::DPFAEIJOIOD* ABCGEOGMKKI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Boolean MGLCNADCEBG(::RPG::GameCore::RtCharacterState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_MGLCNADCEBG_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AFGDDKNBIAI_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
