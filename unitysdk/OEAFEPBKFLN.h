#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EKFMIDBJDIA;
class FNINJACLJOH;
class LNBLMLPMCIK;
namespace RPG::GameCore { class OnEventCallBack; }

#define OEAFEPBKFLN_CTOR_OFFSET UNITYSDK_OFFSET(0x17617AD0)
#define OEAFEPBKFLN_FDJCBCCJAGP_OFFSET UNITYSDK_OFFSET(0x176177B0)
#define OEAFEPBKFLN_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x17617330)
#define OEAFEPBKFLN_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x176172E0)
#define OEAFEPBKFLN_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x17617710)
#define OEAFEPBKFLN_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x17617A10)
#define OEAFEPBKFLN_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0x17617580)

inline static constexpr unsigned int OEAFEPBKFLN_TypeDefinitionIndex = 55348;

	class OEAFEPBKFLN : public ::ENAAOFHBDIB
	{
	public:
		::RPG::GameCore::OnEventCallBack* KHHJEDIBINF; // 0x38
		::System::Int32 MJMODMGHBMG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void FDJCBCCJAGP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_FDJCBCCJAGP_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OEAFEPBKFLN_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
