#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class RandomTraceProjectileData; }

#define GPCAOOFCFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3DDF0)
#define GPCAOOFCFEI_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x15B3EB10)
#define GPCAOOFCFEI_IAJDHIPELPD_OFFSET UNITYSDK_OFFSET(0x15B3E8C0)
#define GPCAOOFCFEI_JIEKNFOOGOP_OFFSET UNITYSDK_OFFSET(0x15B3E300)
#define GPCAOOFCFEI_JNMKCFMJPHN_OFFSET UNITYSDK_OFFSET(0x15B3E530)
#define GPCAOOFCFEI_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0x15B3DFD0)
#define GPCAOOFCFEI_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x15B3E9E0)

	class GPCAOOFCFEI : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::RandomTraceProjectileData* KHEPJNBAHHC; // 0x48
		::System::Single FLBLLMPABOJ; // 0x50
		::System::Single BEGAMHBBBIF; // 0x54
		::System::Single FONHIPFHPNI; // 0x58
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_NNALPNDFFIJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 JNMKCFMJPHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_JNMKCFMJPHN_OFFSET))(this);
		}

		::System::Void IAJDHIPELPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_IAJDHIPELPD_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 JIEKNFOOGOP(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GPCAOOFCFEI_JIEKNFOOGOP_OFFSET))(this, a1, a2);
		}

	};
