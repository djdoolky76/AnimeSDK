#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionSpawnAbility; }

#define DEAHPIGJKKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E8910)
#define DEAHPIGJKKD_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C5E8920)

inline static constexpr unsigned int DEAHPIGJKKD_TypeDefinitionIndex = 37373;

	class DEAHPIGJKKD : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionSpawnAbility* IGHAHBNLIJA; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionSpawnAbility* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionSpawnAbility*))((::PBYTE)hIl2Cpp + DEAHPIGJKKD_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + DEAHPIGJKKD_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
