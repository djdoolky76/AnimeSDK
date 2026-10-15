#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class RandomTraceProjectileData; }

#define GPCAOOFCFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B323F0)
#define GPCAOOFCFEI_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x15B33100)
#define GPCAOOFCFEI_IAJDHIPELPD_OFFSET UNITYSDK_OFFSET(0x15B32EB0)
#define GPCAOOFCFEI_JIEKNFOOGOP_OFFSET UNITYSDK_OFFSET(0x15B328F0)
#define GPCAOOFCFEI_JNMKCFMJPHN_OFFSET UNITYSDK_OFFSET(0x15B32B20)
#define GPCAOOFCFEI_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0x15B325D0)
#define GPCAOOFCFEI_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x15B32FD0)

inline static constexpr unsigned int GPCAOOFCFEI_TypeDefinitionIndex = 54759;

	class GPCAOOFCFEI : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::RandomTraceProjectileData* KHEPJNBAHHC; // 0x48
		::System::Single BEGAMHBBBIF; // 0x50
		::System::Single FLBLLMPABOJ; // 0x54
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
