#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }

#define GALHBDPLMKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C629400)
#define GALHBDPLMKG_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C629420)

inline static constexpr unsigned int GALHBDPLMKG_TypeDefinitionIndex = 37374;

	class GALHBDPLMKG : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* IGHAHBNLIJA; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + GALHBDPLMKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + GALHBDPLMKG_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
