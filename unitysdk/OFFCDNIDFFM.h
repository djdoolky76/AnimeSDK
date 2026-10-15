#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODHMHHGKCJP.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GKMKOMHLGDC;
class MOMODPMFIKE;
class OFFCDNIDFFM;

#define OFFCDNIDFFM_ACCDKJGBBJF_OFFSET UNITYSDK_OFFSET(0xBE37E30)
#define OFFCDNIDFFM_BCBEMOJBNHO_OFFSET UNITYSDK_OFFSET(0xBE38130)
#define OFFCDNIDFFM_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE37F90)
#define OFFCDNIDFFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE383F0)
#define OFFCDNIDFFM_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0xBE38020)
#define OFFCDNIDFFM_MEJFNANBPOC_OFFSET UNITYSDK_OFFSET(0xBE38360)
#define OFFCDNIDFFM_NCNIPPEOPGP_OFFSET UNITYSDK_OFFSET(0xBE37EE0)
#define OFFCDNIDFFM_OPGMGEDGJIM_OFFSET UNITYSDK_OFFSET(0xBE38240)

inline static constexpr unsigned int OFFCDNIDFFM_TypeDefinitionIndex = 53998;

	class OFFCDNIDFFM : public ::ODHMHHGKCJP
	{
	public:
		::GKMKOMHLGDC* LLLNJMMPNJB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_CTOR_OFFSET))(this);
		}

		::OFFCDNIDFFM* ACCDKJGBBJF(::RPG::GameCore::PropertyStacking a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::OFFCDNIDFFM*(*)(::PVOID, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_ACCDKJGBBJF_OFFSET))(this, a1, a2);
		}

		::MOMODPMFIKE* NCNIPPEOPGP(::RPG::GameCore::FixPoint a1)
		{
			return ((::MOMODPMFIKE*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_NCNIPPEOPGP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_CLEAR_OFFSET))(this);
		}

		::System::Int32 JFOFGJCINFA(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_JFOFGJCINFA_OFFSET))(this, a1, a2);
		}

		::System::Void BCBEMOJBNHO(::System::Int32 a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_BCBEMOJBNHO_OFFSET))(this, a1, a2);
		}

		::System::Void OPGMGEDGJIM(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_OPGMGEDGJIM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint MEJFNANBPOC(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFFCDNIDFFM_MEJFNANBPOC_OFFSET))(this, a1);
		}

	};
