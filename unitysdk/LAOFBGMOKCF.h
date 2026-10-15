#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }

#define LAOFBGMOKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71FE40)
#define LAOFBGMOKCF_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C71FE50)

inline static constexpr unsigned int LAOFBGMOKCF_TypeDefinitionIndex = 37372;

	class LAOFBGMOKCF : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionEnableTargetLockCat* IGHAHBNLIJA; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + LAOFBGMOKCF_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + LAOFBGMOKCF_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
