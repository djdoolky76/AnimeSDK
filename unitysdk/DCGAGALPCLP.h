#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EKFMIDBJDIA;
class FNINJACLJOH;
class LNBLMLPMCIK;
namespace RPG::GameCore { class OnEventCallBack; }

#define DCGAGALPCLP_CTOR_OFFSET UNITYSDK_OFFSET(0xE242FC0)
#define DCGAGALPCLP_FDJCBCCJAGP_OFFSET UNITYSDK_OFFSET(0xE242CB0)
#define DCGAGALPCLP_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xE242840)
#define DCGAGALPCLP_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xE2427F0)
#define DCGAGALPCLP_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xE242C10)
#define DCGAGALPCLP_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xE242F00)
#define DCGAGALPCLP_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0xE242A90)

inline static constexpr unsigned int DCGAGALPCLP_TypeDefinitionIndex = 53962;

	class DCGAGALPCLP : public ::ENAAOFHBDIB
	{
	public:
		::RPG::GameCore::OnEventCallBack* KHHJEDIBINF; // 0x38
		::System::Int32 MJMODMGHBMG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGAGALPCLP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGAGALPCLP_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGAGALPCLP_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + DCGAGALPCLP_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + DCGAGALPCLP_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void FDJCBCCJAGP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DCGAGALPCLP_FDJCBCCJAGP_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCGAGALPCLP_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
