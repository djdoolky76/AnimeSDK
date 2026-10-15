#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CPCJHAMKGKC;
class FNINJACLJOH;
class LNBLMLPMCIK;

#define ONMFPEKKGGK_BIFCNBNHGEA_OFFSET UNITYSDK_OFFSET(0xBF56320)
#define ONMFPEKKGGK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF56590)
#define ONMFPEKKGGK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBF55E30)
#define ONMFPEKKGGK_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xBF55DE0)
#define ONMFPEKKGGK_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xBF561F0)
#define ONMFPEKKGGK_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBF56240)
#define ONMFPEKKGGK_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0xBF56080)

inline static constexpr unsigned int ONMFPEKKGGK_TypeDefinitionIndex = 53961;

	class ONMFPEKKGGK : public ::ENAAOFHBDIB
	{
	public:
		::System::Int32 MJMODMGHBMG; // 0x38
		::System::Int32 DOMFKEGAJNM; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void BIFCNBNHGEA(::CPCJHAMKGKC* a1, ::CPCJHAMKGKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + ONMFPEKKGGK_BIFCNBNHGEA_OFFSET))(this, a1, a2);
		}

	};
