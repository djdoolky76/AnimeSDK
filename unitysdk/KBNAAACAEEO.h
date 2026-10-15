#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionSpawnAoeOnCurSectionRows; }

#define KBNAAACAEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70B4A0)
#define KBNAAACAEEO_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C70B4B0)

inline static constexpr unsigned int KBNAAACAEEO_TypeDefinitionIndex = 37395;

	class KBNAAACAEEO : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* IGHAHBNLIJA; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*))((::PBYTE)hIl2Cpp + KBNAAACAEEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KBNAAACAEEO_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
